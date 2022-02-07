#pragma once

#include "Struct.h"

class CDisplayBuffer : public std::vector<std::wstring>
{
public:
	CDisplayBuffer(void);
	virtual ~CDisplayBuffer(void);

	void Clear(void);
	void DrawRectangle(int nLeft, int nTop, int nRight, int nBottom);
	void BitBlt(ST_POINT pos, const CDisplayBuffer& buffer);
};

