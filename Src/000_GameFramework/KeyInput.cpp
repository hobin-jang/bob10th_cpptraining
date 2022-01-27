#include "pch.h"
#include "KeyInput.h"

CKeyInput::CKeyInput(void)
{
}

void CKeyInput::Register(int nID, int nVirtKey)
{
	m_mapRegisteredKey.insert(std::make_pair(nID, nVirtKey));
}

void CKeyInput::UnregisterAll(void)
{
	m_mapRegisteredKey.clear();
}

void CKeyInput::Query(std::list<ST_KEYSTATE>& outState)
{
	m_bCapsLockEnabled = GetKeyState(VK_CAPITAL) & 0x01;
	m_bShiftPressed = GetKeyState(VK_LSHIFT) & 0x8000;

	for (auto iter : m_mapRegisteredKey)
	{
		short nCurState = GetKeyState(iter.second);
		short nPreState = m_mapLastKeyState[iter.second];
		m_mapLastKeyState[iter.second] = nCurState;

		short nDiff = nCurState ^ nPreState;
		if (0 == (nDiff & 0x8000))		// 키가 눌리지 않았다면
			continue;

		ST_KEYSTATE KeyState;
		KeyState.nID = iter.first;
		KeyState.nVirtKey = iter.second;
		KeyState.bPressed = (nCurState & 0x8000)? true : false;
		KeyState.bReserved = 0;
		outState.push_back(KeyState);
	}
}

void CKeyInput::GenerateRepeatKey(std::list<ST_KEYSTATE>& inState, std::list<ST_KEYSTATE>& outRepeatState)
{
	const DWORD dwCurrentTick = GetTickCount();
	for (ST_KEYSTATE key : inState)
	{
		if (key.bPressed)
			m_mapKeyPressTime[key.nID] = dwCurrentTick;
		else
			m_mapKeyPressTime[key.nID] = 0xFFFFFFFF;
	}

	for (auto iter : m_mapRegisteredKey)
	{
		bool bIsKeyPressed = m_mapLastKeyState[iter.second] & 0x8000;

		if (bIsKeyPressed && m_mapKeyPressTime[iter.second] <= dwCurrentTick)
		{
			m_mapKeyPressTime[iter.second] = dwCurrentTick + 100;

			ST_KEYSTATE stRepeatKey;
			stRepeatKey.nID = iter.first;
			stRepeatKey.nVirtKey = iter.second;
			stRepeatKey.bPressed = true;
			stRepeatKey.bReserved = 0;
			outRepeatState.push_back(stRepeatKey);
		}
	}
}

bool CKeyInput::IsUpperCase(void)
{
	return m_bCapsLockEnabled xor m_bShiftPressed;
}

