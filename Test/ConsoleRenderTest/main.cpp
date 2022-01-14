#include "stdafx.h"
#include "ConsoleOutput.h"

void Update(std::vector<std::string>& vecBuffer)
{
    for (int y = 0; y < vecBuffer.size(); y++)
    {
        for (int x = 0; x < vecBuffer[y].size(); x++)
        {
            vecBuffer[y][x] = 32 + x + y;
        }
    }
}

int main()
{
    CConsoleOutput output;
    output.Create(50, 50);
    output.ViewPort(80, 30);

    Update(output.GetBuffer());
    while (true)
    {
        Sleep(50);
        output.Render(20, 25);
    }
    return 0;
}
