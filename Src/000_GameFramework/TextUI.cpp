#include "pch.h"
#include "TextUI.h"
#include "HelperFunc.h"
#include "HelperClass.h"

CTextUI::CTextUI(void)
	: CUISuper()
	, m_nViewPos(0)
{
}

CTextUI::~CTextUI(void)
{
}

void CTextUI::Clear(void)
{
	m_nViewPos = 0;
	m_strText.clear();
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
	m_nViewPos = 0;
}

void CTextUI::OnDrawUI(CDisplayBuffer& buffer)
{
	__super::OnDrawUI(buffer);

	if (m_Size.x < 1 || m_Size.y < 1)
		return;

	int nViewOffset = m_nViewPos;
	if (m_nViewPos < 0)
	{
		nViewOffset = (int)m_listText.size() + m_nViewPos;
		if (nViewOffset < 0)
			nViewOffset = 0;
	}

	for(int y= 0; y<m_Size.y; y++)
	{
		int tIndex = y + m_nViewPos;
		if (m_listText.size() <= tIndex)
			break;

		//if (UI_ATTRIBUTE_SINGLELINE & m_dwAttribute)
		buffer.DrawString(CPoint(m_Pos.x, m_Pos.y + y), m_listText[tIndex], (size_t)m_Size.x);
	}
}
