#include "stdafx.h"

int main()
{
    CKeyInput input;
    input.Register(GAMEKEY_LEFT,    'A');
    input.Register(GAMEKEY_RIGHT,   'D');
    input.Register(GAMEKEY_UP,      'W');
    input.Register(GAMEKEY_DOWN,    'S');
    input.Register(GAMEKEY_SELECT,  ' ');

    while (true)
    {
        Sleep(50);
        
        std::list<ST_KEYSTATE> listKeyStates;
        input.Query(listKeyStates);

        for (ST_KEYSTATE state : listKeyStates)
            printf("key:`%c` pressed:%d\n", state.nVirtKey, state.bPressed);
    }
    return 0;
}
