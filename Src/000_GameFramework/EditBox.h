#pragma once

#include "DlgSuper.h"
#include "TextUI.h"

class CEditBox : public CDlgSuper
{
	CTextUI m_TitleUI;
	CTextUI m_TextUI;
	CKeyInput m_KeyboardInput;

	std::string m_strTitle;
	std::string m_strContext;
	size_t m_tMaxLength;
	size_t m_tCursorPos;

public:
	CEditBox(CDlgSuper* pParent, std::string strTitle, size_t tMaxLength);
	~CEditBox(void);

	void OnDrawUI(CDisplayBuffer& vecBuffer, CRect rtDrawArea);

	std::string GetContext(void);
	static int Show(CDlgSuper* pParent, std::string strTitle, std::string& outText, size_t tMaxLength = (size_t)(g_nConsoleW * 0.8));
	static int Show(CDlgSuper* pParent, std::string strTitle, std::wstring& outText, size_t tMaxLength = (size_t)(g_nConsoleW * 0.8));

private:
	void OnCreate(void);
	void OnInput(std::list<ST_KEYSTATE>& listKeyState);
	void OnUpdate(DWORD dwCurrentTick, DWORD dwElapsedTick);

	void InsertChar(char cCharL, char cCharU);
};

