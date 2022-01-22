#pragma once

#include "Struct.h"

void Clear(CDisplayBuffer& buffer);
void DrawRectangle(CDisplayBuffer& buffer, ST_VECTOR ptLeftTop, ST_VECTOR ptRightBtm);
void DrawRectangle(CDisplayBuffer& buffer, int nLeft, int nTop, int nRight, int nBottom);