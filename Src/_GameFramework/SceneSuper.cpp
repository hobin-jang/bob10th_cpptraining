#include "pch.h"
#include "SceneSuper.h"
#include "KeyInput.h"
#include "Camera.h"
#include "ConsoleOutput.h"

CKeyInput CSceneSuper::m_Input;

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

void CSceneSuper::OnCreate(void)
{
    m_Input.Register(GAMEKEY_LEFT, VK_LEFT);
    m_Input.Register(GAMEKEY_RIGHT, VK_RIGHT);
    m_Input.Register(GAMEKEY_UP, VK_UP);
    m_Input.Register(GAMEKEY_DOWN, VK_DOWN);
    m_Input.Register(GAMEKEY_SELECT, ' ');
    m_Input.Register(GAMEKEY_MENU, VK_RETURN);
    m_Input.Register(GAMEKEY_ESC, VK_ESCAPE);

    m_Output.SetViewPort(g_nConsoleW + 1, g_nConsoleH + 1);
}

void CSceneSuper::Close(int nExitCode)
{
	m_bIsEndded = true;
	m_nExitCode = nExitCode;
}

void CSceneSuper::AddUI(CUISuper* pNewUI)
{
    m_listUI.push_back(pNewUI);
}

int CSceneSuper::DoModal(void)
{
    OnCreate();

    static DWORD dwLastUpdateTick = GetTickCount();
    while (!m_bIsEndded)
    {
        std::list<ST_KEYSTATE> listKeyState;
        m_Input.Query(listKeyState);
        OnInput(listKeyState);

        OnUpdate(g_dDeltaTime);
        m_Camera.Update(g_dDeltaTime);

        CDisplayBuffer vecBackBuffer = m_Output.GetBackBuffer();
        OnDrawWorld(vecBackBuffer);

        CDisplayBuffer vecDisplayBuffer;
        m_Output.Flip(m_Camera.GetViewPos(), vecDisplayBuffer);
        OnDrawUI(vecDisplayBuffer);

        m_Output.Render(vecDisplayBuffer);

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
