#include "pch.h"
#include "AlarmUI.h"
#include "HelperFunc.h"

CAlarmUI::CAlarmUI(void)
	: CUISuper()
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

void CAlarmUI::Alarm(int x, int y, std::string strMsg, size_t tMaxLen, DWORD dwDuring)
{
	SetVisible(true);
	m_dwTimeOutTick = GetTickCount() + dwDuring;
	m_vecMessage.clear();
	TokenizeMessage(strMsg, m_vecMessage, tMaxLen);

	size_t tMaxTextLen = 10;
	m_TextUI.Clear();

	for (std::wstring strLine : m_vecMessage)
	{
		if (tMaxTextLen < strLine.size())
			tMaxTextLen = strLine.size();
		m_TextUI.AddText(strLine);
	}

	int nVerticalOffset = -2;
	int nLeft = x - (int)(tMaxTextLen) / 2 - 1;
	int nTop = y - ((int)m_TextUI.GetLineCount() + 2) + nVerticalOffset;
	int nRight = nLeft + (int)tMaxTextLen + 2;
	int nBottom = nTop + (int)m_TextUI.GetLineCount() + 1;
	m_TextUI.SetPos(nLeft, nTop, nRight, nBottom);
}

void CAlarmUI::OnCreate(void)
{
}

void CAlarmUI::OnUpdate(DWORD dwCurrentTick, DWORD dwElapsedTick)
{
}

void CAlarmUI::OnDraw(CDisplayBuffer& vecBuffer)
{
	if (m_dwTimeOutTick < GetTickCount())
		return;

	m_TextUI.OnDraw(vecBuffer);
}
