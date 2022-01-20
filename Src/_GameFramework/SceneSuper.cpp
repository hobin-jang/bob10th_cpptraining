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

void CSceneSuper::Close(int nExitCode)
{
	m_bIsEndded = true;
	m_nExitCode = nExitCode;
}

int CSceneSuper::DoModal(void)
{
    while (!m_bIsEndded)
    {
        Sleep(1);

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
