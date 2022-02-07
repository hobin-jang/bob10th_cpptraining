#include "pch.h"
#include "DisplayBuffer.h"

CDisplayBuffer::CDisplayBuffer(void)
	: std::vector<std::wstring>()
{
}

CDisplayBuffer::~CDisplayBuffer(void)
{
}

void CDisplayBuffer::Clear(void)
{
	for (auto& strLine : *this)
	{
		size_t tLength = strLine.size();
		strLine.clear();
		strLine.resize(tLength, ' ');
	}
}

void CDisplayBuffer::DrawRectangle(int nLeft, int nTop, int nRight, int nBottom)
{
	for (int y = nTop + 1; y <= nBottom - 1; y++)
	{
		if (y < 0 || this->size() <= y)
			continue;

		for (int x = nLeft + 1; x <= nRight - 1; x++)
		{
			if (x < 0 || (*this)[y].size() <= x)
				continue;

			(*this)[y][x] = ' ';
		}
	}

	for (int x = nLeft + 1; x < nRight; x++)
	{
		if (x < 0 || (*this)[0].size() <= x)
			continue;

		if (0 <= nTop && nTop < (*this).size())
			(*this)[nTop][x] = 6;// '-';

		if (0 <= nBottom && nBottom < (*this).size())
			(*this)[nBottom][x] = 6;// '-';
	}

	for (int y = nTop; y <= nBottom; y++)
	{
		if (y < 0 || (*this).size() <= y)
			continue;

		if (0 <= nLeft && nLeft < (*this)[0].size())
		{
			if (y == nTop)
				(*this)[y][nLeft] = 1;
			else if (y == nBottom)
				(*this)[y][nLeft] = 3;
			else
				(*this)[y][nLeft] = 5;// '|';
		}

		if (0 <= nRight && nRight < (*this)[0].size())
		{
			if (y == nTop)
				(*this)[y][nRight] = 2;
			else if (y == nBottom)
				(*this)[y][nRight] = 4;
			else
				(*this)[y][nRight] = 5;// '|';
		}
	}
}

void CDisplayBuffer::BitBlt(ST_POINT pos, const CDisplayBuffer& buffer)
{
	int nTargetY = std::min<int>(pos.y, 0);
	int nMaxTargetY = std::min<int>(pos.y + buffer.size(), size());

	for (int y=0; y < buffer.size() && nTargetY <nMaxTargetY; y++, nTargetY++)
	{
		int nTargetX = std::min<int>(pos.x, 0);
		int nMaxTargetX = std::min<int>(pos.x + buffer[y].size(), at(y).size());
	}
}
