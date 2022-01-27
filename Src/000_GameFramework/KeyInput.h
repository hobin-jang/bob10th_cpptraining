#pragma once

#include <map>
#include <list>
#include "Struct.h"

class CKeyInput
{
    std::map<int, int> m_mapRegisteredKey;
    std::map<int, short> m_mapLastKeyState;
    std::map<int, DWORD> m_mapKeyPressTime;
    bool m_bCapsLockEnabled;
    bool m_bShiftPressed;

public:
    CKeyInput(void);

    void Register(int nID, int nVirtKey);
    void UnregisterAll(void);
    void Query(std::list<ST_KEYSTATE>& outState);

    void GenerateRepeatKey(std::list<ST_KEYSTATE>& inState, std::list<ST_KEYSTATE>& outRepeatState);

    bool IsUpperCase(void);
};
