#include "pch.h"
#include "UISuper.h"
#include "DlgSuper.h"
#include "HelperClass.h"

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

void CUISuper::Create(CDlgSuper* pParent, short l, short t, short r, short b, DWORD dwAttribute)
{
	Create(pParent, CPoint(l, t), CSize(r - l + 1, b - t + 1), dwAttribute);
}

void CUISuper::Create(CDlgSuper* pParent, ST_POINT pos, ST_SIZE size, DWORD dwAttribute)
{
	m_dwAttribute = dwAttribute;
	if (pParent)
		pParent->AddUI(this);
	SetPos(pos);
	SetSize(size);

	if (UI_ATTRIBUTE_NO_ANIMATION & m_dwAttribute)
	{
		m_Pos.x = pos.x;
		m_Pos.y = pos.y;
		m_Size.x = size.cx;
		m_Size.y = size.cy;
	}
	else
	{
		int nCenterX = (g_nConsoleW - size.cx) / 2;
		int nCenterY = (g_nConsoleH - size.cy) / 2;

		if (pos.x < 0)
			m_Pos.x = g_nConsoleW;
		else if ((pos.x + size.cx) < (g_nConsoleW / 2))
			m_Pos.x = -size.cx;
		else
			m_Pos.x = nCenterX;

		if (pos.y < 0)
			m_Pos.y = g_nConsoleH;
		else if ((pos.y + size.cy) < (g_nConsoleH / 2))
			m_Pos.y = -size.cy;
		else
			m_Pos.y = nCenterY;
	}
	OnCreate();
}

void CUISuper::Create(CDlgSuper* pParent, ST_RECT rt, DWORD dwAttribute)
{
	Create(pParent, CPoint(rt.l, rt.t), CSize(rt.r - rt.l, rt.b - rt.t + 1), dwAttribute);
}

void CUISuper::SetText(std::string strText)
{
	m_strText = unicode::WCSFromMBS(strText);
}

void CUISuper::SetText(std::wstring strText)
{
	m_strText = strText;
}

void CUISuper::SetPos(ST_POINT pos, bool bNoAnimate)
{
	m_TargetPos.x = pos.x < 0 ? g_nConsoleW + pos.x : pos.x;
	m_TargetPos.y = pos.y < 0 ? g_nConsoleH + pos.y : pos.y;
	if (bNoAnimate)
		m_Pos = m_TargetPos;
}

void CUISuper::SetSize(ST_SIZE size, bool bNoAnimate)
{
	m_TargetSize.x = size.cx;
	m_TargetSize.y = size.cy;
	if (bNoAnimate)
		m_Size = m_TargetSize;
	OnSize();
}

void CUISuper::SetRect(int l, int t, int r, int b)
{
	m_TargetPos.x = l;
	m_TargetPos.y = t;
	m_TargetSize.x = r - l + 1;
	m_TargetSize.y = b - t + 1;
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

void CUISuper::ModifyAttribute(DWORD dwAdd, DWORD dwRemove)
{
	m_dwAttribute |= dwAdd;
	m_dwAttribute &= ~dwRemove;
}

bool CUISuper::IsVisible(void)
{
	return 0 == (m_dwAttribute & UI_ATTRIBUTE_INVISIBLE);
}

std::wstring CUISuper::GetText(void)
{
	return m_strText;
}

void CUISuper::DrawUI(CDisplayBuffer& vecBuffer)
{
	if (m_Size.x < 1 || m_Size.y < 1)
		return;

	CRect stDrawArea = CRect(m_Pos.MakePoint(), m_Size.MakeSize());
	if (0 == (m_dwAttribute & UI_ATTRIBUTE_NO_BORDER))
	{
		vecBuffer.DrawRectangle(stDrawArea);
		stDrawArea.l++;
		stDrawArea.t++;
		stDrawArea.r--;
		stDrawArea.b--;
	}

	CSize stDrawAreaSize = stDrawArea.GetSize();
	if (stDrawAreaSize.cx < 1 || stDrawAreaSize.cy < 1)
		return;

	OnDrawUI(vecBuffer, stDrawArea);
}

ST_POINT CUISuper::GetPos(void)
{
	return m_TargetPos.MakePoint();
}

ST_SIZE CUISuper::GetSize(void)
{
	ST_SIZE size = m_TargetSize.MakeSize();
	if (0 == (m_dwAttribute & UI_ATTRIBUTE_NO_BORDER))
		size.cx -= 2;
	return size;
}

ST_RECT CUISuper::GetRect(void)
{
	return CRect(m_TargetPos.MakePoint(), m_TargetSize.MakeSize());
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
