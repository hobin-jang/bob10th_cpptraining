#include "pch.h"
#include "UISuper.h"
#include "DlgSuper.h"

CUISuper::CUISuper(void)
	: m_pParent(nullptr)
	, m_Pos()
	, m_Size()
	, m_TargetPos()
	, m_TargetSize()
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

void CUISuper::Create(CDlgSuper* pParent, ST_RECT rt, DWORD dwAttribute)
{
	Create(pParent, rt.l, rt.t, rt.r, rt.b, dwAttribute);
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
	m_TargetPos.x = l;
	m_TargetPos.y = t;
	m_TargetSize.x = r - l - 1;
	m_TargetSize.y = b - t - 1;
}

void CUISuper::SetPos(ST_RECT rt)
{
	SetPos(rt.l, rt.t, rt.r, rt.b);
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
	return m_TargetPos.x;
}

int CUISuper::GetRight(void)
{
	return m_TargetPos.x + m_TargetSize.x + 1;
}

int CUISuper::GetTop(void)
{
	return m_TargetPos.y;
}

int CUISuper::GetBottom(void)
{
	return m_TargetPos.y + m_TargetSize.y + 1;
}

int CUISuper::GetWidth(void)
{
	return m_TargetSize.x;
}

int CUISuper::GetHeight(void)
{
	return m_TargetSize.y;
}

void CUISuper::OnCreate(void)
{
}

void CUISuper::OnUpdate(DWORD dwCurrentTick, DWORD dwElapsedTick)
{
	double dElapsedTime = dwElapsedTick * 0.001;
	ST_VECTOR stPosDiff = m_TargetPos - m_Pos;
	if (stPosDiff.y < 0.5)
		m_Pos = m_TargetPos;
	else
		m_Pos += stPosDiff * dElapsedTime * 3;

	ST_VECTOR stSizeDiff = m_TargetSize - m_Size;
	if (stSizeDiff.y < 0.5)
		m_Size = m_TargetSize;
	else
		m_Size += stSizeDiff * dElapsedTime * 15;

}

void CUISuper::OnDraw(CDisplayBuffer& vecBuffer)
{
	if( 0 == (m_dwAttribute & UI_ATTRIBUTE_NO_BORDER))
		vecBuffer.DrawRectangle((int)m_Pos.x, (int)m_Pos.y, (int)m_Pos.x + m_Size.x + 1, (int)m_Pos.y + m_Size.y + 1);
}
