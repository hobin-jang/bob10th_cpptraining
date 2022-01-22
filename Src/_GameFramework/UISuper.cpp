#include "pch.h"
#include "UISuper.h"
#include "DlgSuper.h"
#include "DrawFunc.h"

CUISuper::CUISuper(void)
	: m_pParent(nullptr)
	, m_nLeft(0)
	, m_nTop(0)
	, m_nRight(0)
	, m_nBottom(0)
{
}
void CUISuper::Create(CDlgSuper* pParent, ST_VECTOR ptLeftTop, ST_VECTOR ptRightBtm)
{
	m_pParent = pParent;
	m_nLeft = ptLeftTop.x;
	m_nTop = ptLeftTop.y;
	m_nRight = ptRightBtm.x;
	m_nBottom = ptRightBtm.y;

	if (m_pParent)
		m_pParent->AddUI(this);
}

void CUISuper::OnDraw(std::vector<std::string>& vecBuffer)
{
	DrawRectangle(vecBuffer, m_nLeft, m_nTop, m_nRight, m_nBottom);
}
