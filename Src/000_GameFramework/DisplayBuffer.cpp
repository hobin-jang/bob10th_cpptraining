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

void CDisplayBuffer::DrawString(ST_POINT pos, std::string strText, size_t tLength)
{
	DrawString(pos.x, pos.y, strText, tLength);
}

void CDisplayBuffer::DrawString(int x, int y, std::string strText, size_t tLength)
{
	DrawString(x, y, unicode::WCSFromMBS(strText), tLength);
}

void CDisplayBuffer::DrawString(ST_POINT pos, std::wstring strText, size_t tLength)
{
	DrawString(pos.x, pos.y, strText, tLength);
}

void CDisplayBuffer::DrawString(int x, int y, std::wstring strText, size_t tLength)
{
	if (y < 0 || this->size() <= y)
		return;

	const size_t tMaxLength = std::min<size_t>(strText.length(), tLength);
	for (size_t i = 0; i < tMaxLength; i++)
	{
		int nTargetX = x + i;
		if (nTargetX < 0)
			continue;
		if (this->at(y).size() <= nTargetX)
			break;
		this->at(y)[nTargetX] = strText[i];
	}
}

void CDisplayBuffer::BitBlt(short x, short y, const CDisplayBuffer& buffer)
{
	BitBlt(ST_POINT{ x, y }, buffer);
}

void CDisplayBuffer::BitBlt(ST_POINT pos, const CDisplayBuffer& buffer)
{
	for (int y = 0; y < buffer.size(); y++)
	{
		int nDestY = y + pos.y;
		if (nDestY < 0 || this->size() <= nDestY)
			continue;

		for (int x = 0; x < buffer[y].size(); x++)
		{
			int nDestX = x + pos.x;
			if (nDestX < 0 || at(y).size() <= nDestX)
				continue;

			at(nDestY)[nDestX] = buffer[y][x];
		}
	}
}
