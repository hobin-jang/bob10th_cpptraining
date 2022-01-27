#include "pch.h"
#include "ConsoleOutput.h"
#include "HelperFunc.h"

CConsoleOutput::CConsoleOutput(void)
    : m_vecBackBuffer()
    , m_nViewWidth(0)
    , m_nViewHeight(0)
{
}

bool CConsoleOutput::InitConsole(std::string strTitle, int w, int h)
{
    try
    {
        SetConsoleTitleA(strTitle.c_str());

        m_vecBackBuffer.resize(h + 1);
        for (auto& strLine : m_vecBackBuffer)
            strLine.resize(w + 1, ' ');

        // Set output mode to handle virtual terminal sequences
        HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
        if (hOut == INVALID_HANDLE_VALUE)
            throw std::runtime_error("Failed to GetStdHandle(STD_OUTPUT_HANDLE)");

        DWORD dwMode = 0;
        if (!GetConsoleMode(hOut, &dwMode))
            throw std::runtime_error("Failed to GetConsoleMode()");

        dwMode |= DISABLE_NEWLINE_AUTO_RETURN | ENABLE_VIRTUAL_TERMINAL_PROCESSING;
        if (!SetConsoleMode(hOut, dwMode))
            throw std::runtime_error("Failed to SetConsoleMode(ENABLE_VIRTUAL_TERMINAL_PROCESSING)");

        CONSOLE_SCREEN_BUFFER_INFOEX stBufferInfo;
        stBufferInfo.cbSize = sizeof(stBufferInfo);
        if (!GetConsoleScreenBufferInfoEx(hOut, &stBufferInfo))
            throw std::runtime_error("Failed to GetConsoleScreenBufferInfoEx");

        stBufferInfo.dwSize.X = w * 2 + 10;
        stBufferInfo.dwSize.Y = h + 10;
        stBufferInfo.dwMaximumWindowSize.X = w * 2 + 10;
        stBufferInfo.dwMaximumWindowSize.Y = h + 10;
        if (!SetConsoleScreenBufferInfoEx(hOut, &stBufferInfo))
            throw std::runtime_error("Failed to SetConsoleScreenBufferInfoEx");

        SMALL_RECT stDisplayArea = { 0, 0, w + 3, h + 3 };
        if(!SetConsoleWindowInfo(hOut, TRUE, &stDisplayArea))
            throw std::runtime_error("Failed to SetConsoleWindowInfo");

        SetConsoleActiveScreenBuffer(hOut);
    }
    catch (const std::exception& e)
    {
        printf("%s\n", e.what());
        return false;
    }
    
    return true;
}

void CConsoleOutput::SetViewPort(int w, int h)
{
    m_nViewWidth = w + 1;
    m_nViewHeight = h + 1;
}

void CConsoleOutput::Flip(const ST_VECTOR& pos, CDisplayBuffer& vecDisplayBuffer)
{
    vecDisplayBuffer.resize(m_nViewHeight);

    int nLeft = (int)pos.x - (m_nViewWidth) / 2;
    int nRight = (int)pos.x + (m_nViewWidth) / 2;
    int nTop = (int)pos.y - (m_nViewHeight) / 2;
    int nBottom = (int)pos.y + (m_nViewHeight) / 2;

    for (std::wstring& strLine : vecDisplayBuffer)
        strLine.resize(m_nViewWidth, ' ');

    const int nMaxHeight = MIN(MIN(m_nViewHeight, nBottom), (int)m_vecBackBuffer.size());
    for (int y = MAX(nTop, 0); y < nMaxHeight; y++)
    {
        const int nScreenY = y - nTop;
        const int nMaxWidth = MIN(MIN(nRight, (int)m_vecBackBuffer[y].size()), nLeft + vecDisplayBuffer[nScreenY].size());
        for (int x = MAX(nLeft, 0); x < nMaxWidth; x++)
        {
            const int nScreenX = x - nLeft;
            vecDisplayBuffer[nScreenY][nScreenX] = m_vecBackBuffer[y][x];
        }
    }

    m_vecBackBuffer.Clear();
}

void CConsoleOutput::Render(const CDisplayBuffer& vecDisplayBuffer)
{
    {
        // ANSI Escape sequence
        // 참고: http://ascii-table.com/ansi-escape-sequences-vt-100.php
        printf("\x1b[H");
    }

    {   // FPS 표기
        static std::list<DWORD> s_FrameTick;
        DWORD dwCurrentTick = GetTickCount();
        s_FrameTick.push_back(dwCurrentTick);
        while (s_FrameTick.front() + 1000 < dwCurrentTick)
            s_FrameTick.pop_front();
        printf("FPS: %u                                   \n", (DWORD)s_FrameTick.size());
    }

    for (const std::wstring& strLineW : vecDisplayBuffer)
    {
        size_t tPos = 0;
        std::string strOutput;
        strOutput.resize(strLineW.length() * 2);
        std::string strLine = core::MBSFromWCS(strLineW);
        for (char w : strLine)
        {
            if (w == 2 || w == 4 || w == 6)   // UI 외곽선만 연결함
            {
                strOutput[tPos++] = 6;
                strOutput[tPos++] = w;
            }
            else if (w == 1 || w == 3 || w == 5)   // UI 외곽선: 세로선
            {
                strOutput[tPos++] = ' ';
                strOutput[tPos++] = w;
            }
            else if (0 < w)
            {
                strOutput[tPos++] = w;
                strOutput[tPos++] = ' ';
            }
            else if( w < 0)
                strOutput[tPos++] = w;
        }
        strOutput.resize(tPos);
        printf("%s\n", strOutput.c_str());
    }
}

