#pragma once

#include <vector>
#include <string>
#include "Struct.h"

class CConsoleOutput
{
    CDisplayBuffer m_vecBackBuffer;
    int m_nViewWidth;
    int m_nViewHeight;

    bool InitConsole(void);

public:
    CConsoleOutput(void);

    int CreateBuffer(int nWidth, int nHeight);
    void SetViewPort(int nViewWidth, int nViewHeight);

    CDisplayBuffer& GetBackBuffer(void)    {    return m_vecBackBuffer;    }

    void Flip(const ST_VECTOR& pos, CDisplayBuffer& vecDisplayBuffer);
    void Render(const CDisplayBuffer& vecDisplayBuffer);
};
