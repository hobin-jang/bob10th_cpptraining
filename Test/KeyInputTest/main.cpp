#include "stdafx.h"
#include "KeyInput.h"

enum E_GAMEKEY_TYPE
{
    GAMEKEY_LEFT,
    GAMEKEY_RIGHT,
    GAMEKEY_UP,
    GAMEKEY_DOWN,
    GAMEKEY_SELECT,
};

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
