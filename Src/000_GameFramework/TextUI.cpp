#include "pch.h"
#include "TextUI.h"
#include "HelperFunc.h"

CTextUI::CTextUI(void)
	: CUISuper()
	, m_tViewPos(0)
{
}

void CTextUI::Clear(void)
{
	m_listText.clear();
}

void CTextUI::AddText(std::string strText)
{
	AddText(unicode::WCSFromMBS(strText));
}

void CTextUI::AddText(std::wstring strText)
{
	std::vector<std::wstring> vecLine;
	TokenizeMessage(strText, vecLine, m_nRight - m_nLeft - 1);

	m_listText.insert(m_listText.end(), vecLine.begin(), vecLine.end());

	// 높이보다 항목이 많으면 최근것만 보이도록 함
	int nMaxRowCount = (m_nBottom - m_nTop - 1);
	int nFirtRowIndex = (m_listText.size() - nMaxRowCount);
	m_tViewPos = nFirtRowIndex < 0 ? 0 : nFirtRowIndex;
}

size_t CTextUI::GetLineCount(void)
{
	return m_listText.size();
}

void CTextUI::SetPos(int l, int t, int r, int b)
{
	__super::SetPos(l, t, r, b);
	m_tViewPos = 0;
}

void CTextUI::OnDraw(CDisplayBuffer& vecBuffer)
{
	__super::OnDraw(vecBuffer);
	int nBufferY = m_nTop + 1;
	for(size_t i= m_tViewPos; i<m_listText.size(); i++)
	{
		std::wstring strLine = m_listText[i];
		int y = nBufferY++;
		if (m_nBottom <= y)
			break;

		int w = std::min<int>(m_nRight - (m_nLeft + 1), strLine.length());
		memcpy((void*)(vecBuffer[y].c_str() + m_nLeft + 1), strLine.c_str(), w * sizeof(wchar_t));
	}
}
