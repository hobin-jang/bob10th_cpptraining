#pragma once

class CMiniGameDlg : public CDlgSuper
{
	size_t m_tSeq;
	std::vector<CTextUI> m_vecText;

public:
	CMiniGameDlg(void);
	~CMiniGameDlg(void);

	void OnInput(std::list<ST_KEYSTATE>& listKeyState);
	void OnUpdate(DWORD dwCurrentTick, DWORD dwElapsedTick);
	void OnDrawWorld(CDisplayBuffer& vecBuffer);
	void OnDrawUI(CDisplayBuffer& vecBuffer);
};

