#pragma once

#include "Struct.h"

class CDisplayBuffer : public std::vector<std::wstring>
{
public:
	CDisplayBuffer(void);
	virtual ~CDisplayBuffer(void);

	void Clear(void);
	void DrawRectangle(int nLeft, int nTop, int nRight, int nBottom);
	void DrawString(ST_POINT pos, std::string strText, size_t tLength = -1);
	void DrawString(int x, int y, std::string strText, size_t tLength = -1);
	void DrawString(ST_POINT pos, std::wstring strText, size_t tLength = -1);
	void DrawString(int x, int y, std::wstring strText, size_t tLength = -1);
	void BitBlt(short x, short y, const CDisplayBuffer& buffer);
	void BitBlt(ST_POINT pos, const CDisplayBuffer& buffer);
};

