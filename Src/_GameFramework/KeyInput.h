#pragma once

#include <map>
#include <list>
#include "Struct.h"

enum E_GAMEKEY
{
    GAMEKEY_LEFT,
    GAMEKEY_RIGHT,
    GAMEKEY_UP,
    GAMEKEY_DOWN,
    GAMEKEY_SELECT,
    GAMEKEY_MENU,
    GAMEKEY_ESC,
};

class CKeyInput
{
    std::map<int, int> m_mapRegisteredKey;
    std::map<int, short> m_mapLastKeyState;

    CKeyInput(void);

public:
    void Register(int nID, int nVirtKey);
    void Query(std::list<ST_KEYSTATE>& outState);

    static CKeyInput* GetInstance(void)
    {
        static CKeyInput instance;
        return &instance;
    }
};

inline CKeyInput* Input(void)
{
    return CKeyInput::GetInstance();
}