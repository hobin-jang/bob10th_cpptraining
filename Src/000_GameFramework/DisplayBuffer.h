#pragma once

class CDisplayBuffer : public std::vector<std::wstring>
{
public:
	CDisplayBuffer(void);
	virtual ~CDisplayBuffer(void);

	void Clear(void);
	void DrawRectangle(int nLeft, int nTop, int nRight, int nBottom);
};

