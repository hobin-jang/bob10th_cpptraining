#pragma once

#include "UISuper.h"

class CListUI : public CUISuper
{
	int m_nScrollPos;
	int m_nCursorIndex;
	int m_nAlignCol;
	CDisplayBuffer m_vecItems;

public:
	CListUI(void);

	void AddItem(std::string strValue);
	void AddItem(std::wstring strValue);
	void SetItemAlign(int nColCount = -1);		// -1�� �׸� ���̿� ���� �ڵ� ����
	void AdjustHeight(int nRowCount = -1);

	int GetCount(void);
	std::wstring GetText(int nIndex);

	int GetCurPos(void);
	void SetCurPos(int nIndex);
	void MoveCurPos(int nOffsetX, int nOffsetY);

	void OnDraw(CDisplayBuffer& vecBuffer);
};

