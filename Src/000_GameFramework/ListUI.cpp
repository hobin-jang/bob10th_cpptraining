#include "pch.h"
#include "ListUI.h"

CListUI::CListUI(void)
	: CUISuper()
	, m_nScrollPos(0)
	, m_nCursorIndex(0)
	, m_nAlignCol(1)
{
}

void CListUI::Clear(void)
{
	m_vecItems.clear();
	m_nScrollPos = 0;
	m_nCursorIndex = 0;
	m_nAlignCol = 1;
}

void CListUI::AddItem(std::string strValue)
{
	AddItem(unicode::WCSFromMBS(strValue));
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

		int nWidth = m_TargetSize.x;
		nColCount = nWidth / (int)(tMaxItemLen + 2);
	}

	if (nColCount == 0)
		nColCount = 1;

	m_nAlignCol = nColCount;
}

void CListUI::AdjustHeight(int nRowCount)
{
	if (nRowCount < 0)
		nRowCount = m_vecItems.empty() ? 0 : ((m_vecItems.size() - 1) / m_nAlignCol) + 1;
	
	m_TargetSize.y = nRowCount + 2;
}

int CListUI::GetItemCount(void)
{
	return (int)m_vecItems.size();
}

std::wstring CListUI::GetItem(int nIndex)
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

	int nListHeight = GetSize().cy;
	int nMinShowingIndex = m_nScrollPos * m_nAlignCol + 1;
	int nMaxShowingIndex = (m_nScrollPos + nListHeight) * m_nAlignCol;
	if (m_nCursorIndex < nMinShowingIndex)
		m_nScrollPos = m_nCursorIndex / m_nAlignCol;
	if (nMaxShowingIndex <= m_nCursorIndex)
		m_nScrollPos = m_nCursorIndex / m_nAlignCol - (nListHeight - 1);
}

void CListUI::OnDrawUI(CDisplayBuffer& vecBuffer)
{
	__super::OnDrawUI(vecBuffer);
	int nLeftMargin = 2;
	int nItemLength = m_Size.x / m_nAlignCol;
	int nStartIndex = m_nScrollPos * m_nAlignCol;
	for (int i = 0; i + nStartIndex < m_vecItems.size(); i++)
	{
		const int nItemIndex = i + nStartIndex;

		int x = i % m_nAlignCol;
		int y = i / m_nAlignCol;
		int nLeft = m_Pos.x + x * nItemLength + nLeftMargin + 1;
		int nTop = m_Pos.y + y + 1;
		if (m_Size.y < 0 || vecBuffer.size() <= nTop)
			break;

		if ((m_Pos.y + m_Size.y) <= nTop)
			break;

		vecBuffer.DrawString(nLeft, nTop, m_vecItems[nItemIndex]);

		if (nItemIndex == m_nCursorIndex)
		{
			char szCursor[] = { 26, 0 };	// 화살표 커서
			vecBuffer.DrawString(nLeft - nLeftMargin, nTop, szCursor);
		}
	}
}
