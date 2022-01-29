#pragma once

#include "UISuper.h"
#include "TextUI.h"

class CAlarmUI : public CUISuper
{
	CTextUI m_TextUI;
	std::vector<std::wstring> m_vecMessage;

	DWORD m_dwTimeOutTick;

public:
	CAlarmUI(void);
	~CAlarmUI(void);

	void Clear(void);
	void Alarm(int x, int y, std::string strMsg, size_t tMaxLen, DWORD dwDuring = 1000);

private:
	void OnCreate(void);
	void OnUpdate(DWORD dwCurrentTick, DWORD dwElapsedTick);
	void OnDraw(CDisplayBuffer& vecBuffer);
};

