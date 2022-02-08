#include "pch.h"
#include "EditBox.h"
#include "Unicode.h"

CEditBox::CEditBox(CDlgSuper* pParent, std::string strTitle, size_t tMaxLength)
	:CDlgSuper(pParent)
	, m_strTitle(strTitle)
	, m_tMaxLength(tMaxLength)
	, m_tCursorPos(0)
{
}

CEditBox::~CEditBox(void)
{
}

void CEditBox::OnCreate(void)
{
	ST_POINT pos{ (g_nConsoleW - m_tMaxLength) / 2 - 1, g_nConsoleH / 2 - 3 };
	SetPos(pos);
	ST_SIZE size{ m_tMaxLength, 5 };
	SetSize(size);
	m_dwAttribute |= UI_ATTRIBUTE_NO_BORDER;

	if (!m_strTitle.empty())
	{
		m_TitleUI.Create(this, ST_POINT{ 0, 0}, ST_SIZE{ size.cx, 3 }, UI_ATTRIBUTE_NO_BORDER | UI_ATTRIBUTE_SINGLELINE);
		m_TitleUI.SetText(m_strTitle);
	}
	m_TextUI.Create(this, ST_POINT{ 0, 2 }, ST_SIZE{ size.cx, 3 }, UI_ATTRIBUTE_SINGLELINE);

	m_KeyboardInput = g_Input;
	m_KeyboardInput.Clear();
	for (int i = 0x32; i < 0x7F; i++)
		m_KeyboardInput.Register(i, i);

	m_KeyboardInput.Register(VK_DELETE, VK_DELETE);
	m_KeyboardInput.Register(VK_BACK, VK_BACK);
	m_KeyboardInput.Register(VK_RETURN, VK_RETURN);
	m_KeyboardInput.Register(VK_ESCAPE, VK_ESCAPE);
	m_KeyboardInput.Register(VK_LEFT, VK_LEFT);
	m_KeyboardInput.Register(VK_RIGHT, VK_RIGHT);
	m_KeyboardInput.Register(VK_UP, VK_UP);
	m_KeyboardInput.Register(VK_DOWN, VK_DOWN);
}

void CEditBox::OnInput(std::list<ST_KEYSTATE>& listKeyState)
{
	std::list<ST_KEYSTATE> listTyping;
	m_KeyboardInput.Query(listTyping);

	for (ST_KEYSTATE stKey : listTyping)
	{
		if (!stKey.bPressed)
			continue;

		switch (stKey.nID)
		{
		case VK_RETURN:
			Close(0);
			break;

		case VK_ESCAPE:
			Close(-1);
			break;

		case VK_LEFT:
			if (0 < m_tCursorPos)
				m_tCursorPos--;
			break;

		case VK_RIGHT:
			if (m_strText.length() < ++m_tCursorPos)
				m_tCursorPos = m_strText.length();
			break;

		case VK_UP:
			m_tCursorPos = 0;
			break;

		case VK_DOWN:
			m_tCursorPos = m_strText.length();
			break;

		case VK_BACK:
			if (0 < m_tCursorPos)
			{
				m_strText = m_strText.substr(0, m_tCursorPos - 1) + m_strText.substr(m_tCursorPos);
				m_tCursorPos--;
			}
			break;

		case VK_DELETE:
			if ( m_tCursorPos < m_strText.length())
				m_strText = m_strText.substr(0, m_tCursorPos) + m_strText.substr(m_tCursorPos + 1);
			break;

		default:
			if (m_KeyboardInput.IsEnabledCapsLock())
				m_strText.insert(m_tCursorPos, 1, (char)::toupper(stKey.nVirtKey));
			else
				m_strText.insert(m_tCursorPos, 1, (char)::tolower(stKey.nVirtKey));
			m_tCursorPos++;
		}

		std::string strCursorText = m_strText;
		strCursorText.insert(m_tCursorPos, 1, '|');
		m_TextUI.SetText(strCursorText);
	}
}

void CEditBox::OnUpdate(DWORD dwCurrentTick, DWORD dwElapsedTick)
{
	__super::OnUpdate(dwCurrentTick, dwElapsedTick);
}

void CEditBox::OnDrawUI(CDisplayBuffer& vecBuffer)
{
	__super::OnDrawUI(vecBuffer);
}

std::string CEditBox::GetText(void)
{
	return m_strText;
}

int CEditBox::Show(CDlgSuper* pParent, std::string strTitle, std::string& outText, size_t tMaxLength)
{
	CEditBox instance(pParent, strTitle, tMaxLength);
	if (instance.DoModal())
		return -1;

	outText = instance.GetText();
	return 0;
}

int CEditBox::Show(CDlgSuper* pParent, std::string strTitle, std::wstring& outText, size_t tMaxLength)
{
	std::string outTextA;
	int nRet = Show(pParent, strTitle, outTextA, tMaxLength);
	outText = unicode::WCSFromMBS(outTextA);
	return nRet;
}
