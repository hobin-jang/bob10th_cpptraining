#include "pch.h"
#include "MiniGameTestScene.h"

int main(void)
{
    CDlgSuper::FPS = g_nFPS;
    CDlgSuper::m_Input.SetRepeatTick(100);
    CDlgSuper::m_Input.Register(VK_LEFT, GAMEKEY_LEFT);
    CDlgSuper::m_Input.Register(VK_RIGHT, GAMEKEY_RIGHT);
    CDlgSuper::m_Input.Register(VK_UP, GAMEKEY_UP);
    CDlgSuper::m_Input.Register(VK_DOWN, GAMEKEY_DOWN);
    CDlgSuper::m_Input.Register(' ', GAMEKEY_SELECT);
    CDlgSuper::m_Input.Register(VK_ESCAPE, GAMEKEY_ESC);
    CDlgSuper::m_Output.InitConsole("MiniGame", g_nGameWidth * 2 + 3, g_nGameHeight + 3);
    CDlgSuper::m_Output.SetViewPort(g_nGameWidth, g_nGameHeight);

	CMiniGameTestScene scene;
	return scene.DoModal();
}