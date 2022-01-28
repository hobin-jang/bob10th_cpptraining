#include "pch.h"
#include "MiniGameDlg.h"

CMiniGameDlg::CMiniGameDlg(void)
	: m_tSeq(0)
{
	m_vecText.resize(10);
}

CMiniGameDlg::~CMiniGameDlg(void)
{
}

void CMiniGameDlg::OnInput(std::list<ST_KEYSTATE>& listKeyState)
{
	for (ST_KEYSTATE key : listKeyState)
	{
		if (key.bPressed && key.nID == GAMEKEY_SELECT)
		{
			int x = rand() % g_nGameWidth;
			int y = rand() % g_nGameHeight;

			m_tSeq++;
			size_t tIndex = m_tSeq % m_vecText.size();
			if (m_tSeq < m_vecText.size())
			{
				m_vecText[tIndex].Create(this, x, y, x + 2, y + 2, UI_ATTRIBUTE_NO_BORDER);
				m_vecText[tIndex].AddText("hello?");
			}
			else
			{
				m_vecText[tIndex].SetPos(x, y, x + 2, y + 2);
			}
			
		}
	}
}

void CMiniGameDlg::OnUpdate(DWORD dwCurrentTick, DWORD dwElapsedTick)
{
	__super::OnUpdate(dwCurrentTick, dwElapsedTick);
}

void CMiniGameDlg::OnDrawWorld(CDisplayBuffer& vecBuffer)
{
	__super::OnDrawWorld(vecBuffer);
}

void CMiniGameDlg::OnDrawUI(CDisplayBuffer& vecBuffer)
{
	__super::OnDrawUI(vecBuffer);
}
