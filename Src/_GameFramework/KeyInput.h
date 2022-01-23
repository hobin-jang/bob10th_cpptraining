#pragma once

#include <map>
#include <list>
#include "Define.h"
#include "Struct.h"

class CKeyInput
{
    std::map<int, int> m_mapRegisteredKey;
    std::map<int, short> m_mapLastKeyState;
    std::map<int, DWORD> m_mapKeyPressTime;

public:
    CKeyInput(void);

    void Register(int nID, int nVirtKey);
    void Query(std::list<ST_KEYSTATE>& outState);

    void GenerateRepeatKey(std::list<ST_KEYSTATE>& inState, std::list<ST_KEYSTATE>& outRepeatState);
};
