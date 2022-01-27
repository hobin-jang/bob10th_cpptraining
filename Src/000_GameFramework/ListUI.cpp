#include "pch.h"
#include "ListUI.h"

CListUI::CListUI(void)
	: CUISuper()
	, m_nScrollPos(0)
	, m_nCursorIndex(0)
	, m_nAlignCol(1)
{
}

void CListUI::AddItem(std::string strValue)
{
	AddItem(core::WCSFromMBS(strValue));
}

void CListUI::AddItem(std::wstring strValue)
{
	m_vecItems.push_back(strValue);
}

void CListUI::SetItemAlign(int nColCount)
{
	if (nColCount < 0)
	{
		size_t tMaxItemLen = 0;
		for (std::wstring strItem : m_vecItems)
		{
			if (tMaxItemLen < strItem.length())
				tMaxItemLen = strItem.length();
		}

		int nWidth = m_nRight - m_nLeft - 1;
		nColCount = nWidth / (int)(tMaxItemLen + 2);
	}

	if (nColCount == 0)
		nColCount = 1;

	m_nAlignCol = nColCount;
}

void CListUI::AdjustHeight(int nRowCount)
{
	if (nRowCount < 0)
		nRowCount = m_vecItems.empty() ? 1 : (m_vecItems.size() - 1) / m_nAlignCol;
	
	m_nBottom = m_nTop + nRowCount + 2;
}

int CListUI::GetCount(void)
{
	return (int)m_vecItems.size();
}

std::wstring CListUI::GetText(int nIndex)
{
	if (nIndex < m_vecItems.size())
		return m_vecItems[nIndex];
	return L"";
}

int CListUI::GetCurPos(void)
{
	return m_nCursorIndex;
}

void CListUI::SetCurPos(int nIndex)
{
	m_nCursorIndex = nIndex;
}

void CListUI::MoveCurPos(int nOffsetX, int nOffsetY)
{
	m_nCursorIndex += nOffsetX + nOffsetY * m_nAlignCol;
	if (m_vecItems.size() <= m_nCursorIndex)
	{
		if (nOffsetY < 0)
		{
			m_nCursorIndex += (int)(m_vecItems.size() / m_nAlignCol + 1) * m_nAlignCol;
			if (m_vecItems.size() <= m_nCursorIndex)
				m_nCursorIndex = (int)m_vecItems.size() - 1;
		}
		else if (0 < nOffsetY)
			m_nCursorIndex = m_nCursorIndex % m_nAlignCol;
		else if (0 < nOffsetX)
			m_nCursorIndex = 0;
		else
			m_nCursorIndex = (int)m_vecItems.size() - 1;
	}

	int nListHeight = (m_nBottom - m_nTop - 1);
	int nMinShowingIndex = m_nScrollPos * m_nAlignCol + 1;
	int nMaxShowingIndex = (m_nScrollPos + nListHeight) * m_nAlignCol;
	if (m_nCursorIndex < nMinShowingIndex)
		m_nScrollPos = m_nCursorIndex / m_nAlignCol;
	if (nMaxShowingIndex <= m_nCursorIndex)
		m_nScrollPos = m_nCursorIndex / m_nAlignCol - (nListHeight - 1);
}

void CListUI::OnDraw(CDisplayBuffer& vecBuffer)
{
	__super::OnDraw(vecBuffer);
	int nLeftMargin = 2;
	int nItemLength = (m_nRight - m_nLeft - 1) / m_nAlignCol;
	int nStartIndex = m_nScrollPos * m_nAlignCol;
	for (int i = 0; i + nStartIndex <m_vecItems.size(); i++)
	{
		const int nItemIndex = i + nStartIndex;
		std::wstring strItem = m_vecItems[nItemIndex];

		int x = i % m_nAlignCol;
		int y = i / m_nAlignCol;

		int nLeft = m_nLeft + x * nItemLength + nLeftMargin ;
		int nTop = m_nTop + y + 1;
		if (m_nBottom <= nTop)
			break;

		int w = MIN(m_nRight - (nLeft + 1), (int)strItem.length());
		memcpy((void*)(vecBuffer[nTop].c_str() + nLeft + 1), strItem.c_str(), w * sizeof(wchar_t));

		if (nItemIndex == m_nCursorIndex)
			vecBuffer[nTop][nLeft + 1 - nLeftMargin] = 26;	// 화살표 커서
	}
}
