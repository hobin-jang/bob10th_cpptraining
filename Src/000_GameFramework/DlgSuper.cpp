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

void CDlgSuper::SetParent(CDlgSuper* pParent)
{
	m_pParent = pParent;
}

int CDlgSuper::DoModal(void)
{
	OnCreate();

	while (!m_bIsClosed)
	{
		const DWORD dwCurrentTick = GetTickCount();

		std::list<ST_KEYSTATE> listKeyState;
		g_pGameData->input.Query(listKeyState);
		OnInput(listKeyState);
		Update(dwCurrentTick, g_nDeltaTick);

		CDisplayBuffer& vecBackBuffer = g_pGameData->output.GetBackBuffer();
		vecBackBuffer.Clear();
		g_pGameData->output.Flip(g_Camera.GetViewPos(), vecBackBuffer);
		DrawWorld(vecBackBuffer);

		CDisplayBuffer vecDisplayBuffer;
		g_pGameData->output.Flip(g_Camera.GetViewPos(), vecDisplayBuffer);
		DrawUI(vecDisplayBuffer);
		g_pGameData->output.Render(vecDisplayBuffer);

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

void CDlgSuper::Update(DWORD dwCurrentTick, DWORD dwElapsedTick)
{
	if (m_pParent)
		m_pParent->Update(dwCurrentTick, dwElapsedTick);
	OnUpdate(dwCurrentTick, dwElapsedTick);
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
	__super::OnUpdate(dwCurrentTick, dwElapsedTick);
	for (CUISuper* pUI : m_listUI)
		pUI->OnUpdate(dwCurrentTick, dwElapsedTick);
}

void CDlgSuper::OnDrawUI(CDisplayBuffer& vecBuffer)
{
	__super::OnDrawUI(vecBuffer);
	if (m_Size.y < 1 || m_Size.x < 1)
		return;

	CDisplayBuffer vecClientBuffer;
	vecClientBuffer.Create(m_Size.x, m_Size.y);

	for (CUISuper* pUI : m_listUI)
	{
		if (!pUI->IsVisible())
			continue;
		pUI->OnDrawUI(vecClientBuffer);
	}

	vecBuffer.BitBlt((short)m_Pos.x, (short)m_Pos.y, vecClientBuffer);
}