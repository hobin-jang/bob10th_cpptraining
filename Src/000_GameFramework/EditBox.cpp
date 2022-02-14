#include "pch.h"
#include "EditBox.h"
#include "Unicode.h"
#include "HelperClass.h"

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
	CPoint pos((g_nConsoleW - m_tMaxLength) / 2, g_nConsoleH / 2 - 2);
	SetWindowPos(pos);
	CSize size(m_tMaxLength + 2, 4);
	SetWindowSize(size.Inflate(1, 1));
	ModifyAttribute(UI_ATTRIBUTE_NO_BORDER, 0);

	if (!m_strTitle.empty())
	{
		m_TitleUI.Create(this, 0, 0, size.cx, 2, UI_ATTRIBUTE_SINGLELINE | UI_ATTRIBUTE_NO_ANIMATION);
		m_TitleUI.SetText(m_strTitle);
	}
	m_TextUI.Create(this, 0, 2, size.cx, size.cy, UI_ATTRIBUTE_SINGLELINE | UI_ATTRIBUTE_NO_ANIMATION);

	m_KeyboardInput = g_pGameData->input;
	m_KeyboardInput.Clear();

	// ¼ýÀÚ
	for (int i = 0x30; i < 0x40; i++)
		m_KeyboardInput.Register(i, i);

	// ¾ËÆÄ¹î
	for (int i = 0x41; i < 0x5B; i++)
		m_KeyboardInput.Register(i, i);

	m_KeyboardInput.Register(VK_DELETE, VK_DELETE);
	m_KeyboardInput.Register(VK_BACK, VK_BACK);
	m_KeyboardInput.Register(VK_RETURN, VK_RETURN);
	m_KeyboardInput.Register(VK_ESCAPE, VK_ESCAPE);
	m_KeyboardInput.Register(VK_LEFT, VK_LEFT);
	m_KeyboardInput.Register(VK_RIGHT, VK_RIGHT);
	m_KeyboardInput.Register(VK_UP, VK_UP);
	m_KeyboardInput.Register(VK_SPACE, ' ');
	m_KeyboardInput.Register(VK_DOWN, VK_DOWN);
	m_KeyboardInput.Register(VK_OEM_PLUS,	'=');
	m_KeyboardInput.Register(VK_OEM_COMMA,	',');
	m_KeyboardInput.Register(VK_OEM_MINUS,	'-');
	m_KeyboardInput.Register(VK_OEM_PERIOD, '.');
	m_KeyboardInput.Register(VK_OEM_1, ';');
	m_KeyboardInput.Register(VK_OEM_2, '/');
	m_KeyboardInput.Register(VK_OEM_3, '~');
	m_KeyboardInput.Register(VK_OEM_4, '[');
	m_KeyboardInput.Register(VK_OEM_5, '|');
	m_KeyboardInput.Register(VK_OEM_6, ']');
	m_KeyboardInput.Register(VK_OEM_7, '\'');
}

void CEditBox::OnInput(std::list<ST_KEYSTATE>& listKeyState)
{
	std::list<ST_KEYSTATE> listTyping;
	m_KeyboardInput.Query(listTyping);

	for (ST_KEYSTATE stKey : listTyping)
	{
		if (!stKey.bPressed)
			continue;

		switch (stKey.nVirtKey)
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
			if (m_strContext.length() < ++m_tCursorPos)
				m_tCursorPos = m_strContext.length();
			break;

		case VK_UP:
			m_tCursorPos = 0;
			break;

		case VK_DOWN:
			m_tCursorPos = m_strContext.length();
			break;

		case VK_BACK:
			if (0 < m_tCursorPos)
			{
				m_strContext = m_strContext.substr(0, m_tCursorPos - 1) + m_strContext.substr(m_tCursorPos);
				m_tCursorPos--;
			}
			break;

		case VK_DELETE:
			if ( m_tCursorPos < m_strContext.length())
				m_strContext = m_strContext.substr(0, m_tCursorPos) + m_strContext.substr(m_tCursorPos + 1);
			break;
		case VK_OEM_MINUS:		InsertChar('-', '_');			break;
		case VK_OEM_PLUS:		InsertChar('=', '+');			break;
		case VK_OEM_COMMA:		InsertChar(',', '<');			break;
		case VK_OEM_PERIOD:		InsertChar('.', '>');			break;
		case VK_SPACE:			InsertChar(' ', ' ');			break;
		case VK_OEM_1:			InsertChar(';', ':');			break;
		case VK_OEM_2:			InsertChar('/', '?');			break;
		case VK_OEM_3:			InsertChar('`', '~');			break;
		case VK_OEM_4:			InsertChar('[', '{');			break;
		case VK_OEM_5:			InsertChar('\\', '|');			break;
		case VK_OEM_6:			InsertChar(']', '}');			break;
		case VK_OEM_7:			InsertChar('\'', '\"');			break;
		case '0':				InsertChar('0', ')');			break;
		case '1':				InsertChar('1', '!');			break;
		case '2':				InsertChar('2', '@');			break;
		case '3':				InsertChar('3', '#');			break;
		case '4':				InsertChar('4', '$');			break;
		case '5':				InsertChar('5', '%');			break;
		case '6':				InsertChar('6', '^');			break;
		case '7':				InsertChar('7', '&');			break;
		case '8':				InsertChar('8', '*');			break;
		case '9':				InsertChar('9', '(');			break;
		default:
			InsertChar(::tolower(stKey.nID), ::toupper(stKey.nID));
			break;
		}

		std::string strCursorText = m_strContext;
		strCursorText.insert(m_tCursorPos, 1, '|');
		m_TextUI.SetText(strCursorText);
	}
}

void CEditBox::OnUpdate(DWORD dwCurrentTick, DWORD dwElapsedTick)
{
	__super::OnUpdate(dwCurrentTick, dwElapsedTick);
}

void CEditBox::InsertChar(char cCharL, char cCharU)
{
	if (m_KeyboardInput.IsEnabledCapsLock())
		m_strContext.insert(m_tCursorPos, 1, cCharU);
	else
		m_strContext.insert(m_tCursorPos, 1, cCharL);
	m_tCursorPos++;
}

void CEditBox::OnDrawUI(CDisplayBuffer& vecBuffer, CRect rtDrawArea)
{
	__super::OnDrawUI(vecBuffer, rtDrawArea);
}

std::string CEditBox::GetContext(void)
{
	return m_strContext;
}

int CEditBox::Show(CDlgSuper* pParent, std::string strTitle, std::string& outText, size_t tMaxLength)
{
	CEditBox instance(pParent, strTitle, tMaxLength);
	if (instance.DoModal())
		return -1;

	outText = instance.GetContext();
	return 0;
}

int CEditBox::Show(CDlgSuper* pParent, std::string strTitle, std::wstring& outText, size_t tMaxLength)
{
	std::string outTextA;
	int nRet = Show(pParent, strTitle, outTextA, tMaxLength);
	outText = unicode::WCSFromMBS(outTextA);
	return nRet;
}
