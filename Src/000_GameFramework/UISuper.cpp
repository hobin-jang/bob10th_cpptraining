#include "pch.h"
#include "UISuper.h"
#include "DlgSuper.h"

CUISuper::CUISuper(void)
	: m_Pos()
	, m_Size()
	, m_TargetPos()
	, m_TargetSize()
	, m_dwAttribute(0)
{
}

CUISuper::~CUISuper(void)
{
}

void CUISuper::Create(CDlgSuper* pParent, int l, int t, int r, int b, DWORD dwAttribute)
{
	m_dwAttribute = dwAttribute;
	if (pParent)
		pParent->AddUI(this);
	SetRect(l, t, r, b);
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

void CUISuper::SetPos(ST_POINT pos)
{
	m_TargetPos.x = pos.x;
	m_TargetPos.y = pos.y;
}

void CUISuper::SetSize(ST_SIZE size)
{
	m_TargetSize.x = size.cx;
	m_TargetSize.y = size.cy;
	OnSize();
}

void CUISuper::SetRect(int l, int t, int r, int b)
{
	m_TargetPos.x = l;
	m_TargetPos.y = t;
	m_TargetSize.x = r - l - 1;
	m_TargetSize.y = b - t - 1;
	OnSize();
}

void CUISuper::SetRect(ST_RECT rt)
{
	SetRect(rt.l, rt.t, rt.r, rt.b);
}

void CUISuper::SetVisible(bool bVisible)
{
	if (bVisible)
		m_dwAttribute &= ~UI_ATTRIBUTE_INVISIBLE; 
	else
		m_dwAttribute |= UI_ATTRIBUTE_INVISIBLE;
}

bool CUISuper::IsVisible(void)
{
	return 0 == (m_dwAttribute & UI_ATTRIBUTE_INVISIBLE);
}

ST_POINT CUISuper::GetPos(void)
{
	return ST_POINT{ (short)m_TargetPos.x, (short)m_TargetPos.y };
}

ST_SIZE CUISuper::GetSize(void)
{
	return ST_SIZE {(short)m_TargetSize.x, (short)m_TargetSize.y};
}

ST_RECT CUISuper::GetRect(void)
{
	return ST_RECT(GetPos(), GetSize());
}

void CUISuper::OnCreate(void)
{
}

void CUISuper::OnSize(void)
{
}

void CUISuper::OnUpdate(DWORD dwCurrentTick, DWORD dwElapsedTick)
{
	double dElapsedTime = dwElapsedTick * 0.001;
	ST_VECTOR stPosDiff = m_TargetPos - m_Pos;
	if (std::abs(stPosDiff.y) < 0.5)
		m_Pos = m_TargetPos;
	else
		m_Pos += stPosDiff * dElapsedTime * 3;

	ST_VECTOR stSizeDiff = m_TargetSize - m_Size;
	if (std::abs(stSizeDiff.y) < 0.5)
		m_Size = m_TargetSize;
	else
		m_Size += stSizeDiff * dElapsedTime * 15;

}

void CUISuper::OnDrawWorld(CDisplayBuffer& vecBuffer)
{
}

void CUISuper::OnDrawUI(CDisplayBuffer& vecBuffer)
{
	if( 0 == (m_dwAttribute & UI_ATTRIBUTE_NO_BORDER))
		vecBuffer.DrawRectangle((int)m_Pos.x, (int)m_Pos.y, (int)m_Pos.x + m_Size.x + 1, (int)m_Pos.y + m_Size.y + 1);
}
