#pragma once

#include "Struct.h"

class CDlgSuper;
class CUISuper
{
protected:
	CDlgSuper* m_pParent;
	int m_nLeft;
	int m_nTop;
	int m_nRight;
	int m_nBottom;

	std::string m_strText;

	CUISuper(void);

public:
	virtual void Create(CDlgSuper* pParent, ST_VECTOR ptLeftTop, ST_VECTOR ptRightBtm);
	virtual void SetText(std::string strText) { m_strText = strText; }

	virtual void OnDraw(CDisplayBuffer& vecBuffer);
};

