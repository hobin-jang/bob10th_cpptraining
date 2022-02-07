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
	m_tViewPos = 0;
	m_strText.clear();
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

void CTextUI::OnDrawUI(CDisplayBuffer& buffer)
{
	__super::OnDrawUI(buffer);

	const ST_POINT stCurPos = { (short)m_Pos.x + 1, (short)m_Pos.y + 1 };
	if (UI_ATTRIBUTE_SINGLELINE & m_dwAttribute)
	{
		buffer.DrawString(stCurPos, m_strText);
		return;
	}

	for(size_t y= 0; y<m_Size.y; y++)
	{
		size_t tIndex = y + m_tViewPos;
		if (m_listText.size() <= tIndex)
			break;

		ST_POINT stDrawPos = { stCurPos.x, stCurPos.y + y };
		buffer.DrawString(stDrawPos, m_listText[tIndex]);
	}
}
