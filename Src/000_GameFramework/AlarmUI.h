#pragma once

#include "UISuper.h"
#include "TextUI.h"

class CAlarmUI : public CTextUI
{
	DWORD m_dwTimeOutTick;

public:
	CAlarmUI(void);
	~CAlarmUI(void);

	void Clear(void);
	void Alarm(std::string strMsg, DWORD dwDuring = 1000);

private:
	void OnCreate(void);
	void OnUpdate(DWORD dwCurrentTick, DWORD dwElapsedTick);
	void OnDrawUI(CDisplayBuffer& vecBuffer);
};

