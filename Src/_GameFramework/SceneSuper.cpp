#include "pch.h"
#include "SceneSuper.h"
#include "KeyInput.h"
#include "Camera.h"
#include "ConsoleOutput.h"

CSceneSuper::CSceneSuper(void)
	: m_bIsEndded(false)
	, m_nExitCode(0)
{
}

CSceneSuper::~CSceneSuper(void)
{
    for (CUISuper* pUI : m_listUI)
        delete pUI;
    m_listUI.clear();
}

void CSceneSuper::Close(int nExitCode)
{
	m_bIsEndded = true;
	m_nExitCode = nExitCode;
}

int CSceneSuper::DoModal(void)
{
    static DWORD dwLastUpdateTick = GetTickCount();
    while (!m_bIsEndded)
    {
        std::list<ST_KEYSTATE> listKeyState;
        Input()->Query(listKeyState);
        OnInput(listKeyState);

        OnUpdate(g_dDeltaTime);
        Camera()->Update(g_dDeltaTime);

        CDisplayBuffer vecBackBuffer = Output()->GetBackBuffer();
        OnDrawWorld(vecBackBuffer);

        CDisplayBuffer vecDisplayBuffer;
        Output()->Flip(Camera()->GetViewPos(), vecDisplayBuffer);
        OnDrawUI(vecDisplayBuffer);

        Output()->Render(vecDisplayBuffer);

        const DWORD dwCurrentTick = GetTickCount();
        if (dwCurrentTick < dwLastUpdateTick)
            Sleep(dwLastUpdateTick - dwCurrentTick);
        dwLastUpdateTick += g_nDeltaTick;
    }

	return m_nExitCode;
}

void CSceneSuper::OnInput(std::list<ST_KEYSTATE>& listKeyState)
{
}

void CSceneSuper::OnUpdate(double dElapsedTime)
{
}

void CSceneSuper::OnDrawWorld(std::vector<std::string>& vecBuffer)
{
}

void CSceneSuper::OnDrawUI(std::vector<std::string>& vecBuffer)
{
	for (CUISuper* pUI : m_listUI)
	{
		pUI->OnDraw(vecBuffer);
	}
}
