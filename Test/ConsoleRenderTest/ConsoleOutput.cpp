#include "stdafx.h"
#include "ConsoleOutput.h"
#include <stdexcept>

CConsoleOutput::CConsoleOutput(void)
	: m_vecBuffer()
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

int CConsoleOutput::Create(int nWidth, int nHeight)
{
	if (!EnableVTMode())
		return -1;

	m_vecBuffer.resize(nHeight);
	for (std::string& strLine : m_vecBuffer)
	{
		strLine.resize(nWidth);
		memset((void*)strLine.c_str(), ' ', strLine.size());
	}

	return 0;
}

void CConsoleOutput::ViewPort(int nViewWidth, int nViewHeight)
{
	m_nViewWidth = nViewWidth;
	m_nViewHeight = nViewHeight;
}

#define MAX(x, y) ((x) < (y))? (y) : (x)
#define MIN(x, y) ((x) < (y))? (x) : (y)

void CConsoleOutput::Render(int nCameraPosX, int nCameraPosY)
{
	std::vector<std::string> vecScreenBuffer;
	vecScreenBuffer.resize(m_nViewHeight);

	int nLeft = nCameraPosX - (m_nViewWidth) / 2;
	int nRight = nCameraPosX + (m_nViewWidth) / 2;
	int nTop = nCameraPosY - (m_nViewHeight) / 2;
	int nBottom = nCameraPosY + (m_nViewHeight) / 2;

	for (std::string& strLine : vecScreenBuffer)
	{
		strLine.resize(m_nViewWidth);
		memset((void*)strLine.c_str(), ' ', strLine.size());
	}

	int nMaxHeight = MIN(MIN(m_nViewHeight, nBottom), m_vecBuffer.size());
	for (int y = MAX(nTop, 0); y < nMaxHeight; y++)
	{
		int nMaxWidth = MIN(MIN(m_nViewWidth, nRight), m_vecBuffer[y].size());
		for (int x = MAX(nLeft, 0); x < nMaxWidth; x++)
		{
			int nScreenX = x - nLeft;
			int nScreenY = y - nTop;
			vecScreenBuffer[nScreenY][nScreenX] = m_vecBuffer[y][x];
		}
	}

	// ANSI Escape sequence
	// Âü°í: http://ascii-table.com/ansi-escape-sequences-vt-100.php
	printf("\x1b[H");
	for (std::string& strLine : vecScreenBuffer)
		printf("%s\n", strLine.c_str());
}

std::vector<std::string>& CConsoleOutput::GetBuffer(void)
{
	return m_vecBuffer;
}
