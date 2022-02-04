#include "pch.h"
#include "SingleLineTextUI.h"

CSingleLineTextUI::CSingleLineTextUI(void)
{
}

void CSingleLineTextUI::OnDraw(CDisplayBuffer& vecBuffer)
{
	__super::OnDraw(vecBuffer);

	int w = std::min<int>(m_Size.x, m_strText.length());
	memcpy((void*)(vecBuffer[m_Pos.y + 1].c_str() + (int)m_Pos.x + 1), m_strText.c_str(), w * sizeof(wchar_t));
}

