#pragma once

#include "Struct.h"
#include "DisplayBuffer.h"

enum E_UI_ATTRIBUTE
{
	UI_ATTRIBUTE_NO_BORDER = 0x01 << 0,
	UI_ATTRIBUTE_INVISIBLE = 0x01 << 1,
};

class CDlgSuper;
class CUISuper
{
protected:
	CDlgSuper* m_pParent;
	int m_nLeft;
	int m_nTop;
	int m_nRight;
	int m_nBottom;
	DWORD m_dwAttribute;

	std::wstring m_strText;

	CUISuper(void);

public:
	virtual void Create(CDlgSuper* pParent, int l, int t, int r, int b, DWORD dwAttribute = 0);
	virtual void SetText(std::string strText);
	virtual void SetText(std::wstring strText);
	virtual void SetPos(int l, int t, int r, int b);
	virtual void SetVisible(bool bVisible);
	virtual bool GetVisible(void);

	int GetLeft(void);
	int GetRight(void);
	int GetTop(void);
	int GetBottom(void);

	virtual void OnCreate(void);
	virtual void OnDraw(CDisplayBuffer& vecBuffer);
};

