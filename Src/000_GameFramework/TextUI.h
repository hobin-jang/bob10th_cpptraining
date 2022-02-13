#pragma once

#include "UISuper.h"

class CTextUI : public CUISuper
{
	int m_nViewPos;
	std::vector<std::wstring> m_listText;

public:
	CTextUI(void);
	virtual ~CTextUI(void);

	virtual void Clear(void);
	virtual void SetViewPos(int nPos = -1);
	virtual void SetText(std::string strText);
	virtual void SetText(std::wstring strText);
	virtual void AddText(std::string strText);
	virtual void AddText(std::wstring strText);
	size_t GetLineCount(void);

	virtual void OnSize(void);
	virtual void OnDrawUI(CDisplayBuffer& vecBuffer);

private:
	void SeperarateLines(void);
};

