#include "pch.h"
#include "SceneSuper.h"

CSceneSuper::CSceneSuper(void)
	: CDlgSuper(nullptr)
{
}

CSceneSuper::~CSceneSuper(void)
{
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