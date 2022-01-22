#pragma once

#include <map>
#include <list>
#include "Define.h"
#include "Struct.h"

class CKeyInput
{
    std::map<int, int> m_mapRegisteredKey;
    std::map<int, short> m_mapLastKeyState;

public:
    CKeyInput(void);

    void Register(int nID, int nVirtKey);
    void Query(std::list<ST_KEYSTATE>& outState);
};
