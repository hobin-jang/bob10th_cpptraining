#include "stdafx.h"

int main()
{
    CConsoleOutput output;
    output.CreateBuffer(50, 50);
    output.SetViewPort(80, 30);

    auto& vecBuffer = output.GetBackBuffer();
    for (int y = 10; y < 15; y++)
        for (int x = 10; x < 15; x++)
            vecBuffer[y][x] = '.';

    while (true)
    {
        Sleep(50);
        output.Render(10, 10);
    }
    return 0;
}
