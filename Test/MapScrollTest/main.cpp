#include "stdafx.h"
#include <Windows.h>
#include "../KeyInputTest/KeyInput.h"
#include "../ConsoleRenderTest/ConsoleOutput.h"
#include "Struct.h"

int main()
{
    CKeyInput input;
    input.Register(GAMEKEY_LEFT, 'A');
    input.Register(GAMEKEY_RIGHT, 'D');
    input.Register(GAMEKEY_UP, 'W');
    input.Register(GAMEKEY_DOWN, 'S');

    CConsoleOutput output;
    output.CreateBuffer(100, 100);
    output.SetViewPort(80, 30);
    
    auto& buffer = output.GetBackBuffer();
    for (int y = 10; y < 15; y++)
        for (int x = 10; x < 15; x++)
            buffer[y][x] = '.';

    ST_VECTOR pos;
    ST_VECTOR vel;
    while (true)
    {
        Sleep(16);

        std::list<ST_KEYSTATE> listKeyState;
        input.Query(listKeyState);
        
        const int nMaxVel = 20;
        for (const ST_KEYSTATE& state : listKeyState)
        {
            if (state.bPressed)
            {
                switch (state.nID)
                {
                case GAMEKEY_LEFT:      vel.x += -nMaxVel;     break;
                case GAMEKEY_RIGHT:     vel.x += nMaxVel;      break;
                case GAMEKEY_UP:        vel.y += -nMaxVel;     break;
                case GAMEKEY_DOWN:      vel.y += nMaxVel;      break;
                }
            }
            else
            {
                switch (state.nID)
                {
                case GAMEKEY_LEFT:      vel.x -= -nMaxVel;     break;
                case GAMEKEY_RIGHT:     vel.x -= nMaxVel;      break;
                case GAMEKEY_UP:        vel.y -= -nMaxVel;     break;
                case GAMEKEY_DOWN:      vel.y -= nMaxVel;      break;
                }
            }
        }

        pos += vel * 0.016;
        output.Render(pos.x, pos.y);
        printf("(%lf,\t%lf)\n", pos.x, pos.y);
    }
    return 0;
}
