#pragma once

#include <Windows.h>
#include "DlgSuper.h"
#include "TextUI.h"
#include "ListUI.h"

class CMessageBox : public CDlgSuper
{
	CTextUI m_TextUI;
	CListUI m_MenuUI;

	std::vector<std::wstring> m_vecMessage;
	std::vector<std::string> m_vecMenu;

public:
	CMessageBox(CDlgSuper* pParent, std::string strContext, std::vector<std::string> vecMenu);
	~CMessageBox();

	void OnCreate(void);
	void OnInput(std::list<ST_KEYSTATE>& listKeyState);
	void OnUpdate(DWORD dwCurrentTick, DWORD dwElapsedTick);

	static int Show(CDlgSuper* pParent, std::string strMessage, int nStyle = MB_OK);
	static int Show(CDlgSuper* pParent, std::string strMessage, std::vector<std::string> vecMenu);
};

