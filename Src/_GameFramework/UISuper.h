#pragma once

#include "Struct.h"

class CUISuper
{
protected:
	int m_nLeft;
	int m_nTop;
	int m_nRight;
	int m_nBottom;

	std::string m_strText;

	CUISuper(ST_VECTOR ptLeftTop, ST_VECTOR ptRightBtm);

	void SetText(std::string strText) { m_strText = strText; }

public:
	virtual void OnDraw(std::vector<std::string>& vecBuffer);
};

