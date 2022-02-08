#include "pch.h"
#include "MiniGame.h"

enum E_GAMEKEY_TYPE
{
	GAMEKEY_SELECT,
	GAMEKEY_ESCAPE,
};

CMiniGame::CMiniGame(void)
	: CDlgSuper()
{
	g_Output.InitConsole("미니게임 테스트", g_nConsoleW * 2 + 3, g_nConsoleH + 3);
	g_Output.SetViewPort(g_nConsoleW, g_nConsoleH);

	g_Input.Register(VK_SPACE, GAMEKEY_SELECT);
	g_Input.Register(VK_ESCAPE, GAMEKEY_ESCAPE);
}

CMiniGame::~CMiniGame(void)
{
}

void CMiniGame::OnCreate(void)
{
	ST_SIZE stWindowSize = { 30, 30 };
	ST_POINT stCenterPos = { (g_nConsoleW - stWindowSize.cx) / 2,  (g_nConsoleH - stWindowSize.cy) / 2 };
	SetPos(stCenterPos);
	SetSize(stWindowSize);


	m_TextUI.Create(this, ST_POINT{ 0, 0 }, ST_SIZE{ 20, 3 });
	m_TextUI.SetText("Hello world!!");

}

void CMiniGame::OnClose(void)
{
}

void CMiniGame::OnInput(std::list<ST_KEYSTATE>& listKeyState)
{
	__super::OnInput(listKeyState);
	for (ST_KEYSTATE key : listKeyState)
	{
		if (key.bPressed && key.nID == GAMEKEY_SELECT)
			Close(0); // 0으로 끝내면 성공
		if (key.bPressed && key.nID == GAMEKEY_ESCAPE)
			Close(-1);	// 0 이외의 값으로 끝내면 실패
	}
}

void CMiniGame::OnUpdate(DWORD dwCurrentTick, DWORD dwElapsedTick)
{
	__super::OnUpdate(dwCurrentTick, dwElapsedTick);
}

