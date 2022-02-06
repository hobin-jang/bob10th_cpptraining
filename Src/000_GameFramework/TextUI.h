#pragma once

#include "UISuper.h"

class CTextUI : public CUISuper
{
	size_t m_tViewPos;
	std::vector<std::wstring> m_listText;

public:
	CTextUI(void);
	virtual ~CTextUI(void);

	void Clear(void);
	void AddText(std::string strText);
	void AddText(std::wstring strText);
	size_t GetLineCount(void);

	virtual void OnSize(void);
	virtual void OnDraw(CDisplayBuffer& vecBuffer);

private:
	void SeperarateLines(void);
};

