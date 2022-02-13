#include "pch.h"
#include "MessageBox.h"
#include "HelperFunc.h"
#include "HelperClass.h"

CMessageBox::CMessageBox(CDlgSuper* pParent, std::string strContext, std::vector<std::string> vecMenu, int nDefault)
	: CDlgSuper(pParent)
	, m_vecMenu(vecMenu)
	, m_nDefault(nDefault)
{
	TokenizeMessage(strContext, m_vecMessage, g_nConsoleW * 0.8);

	if (vecMenu.empty())
		vecMenu.push_back("확인");
}

CMessageBox::~CMessageBox()
{
}

void CMessageBox::OnCreate(void)
{
	// 텍스트 박스 크기 계산
	size_t tMaxTextLen = 10;
	for (std::wstring strLine : m_vecMessage)
	{
		if (tMaxTextLen < strLine.size())
			tMaxTextLen = strLine.size();
	}
	for (std::string strLine : m_vecMenu)
	{
		if (tMaxTextLen < strLine.size())
			tMaxTextLen = strLine.size();
	}

	tMaxTextLen = std::min<size_t>(tMaxTextLen, (size_t)(g_nConsoleW * 0.8));

	SetPos(CPoint((g_nConsoleW - tMaxTextLen) / 2, (g_nConsoleH - m_vecMessage.size() - m_vecMenu.size()) / 2), true);
	SetSize(CSize(tMaxTextLen, m_vecMessage.size() + m_vecMenu.size() + 1));

	// 텍스트 상자 생성
	m_TextUI.Create(this, CPoint(1, 1), CSize(tMaxTextLen, m_vecMessage.size()));
	for (std::wstring strLine : m_vecMessage)
		m_TextUI.AddText(strLine);

	// 메뉴 상자 생성
	m_MenuUI.Create(this, CPoint(1, 1 + m_vecMessage.size() + 1), CSize(tMaxTextLen, m_vecMenu.size()));
	for (std::string strMenu : m_vecMenu)
		m_MenuUI.AddItem(strMenu);

	m_MenuUI.SetCurPos(m_nDefault);
	m_MenuUI.SetItemAlign(-1);
	m_MenuUI.AdjustHeight(-1);
}

void CMessageBox::OnInput(std::list<ST_KEYSTATE>& listKeyState)
{
	for (const ST_KEYSTATE& state : listKeyState)
	{
		if (!state.bPressed)
			continue;

		switch (state.nID)
		{
		case GAMEKEY_UP:
			m_MenuUI.MoveCurPos(0, -1);
			break;
		case GAMEKEY_DOWN:
			m_MenuUI.MoveCurPos(0, 1);
			break;
		case GAMEKEY_LEFT:
			m_MenuUI.MoveCurPos(-1, 0);
			break;
		case GAMEKEY_RIGHT:
			m_MenuUI.MoveCurPos(1, 0);
			break;

		case GAMEKEY_SELECT:
		case GAMEKEY_MENU:
			Close(m_MenuUI.GetCurPos());
			break;

		case GAMEKEY_ESC:
			Close(-1);
			break;
		}
	}
}

void CMessageBox::OnUpdate(DWORD dwCurrentTick, DWORD dwElapsedTick)
{
	__super::OnUpdate(dwCurrentTick, dwElapsedTick);
}

int CMessageBox::Show(CDlgSuper* pParent, std::string strMessage, int nStyle)
{
	std::vector<std::string> vecMenu;
	switch(nStyle)
	{
	case MB_YESNO:
		vecMenu.push_back("예");
		vecMenu.push_back("아니오");
		break;
	case MB_YESNOCANCEL:
		vecMenu.push_back("예");
		vecMenu.push_back("아니오");
		vecMenu.push_back("취소");
		break;
	case MB_OKCANCEL:
		vecMenu.push_back("확인");
		vecMenu.push_back("취소");
	default:
		vecMenu.push_back("확인");
	}

	CMessageBox instance(pParent, strMessage, vecMenu);
	int nAnswer = instance.DoModal();
	switch (nStyle)
	{
	case MB_YESNO:
	case MB_YESNOCANCEL:
		switch (nAnswer)
		{
		case 0:		return IDYES;
		case 1:		return IDNO;
		default:	return IDCANCEL;
		}
		break;
	case MB_OKCANCEL:
	default:
		switch (nAnswer)
		{
		case 0:	return IDOK;
		case 1:	return IDCANCEL;
		default:	return IDCANCEL;
		}
	}

	return 0;
}

int CMessageBox::Show(CDlgSuper* pParent, std::string strMessage, std::vector<std::string> vecMenu, int nDefault)
{
	CMessageBox instance(pParent, strMessage, vecMenu, nDefault);
	return instance.DoModal();
}

