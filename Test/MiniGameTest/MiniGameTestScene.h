#pragma once

#include "MiniGameDlg.h"

class CMiniGameTestScene : public CSceneSuper
{
	CMiniGameDlg m_GameDlg;
public:
	CMiniGameTestScene(void);
	~CMiniGameTestScene(void);

	void OnCreate(void);
	void OnInput(std::list<ST_KEYSTATE>& listKeyState);
	void OnUpdate(DWORD dwCurrentTick, DWORD dwElapsedTick);
	void OnDrawWorld(CDisplayBuffer& vecBuffer);
	void OnDrawUI(CDisplayBuffer& vecBuffer);
};

