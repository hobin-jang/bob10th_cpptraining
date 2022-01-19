#include "stdafx.h"
#include "ConsoleOutput.h"

CConsoleOutput::CConsoleOutput(void)
    : m_vecBackBuffer()
    , m_nViewWidth(0)
    , m_nViewHeight(0)
{
}

bool CConsoleOutput::EnableVTMode(void)
{
    try
    {
        // Set output mode to handle virtual terminal sequences
        HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
        if (hOut == INVALID_HANDLE_VALUE)
            throw std::runtime_error("Failed to GetStdHandle(STD_OUTPUT_HANDLE)");

        DWORD dwMode = 0;
        if (!GetConsoleMode(hOut, &dwMode))
            throw std::runtime_error("Failed to GetConsoleMode()");

        dwMode |= ENABLE_VIRTUAL_TERMINAL_PROCESSING;
        if (!SetConsoleMode(hOut, dwMode))
            throw std::runtime_error("Failed to SetConsoleMode(ENABLE_VIRTUAL_TERMINAL_PROCESSING)");
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
    if (!EnableVTMode())
        return -1;

    m_vecBackBuffer.resize(nHeight);
    for (std::string& strLine : m_vecBackBuffer)
    {
        strLine.resize(nWidth);
        memset((void*)strLine.c_str(), ' ', strLine.size());
    }

    return 0;
}

#define MAX(x, y) ((x) < (y))? (y) : (x)
#define MIN(x, y) ((x) < (y))? (x) : (y)

void CConsoleOutput::SetViewPort(int nViewWidth, int nViewHeight)
{
    m_nViewWidth = nViewWidth;
    m_nViewHeight = nViewHeight;
}

void CConsoleOutput::Render(int nCameraPosX, int nCameraPosY)
{
    std::vector<std::string> vecDisplayBuffer;
    Flip(nCameraPosX, nCameraPosY, vecDisplayBuffer);
    Print(vecDisplayBuffer);
}

void CConsoleOutput::Flip(int nCameraPosX, int nCameraPosY, std::vector<std::string>& vecDisplayBuffer)
{
    vecDisplayBuffer.resize(m_nViewHeight);

    int nLeft = nCameraPosX - (m_nViewWidth) / 2;
    int nRight = nCameraPosX + (m_nViewWidth) / 2;
    int nTop = nCameraPosY - (m_nViewHeight) / 2;
    int nBottom = nCameraPosY + (m_nViewHeight) / 2;

    for (std::string& strLine : vecDisplayBuffer)
    {
        strLine.resize(m_nViewWidth);
        memset((void*)strLine.c_str(), ' ', strLine.size());
    }

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

void CConsoleOutput::Print(const std::vector<std::string>& vecDisplayBuffer)
{
    // ANSI Escape sequence
    // Âü°í: http://ascii-table.com/ansi-escape-sequences-vt-100.php
    printf("\x1b[H");

    for (const std::string& strLine : vecDisplayBuffer)
        printf("%s\n", strLine.c_str());
}

