#pragma once

#include <vector>
#include <string>

class CConsoleOutput
{
    std::vector<std::string> m_vecBackBuffer;
    int m_nViewWidth;
    int m_nViewHeight;

    bool EnableVTMode(void);

public:
    CConsoleOutput(void);

    int CreateBuffer(int nWidth, int nHeight);
    void SetViewPort(int nViewWidth, int nViewHeight);
    void Render(int nCameraPosX, int nCameraPosY);

    std::vector<std::string>& GetBackBuffer(void)    {    return m_vecBackBuffer;    }

private:
    void Flip(int nCameraPosX, int nCameraPosY, std::vector<std::string>& vecDisplayBuffer);
    void Print(const std::vector<std::string>& vecDisplayBuffer);
};
