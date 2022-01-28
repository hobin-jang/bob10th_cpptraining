#include "pch.h"
#include "UISuper.h"
#include "DlgSuper.h"

CUISuper::CUISuper(void)
	: m_pParent(nullptr)
	, m_nLeft(0)
	, m_nTop(0)
	, m_nRight(0)
	, m_nBottom(0)
	, m_dwAttribute(0)
{
}
void CUISuper::Create(CDlgSuper* pParent, int l, int t, int r, int b, DWORD dwAttribute)
{
	m_pParent = pParent;
	m_dwAttribute = dwAttribute;
	if (m_pParent)
		m_pParent->AddUI(this);
	SetPos(l, t, r, b);
	OnCreate();
}

void CUISuper::SetText(std::string strText)
{
	m_strText = unicode::WCSFromMBS(strText);
}

void CUISuper::SetText(std::wstring strText)
{
	m_strText = strText;
}

void CUISuper::SetPos(int l, int t, int r, int b)
{
	m_nLeft = l;
	m_nTop = t;
	m_nRight = r;
	m_nBottom = b;
}

void CUISuper::SetVisible(bool bVisible)
{
	if (bVisible)
		m_dwAttribute &= ~UI_ATTRIBUTE_INVISIBLE; 
	else
		m_dwAttribute |= UI_ATTRIBUTE_INVISIBLE;
}

bool CUISuper::GetVisible(void)
{
	return 0 == (m_dwAttribute & UI_ATTRIBUTE_INVISIBLE);
}

int CUISuper::GetLeft(void)
{
	return m_nLeft;
}

int CUISuper::GetRight(void)
{
	return m_nRight;
}

int CUISuper::GetTop(void)
{
	return m_nTop;
}

int CUISuper::GetBottom(void)
{
	return m_nBottom;
}

void CUISuper::OnCreate(void)
{
}

void CUISuper::OnDraw(CDisplayBuffer& vecBuffer)
{
	if( 0 == (m_dwAttribute & UI_ATTRIBUTE_NO_BORDER))
		vecBuffer.DrawRectangle(m_nLeft, m_nTop, m_nRight, m_nBottom);
}
