#include "pch.h"
#include "KeyInput.h"

CKeyInput::CKeyInput(void)
{
}

void CKeyInput::Register(int nID, int nVirtKey)
{
	m_mapRegisteredKey.insert(std::make_pair(nID, nVirtKey));
}

void CKeyInput::Query(std::list<ST_KEYSTATE>& outState)
{
	for (auto iter : m_mapRegisteredKey)
	{
		short nCurState = GetKeyState(iter.second);
		short nPreState = m_mapLastKeyState[iter.second];
		m_mapLastKeyState[iter.second] = nCurState;

		short nDiff = nCurState ^ nPreState;
		if (0 == (nDiff & 0x8000))		// Ű�� ������ �ʾҴٸ�
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
		{
			switch (key.nID)
			{
			case GAMEKEY_LEFT:
			case GAMEKEY_RIGHT:
			case GAMEKEY_UP:
			case GAMEKEY_DOWN:
				m_mapKeyPressTime[key.nID] = dwCurrentTick;
				break;
			}
		}
		else
		{
			switch (key.nID)
			{
			case GAMEKEY_LEFT:
			case GAMEKEY_RIGHT:
			case GAMEKEY_UP:
			case GAMEKEY_DOWN:
				m_mapKeyPressTime[key.nID] = 0xFFFFFFFF;
				break;
			}
		}
	}

	for (auto iter : m_mapRegisteredKey)
	{
		bool bIsKeyPressed = m_mapLastKeyState[iter.second] & 0x8000;

		if (bIsKeyPressed && m_mapKeyPressTime[iter.second] <= dwCurrentTick)
		{
			m_mapKeyPressTime[iter.second] = dwCurrentTick + 300;

			ST_KEYSTATE stRepeatKey;
			stRepeatKey.nID = iter.first;
			stRepeatKey.nVirtKey = iter.second;
			stRepeatKey.bPressed = true;
			stRepeatKey.bReserved = 0;
			outRepeatState.push_back(stRepeatKey);
		}
	}
}
