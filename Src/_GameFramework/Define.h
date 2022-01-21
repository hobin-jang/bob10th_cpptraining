#pragma once

#include <vector>
#include <string>

const int g_nFPS = 60; 

const int g_nDeltaTick = 1000 / g_nFPS;
const double g_dDeltaTime = 1.0 / g_nFPS;

const int g_nConsoleW = 100;
const int g_nConsoleH = 50;

typedef std::vector<std::string>	CDisplayBuffer;

#define WINDOW_TITLE	"BoB10th MMORPG 2022"


#ifndef MAX
#define MAX(x, y) ((x) < (y))? (y) : (x)
#endif

#ifndef MIN
#define MIN(x, y) ((x) < (y))? (x) : (y)
#endif
