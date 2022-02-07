#include "pch.h"
#include "TextUI.h"
#include "HelperFunc.h"

CTextUI::CTextUI(void)
	: CUISuper()
	, m_tViewPos(0)
{
}

CTextUI::~CTextUI(void)
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
	if (m_strText.empty())
		m_strText = strText;
	else
		m_strText += L"\n" + strText;
	SeperarateLines();
}

size_t CTextUI::GetLineCount(void)
{
	return m_listText.size();
}

void CTextUI::SeperarateLines(void)
{
	m_listText.clear();

	size_t tPos = 0;
	while (tPos != std::string::npos)
	{
		std::wstring strLine;

		size_t tReturnPos = m_strText.find(L"\n", tPos);
		if (tReturnPos == std::string::npos)
		{
			strLine = m_strText.substr(tPos);
			tPos = tReturnPos;
		}
		else
		{
			strLine = m_strText.substr(tPos, tReturnPos - tPos);
			tPos = tReturnPos + 1;
		}

		std::vector<std::wstring> vecLine;
		TokenizeMessage(strLine, vecLine, m_TargetSize.x);

		m_listText.insert(m_listText.end(), vecLine.begin(), vecLine.end());

		// 높이보다 항목이 많으면 최근것만 보이도록 함
		int nMaxRowCount = m_TargetSize.y;
		int nFirtRowIndex = (m_listText.size() - nMaxRowCount);
		m_tViewPos = nFirtRowIndex < 0 ? 0 : nFirtRowIndex;
	}
}

void CTextUI::OnSize(void)
{
	m_tViewPos = 0;
}

void CTextUI::OnDrawUI(CDisplayBuffer& vecBuffer)
{
	__super::OnDrawUI(vecBuffer);

	const ST_POINT pos = { (short)m_Pos.x, (short)m_Pos.y };
	if (UI_ATTRIBUTE_SINGLELINE & m_dwAttribute)
	{
		int w = std::min<int>(m_Size.x, m_strText.length());
		if(pos.y + 1 < vecBuffer.size())
			memcpy((void*)(vecBuffer[pos.y + 1].c_str() + pos.x + 1), m_strText.c_str(), w * sizeof(wchar_t));
		return;
	}

	int nBufferY = pos.y + 1;
	int nBottom = pos.y + m_Size.y + 1;
	for(size_t i= m_tViewPos; i<m_listText.size(); i++)
	{
		std::wstring strLine = m_listText[i];
		int y = nBufferY++;
		if (nBottom <= y)
			break;

		int w = std::min<int>(m_Size.x, strLine.length());
		memcpy((void*)(vecBuffer[y].c_str() + pos.x + 1), strLine.c_str(), w * sizeof(wchar_t));
	}
}
