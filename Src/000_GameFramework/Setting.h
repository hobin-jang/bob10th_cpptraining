#pragma once

#include "KeyInput.h"
#include "ConsoleOutput.h"
#include "Camera.h"

extern CKeyInput g_Input;
extern CConsoleOutput g_Output;
extern CCamera g_Camera;

extern const DWORD g_dwFPS;
extern const short g_nConsoleW;
extern const short g_nConsoleH;

const int g_nDeltaTick = 1000 / g_dwFPS;
const double g_dDeltaTime = 1.0 / g_dwFPS;
