#include "pch.h"
#include "TextUI.h"
#include "HelperFunc.h"
#include "HelperClass.h"

CTextUI::CTextUI(void)
	: CUISuper()
	, m_nViewPos(-1)
{
}

CTextUI::~CTextUI(void)
{
}

void CTextUI::Clear(void)
{
	m_nViewPos = -1;
	SetText("");
	m_listText.clear();
}

void CTextUI::SetViewPos(int nPos)
{
	m_nViewPos = nPos;
}

void CTextUI::SetText(std::string strText)
{
	__super::SetText(strText);
	m_listText.clear();
	m_listText.push_back(unicode::WCSFromMBS(strText));
}

void CTextUI::SetText(std::wstring strText)
{
	__super::SetText(strText);
	m_listText.clear();
	m_listText.push_back(strText);
}

void CTextUI::AddText(std::string strText)
{
	m_listText.push_back(unicode::WCSFromMBS(strText));
}

void CTextUI::AddText(std::wstring strText)
{
	m_listText.push_back(strText);
}

size_t CTextUI::GetLineCount(void)
{
	return m_listText.size();
}

void CTextUI::OnSize(void)
{
}

void CTextUI::OnDrawUI(CDisplayBuffer& vecBuffer, CRect rtDrawArea)
{
	ST_SIZE size = rtDrawArea.GetSize();

	int nViewOffset = m_nViewPos;
	if (m_nViewPos < 0)
	{
		nViewOffset = (int)m_listText.size() - size.cy;
		if (nViewOffset < 0)
			nViewOffset = 0;
	}

	for(int y= 0; y< size.cy; y++)
	{
		int tIndex = y + nViewOffset;
		if (m_listText.size() <= tIndex)
			break;

		//if (UI_ATTRIBUTE_SINGLELINE & m_dwAttribute)
		vecBuffer.DrawString(CPoint(rtDrawArea.l, rtDrawArea.t + y), m_listText[tIndex], (size_t)size.cx);
	}
}
