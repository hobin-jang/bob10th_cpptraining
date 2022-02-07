#include "pch.h"
#include "AlarmUI.h"
#include "HelperFunc.h"
#include "Setting.h"

CAlarmUI::CAlarmUI(void)
	: CTextUI()
	, m_dwTimeOutTick(0)
{
}

CAlarmUI::~CAlarmUI()
{
}

void CAlarmUI::Clear(void)
{
	SetVisible(false);
	m_dwTimeOutTick = 0;
}

void CAlarmUI::Alarm(std::string strMsg, DWORD dwDuring)
{
	SetVisible(true);
	m_dwTimeOutTick = GetTickCount() + dwDuring;

	std::vector<std::wstring> vecMessage;
	vecMessage.clear();

	size_t tMaxLen = g_nConsoleW * 0.8;
	TokenizeMessage(strMsg, vecMessage, tMaxLen);

	size_t tMaxTextLen = 10;
	Clear();

	for (std::wstring strLine : vecMessage)
	{
		if (tMaxTextLen < strLine.size())
			tMaxTextLen = strLine.size();
		AddText(strLine);
	}

	int nVerticalOffset = -2;
	int x = g_nConsoleW / 2;
	int y = g_nConsoleH / 2;
	int nLeft = x - (int)(tMaxTextLen) / 2 - 1;
	int nTop = y - ((int)GetLineCount() + 2) + nVerticalOffset;
	int nRight = nLeft + (int)tMaxTextLen + 2;
	int nBottom = nTop + (int)GetLineCount() + 1;
	SetRect(nLeft, nTop, nRight, nBottom);
}

void CAlarmUI::OnCreate(void)
{
}

void CAlarmUI::OnUpdate(DWORD dwCurrentTick, DWORD dwElapsedTick)
{
}

void CAlarmUI::OnDrawUI(CDisplayBuffer& vecBuffer)
{
	if (m_dwTimeOutTick < GetTickCount())
		return;
	__super::OnDrawUI(vecBuffer);
}
