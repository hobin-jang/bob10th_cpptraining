#include "pch.h"
#include "Setting.h"

DWORD g_dwFPS = 30;
short g_nConsoleW = 80;
short g_nConsoleH = 40;
int g_nDeltaTick = 1000 / g_dwFPS;
double g_dDeltaTime = 1.0 / g_dwFPS;

ST_GAME_DATA* g_pGameData = nullptr;
CCamera g_Camera;

ST_GAME_DATA::ST_GAME_DATA(void)
	: dwFPS(30)
	, nConsoleW(80)
	, nConsoleH(40)
	, nBackBufferWidth(80)
	, nBackBufferHeight(40)
	, input()
	, output()
{
}

void ST_GAME_DATA::Init(std::string strTitle, DWORD dwKeyRepeatInterval)
{
	input.SetRepeatTick(dwKeyRepeatInterval);
	output.InitConsole(strTitle, nConsoleW * 2, nConsoleH);
	output.InitBackBuffer(nBackBufferWidth, nBackBufferHeight);
	output.SetViewPort(nConsoleW, nConsoleH);
}

void InitGame(ST_GAME_DATA* pGameData)
{
	g_dwFPS = pGameData->dwFPS;
	g_nConsoleW = pGameData->nConsoleW;
	g_nConsoleH = pGameData->nConsoleH;
	g_nDeltaTick = 1000 / pGameData->dwFPS;
	g_dDeltaTime = 1.0 / pGameData->dwFPS;

	g_pGameData = pGameData;
}
