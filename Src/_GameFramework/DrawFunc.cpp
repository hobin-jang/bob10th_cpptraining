#include "pch.h"
#include "DrawFunc.h"

void Clear(CDisplayBuffer& buffer)
{
	for (std::wstring& strLine : buffer)
	{
		size_t tLength = strLine.size();
		strLine.clear();
		strLine.resize(tLength, ' ');
	}
}

void DrawRectangle(CDisplayBuffer& buffer, ST_VECTOR ptLeftTop, ST_VECTOR ptRightBtm)
{
	DrawRectangle(buffer, ptLeftTop.x, ptLeftTop.y, ptRightBtm.x, ptRightBtm.y);
}

void DrawRectangle(CDisplayBuffer& buffer, int nLeft, int nTop, int nRight, int nBottom)
{
	for (int y = nTop + 1; y <= nBottom - 1; y++)
	{
		if (y < 0 || buffer.size() <= y)
			continue;

		for (int x = nLeft + 1; x <= nRight - 1; x++)
		{
			if (x < 0 || buffer[y].size() <= x)
				continue;

			buffer[y][x] = ' ';
		}
	}

	for (int x = nLeft+1; x < nRight; x++)
	{
		if (x < 0 || buffer[0].size() <= x)
			continue;

		if (0 <= nTop && nTop < buffer.size())
			buffer[nTop][x] = '-';

		if (0 <= nBottom && nBottom < buffer.size())
			buffer[nBottom][x] = '-';
	}

	for (int y = nTop; y <= nBottom; y++)
	{
		if (y < 0 || buffer.size() <= y)
			continue;

		if (0 <= nLeft && nLeft < buffer[0].size())
		{
			if(y == nTop)
				buffer[y][nLeft] = 1;
			else if (y == nBottom)
				buffer[y][nLeft] = 3;
			else
				buffer[y][nLeft] = '|';
		}

		if (0 <= nRight && nRight < buffer[0].size())
		{
			if (y == nTop)
				buffer[y][nRight] = 2;
			else if (y == nBottom)
				buffer[y][nRight] = 4;
			else
				buffer[y][nRight] = '|';
		}
	}
}
