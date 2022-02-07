#include "pch.h"
#include "DlgSuper.h"

CDlgSuper::CDlgSuper(CDlgSuper* pParent)
	: CUISuper()
	, m_pParent(pParent)
	, m_bIsClosed(false)
	, m_nExitCode(0)
{
}

CDlgSuper::~CDlgSuper(void)
{
	m_listUI.clear();
}

void CDlgSuper::Close(int nExitCode)
{
	m_bIsClosed = true;
	m_nExitCode = nExitCode;
}

void CDlgSuper::OnCreate(void)
{
	__super::OnCreate();
}

void CDlgSuper::OnClose(void)
{
}

void CDlgSuper::AddUI(CUISuper* pChild)
{
	m_listUI.push_back(pChild);
}

int CDlgSuper::DoModal(void)
{
	OnCreate();

	while (!m_bIsClosed)
	{
		const DWORD dwCurrentTick = GetTickCount();

		std::list<ST_KEYSTATE> listKeyState;
		g_Input.Query(listKeyState);
		OnInput(listKeyState);
		OnUpdate(dwCurrentTick, g_nDeltaTick);

		CDisplayBuffer& vecBackBuffer = g_Output.GetBackBuffer();
		vecBackBuffer.Clear();
		g_Output.Flip(g_Camera.GetViewPos(), vecBackBuffer);
		DrawWorld(vecBackBuffer);

		CDisplayBuffer vecDisplayBuffer;
		g_Output.Flip(g_Camera.GetViewPos(), vecDisplayBuffer);
		DrawUI(vecDisplayBuffer);
		g_Output.Render(vecDisplayBuffer);

		{
			static DWORD dwLastUpdateTick = GetTickCount();
			if (dwCurrentTick < dwLastUpdateTick)
			{
				DWORD dwRemainedTick = dwLastUpdateTick - dwCurrentTick;
				Sleep(std::min<DWORD>(dwRemainedTick, g_nDeltaTick));
			}
			dwLastUpdateTick += g_nDeltaTick;
		}
	}

	OnClose();
	return m_nExitCode;
}

void CDlgSuper::DrawUI(CDisplayBuffer& vecBuffer)
{
	if (m_pParent)
		m_pParent->DrawUI(vecBuffer);
	OnDrawUI(vecBuffer);
}

void CDlgSuper::DrawWorld(CDisplayBuffer& vecBuffer)
{
	if (m_pParent)
		m_pParent->DrawWorld(vecBuffer);
	OnDrawWorld(vecBuffer);
}

void CDlgSuper::OnInput(std::list<ST_KEYSTATE>& listKeyState)
{
}

void CDlgSuper::OnUpdate(DWORD dwCurrentTick, DWORD dwElapsedTick)
{
	for (CUISuper* pUI : m_listUI)
	{
		if (!pUI->IsVisible())
			continue;
		pUI->OnUpdate(dwCurrentTick, dwElapsedTick);
	}
}

void CDlgSuper::OnDrawUI(CDisplayBuffer& vecBuffer)
{
	__super::OnDrawUI(vecBuffer);
	for (CUISuper* pUI : m_listUI)
	{
		if (!pUI->IsVisible())
			continue;
		pUI->OnDrawUI(vecBuffer);
	}
}