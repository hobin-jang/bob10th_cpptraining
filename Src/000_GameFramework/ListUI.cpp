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

void CListUI::AddItem(std::string strValue, int nTag, const void* pContext)
{
	AddItem(unicode::WCSFromMBS(strValue), nTag, pContext);
}

void CListUI::AddItem(std::wstring strValue, int nTag, const void* pContext)
{
	ST_ITEM_DATA item;
	item.strValue = strValue;
	item.nTag = nTag;
	item.pContext = pContext;
	m_vecItems.push_back(item);
}

void CListUI::SetItemAlign(int nColCount)
{
	if (nColCount < 0)
	{
		size_t tMaxItemLen = 0;
		for (const ST_ITEM_DATA& item: m_vecItems)
		{
			if (tMaxItemLen < item.strValue.length())
				tMaxItemLen = item.strValue.length();
		}

		int nWidth = m_TargetSize.x;
		nColCount = nWidth / (int)(tMaxItemLen + 4);
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
		return m_vecItems[nIndex].strValue;
	return L"";
}

int CListUI::GetItemTag(int nIndex)
{
	if (nIndex < m_vecItems.size())
		return m_vecItems[nIndex].nTag;
	return 0;
}

const void* CListUI::GetItemContext(int nIndex)
{
	if (nIndex < m_vecItems.size())
		return m_vecItems[nIndex].pContext;
	return nullptr;
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

	int nListHeight = GetSize().cy - 2;
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

		if ((m_Pos.y + m_Size.y - 1) <= nTop)
			break;

		int nLength = (int)m_Size.x - 2 - nLeftMargin;
		if (nLength < 1)
			continue;
		vecBuffer.DrawString(nLeft, nTop, m_vecItems[nItemIndex].strValue, nLength);

		if (nItemIndex == m_nCursorIndex)
		{
			char szCursor[] = { 26, 0 };	// 화살표 커서
			vecBuffer.DrawString(nLeft - nLeftMargin, nTop, szCursor);
		}
	}
}
