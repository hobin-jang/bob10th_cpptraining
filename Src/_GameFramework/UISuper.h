#pragma once

#include "Struct.h"

class CUISuper
{
protected:
	ST_VECTOR m_ptLeftTop;
	ST_VECTOR m_ptRightBtm;
	std::string m_strText;

	CUISuper(ST_VECTOR ptLeftTop, ST_VECTOR ptRightBtm);

	void SetText(std::string strText) { m_strText = strText; }

public:
	virtual void OnDraw(std::vector<std::string>& vecBuffer);
};

