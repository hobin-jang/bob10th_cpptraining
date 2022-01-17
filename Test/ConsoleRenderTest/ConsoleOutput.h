#pragma once

#include <vector>
#include <string>

class CConsoleOutput
{
    std::vector<std::string> m_vecBuffer;
    int m_nViewWidth;
    int m_nViewHeight;

public:
    CConsoleOutput(void);

    int Create(int nWidth, int nHeight);
    void ViewPort(int nViewWidth, int nViewHeight);
    void Render(int nCameraPosX, int nCameraPosY);

    std::vector<std::string>& GetBuffer(void);

private:
    bool EnableVTMode(void);
};
