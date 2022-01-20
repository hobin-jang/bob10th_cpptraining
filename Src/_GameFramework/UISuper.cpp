#include "pch.h"
#include "UISuper.h"
#include "DrawFunc.h"

CUISuper::CUISuper(ST_VECTOR ptLeftTop, ST_VECTOR ptRightBtm)
	: m_nLeft(ptLeftTop.x)
	, m_nTop(ptLeftTop.y)
	, m_nRight(ptRightBtm.x)
	, m_nBottom(ptRightBtm.y)
{
}

void CUISuper::OnDraw(std::vector<std::string>& vecBuffer)
{
	DrawRectangle(vecBuffer, m_nLeft, m_nTop, m_nRight, m_nBottom);
}
