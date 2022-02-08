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

