#include "pch.h"
#include "ConsoleOutput.h"

CConsoleOutput::CConsoleOutput(void)
    : m_vecBackBuffer()
    , m_nViewWidth(0)
    , m_nViewHeight(0)
{
    InitConsole();
}

bool CConsoleOutput::InitConsole(void)
{
    try
    {
        SetConsoleTitleA(WINDOW_TITLE);

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

        stBufferInfo.dwSize.X = g_nConsoleW + 10;
        stBufferInfo.dwMaximumWindowSize.X = g_nConsoleW + 10;
        if (!SetConsoleScreenBufferInfoEx(hOut, &stBufferInfo))
            throw std::runtime_error("Failed to SetConsoleScreenBufferInfoEx");

        SMALL_RECT stDisplayArea = { 0, 0, g_nConsoleW + 3, g_nConsoleH + 3 };
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

int CConsoleOutput::CreateBuffer(int nWidth, int nHeight)
{
    m_vecBackBuffer.resize(nHeight);
    for (std::wstring& strLine : m_vecBackBuffer)
        strLine.resize(nWidth, ' ');

    return 0;
}

void CConsoleOutput::SetViewPort(int nViewWidth, int nViewHeight)
{
    m_nViewWidth = nViewWidth;
    m_nViewHeight = nViewHeight;
}

void CConsoleOutput::Flip(const ST_VECTOR& pos, CDisplayBuffer& vecDisplayBuffer)
{
    vecDisplayBuffer.resize(m_nViewHeight);

    int nLeft = pos.x - (m_nViewWidth) / 2;
    int nRight = pos.x + (m_nViewWidth) / 2;
    int nTop = pos.y - (m_nViewHeight) / 2;
    int nBottom = pos.y + (m_nViewHeight) / 2;

    for (std::wstring& strLine : vecDisplayBuffer)
        strLine.resize(m_nViewWidth, ' ');

    int nMaxHeight = MIN(MIN(m_nViewHeight, nBottom), m_vecBackBuffer.size());
    for (int y = MAX(nTop, 0); y < nMaxHeight; y++)
    {
        int nMaxWidth = MIN(MIN(m_nViewWidth, nRight), m_vecBackBuffer[y].size());
        for (int x = MAX(nLeft, 0); x < nMaxWidth; x++)
        {
            int nScreenX = x - nLeft;
            int nScreenY = y - nTop;
            vecDisplayBuffer[nScreenY][nScreenX] = m_vecBackBuffer[y][x];
        }
    }
}

void CConsoleOutput::Render(const CDisplayBuffer& vecDisplayBuffer)
{
    {
        // ANSI Escape sequence
        // 참고: http://ascii-table.com/ansi-escape-sequences-vt-100.php
        wprintf(L"\x1b[H");
    }

    {   // FPS 표기
        static std::list<DWORD> s_FrameTick;
        DWORD dwCurrentTick = GetTickCount();
        s_FrameTick.push_back(dwCurrentTick);
        while (s_FrameTick.front() + 1000 < dwCurrentTick)
            s_FrameTick.pop_front();
        wprintf(L"FPS: %u\n", (DWORD)s_FrameTick.size());
    }

    for (const std::wstring& strLine : vecDisplayBuffer)
        wprintf(L"%s\n", strLine.c_str());
}

