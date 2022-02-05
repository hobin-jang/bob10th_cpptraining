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
	TokenizeMessage(strText, vecLine, m_TargetSize.x);

	m_listText.insert(m_listText.end(), vecLine.begin(), vecLine.end());

	// 높이보다 항목이 많으면 최근것만 보이도록 함
	int nMaxRowCount = m_TargetSize.y;
	int nFirtRowIndex = (m_listText.size() - nMaxRowCount);
	m_tViewPos = nFirtRowIndex < 0 ? 0 : nFirtRowIndex;
}

size_t CTextUI::GetLineCount(void)
{
	return m_listText.size();
}

void CTextUI::SetRect(int l, int t, int r, int b)
{
	__super::SetRect(l, t, r, b);
	m_tViewPos = 0;
}

void CTextUI::SetRect(ST_RECT rt)
{
	__super::SetRect(rt);
	m_tViewPos = 0;
}

void CTextUI::OnDraw(CDisplayBuffer& vecBuffer)
{
	__super::OnDraw(vecBuffer);
	int nBufferY = m_Pos.y + 1;
	int nBottom = (int)m_Pos.y + m_Size.y + 1;
	for(size_t i= m_tViewPos; i<m_listText.size(); i++)
	{
		std::wstring strLine = m_listText[i];
		int y = nBufferY++;
		if (nBottom <= y)
			break;

		int w = std::min<int>(m_Size.x, strLine.length());
		memcpy((void*)(vecBuffer[y].c_str() + (int)m_Pos.x + 1), strLine.c_str(), w * sizeof(wchar_t));
	}
}
