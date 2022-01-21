#pragma once

#include <vector>
#include <string>
#include "Struct.h"

class CConsoleOutput
{
    std::vector<std::string> m_vecBackBuffer;
    int m_nViewWidth;
    int m_nViewHeight;

    bool InitConsole(void);

public:
    CConsoleOutput(void);

    int CreateBuffer(int nWidth, int nHeight);
    void SetViewPort(int nViewWidth, int nViewHeight);

    std::vector<std::string>& GetBackBuffer(void)    {    return m_vecBackBuffer;    }

    void Flip(const ST_VECTOR& pos, std::vector<std::string>& vecDisplayBuffer);
    void Render(const std::vector<std::string>& vecDisplayBuffer);
};
