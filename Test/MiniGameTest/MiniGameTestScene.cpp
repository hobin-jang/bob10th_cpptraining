#include "pch.h"
#include "MiniGameTestScene.h"

CMiniGameTestScene::CMiniGameTestScene(void)
{
}

CMiniGameTestScene::~CMiniGameTestScene(void)
{
}

void CMiniGameTestScene::OnCreate(void)
{
	__super::OnCreate();
	m_GameDlg.DoModal(this);
	Close(0);
}

void CMiniGameTestScene::OnInput(std::list<ST_KEYSTATE>& listKeyState)
{
	__super::OnInput(listKeyState);
}

void CMiniGameTestScene::OnUpdate(DWORD dwCurrentTick, DWORD dwElapsedTick)
{
	__super::OnUpdate(dwCurrentTick, dwElapsedTick);
}

void CMiniGameTestScene::OnDrawWorld(CDisplayBuffer& vecBuffer)
{
	__super::OnDrawWorld(vecBuffer);
}

void CMiniGameTestScene::OnDrawUI(CDisplayBuffer& vecBuffer)
{
	__super::OnDrawUI(vecBuffer);
}
