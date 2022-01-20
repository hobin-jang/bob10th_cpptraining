#pragma once

#include <vector>
#include <string>

const int g_nFPS = 10; 

const int g_nDeltaTick = 1000 / g_nFPS;
const double g_dDeltaTime = 1.0 / g_nFPS;

const int g_nBackBufferW = 1000;
const int g_nBackBufferH = 1000;
const int g_nConsoleW = 120;
const int g_nConsoleH = 40;

typedef std::vector<std::string>	CDisplayBuffer;

#ifndef MAX
#define MAX(x, y) ((x) < (y))? (y) : (x)
#endif

#ifndef MIN
#define MIN(x, y) ((x) < (y))? (x) : (y)
#endif
