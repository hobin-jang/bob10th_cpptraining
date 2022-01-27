#include "pch.h"
#include "SingleLineTextUI.h"

CSingleLineTextUI::CSingleLineTextUI(void)
{
}

void CSingleLineTextUI::OnDraw(CDisplayBuffer& vecBuffer)
{
	__super::OnDraw(vecBuffer);

	int w = MIN(m_nRight - (m_nLeft + 1), m_strText.length());
	memcpy((void*)(vecBuffer[m_nTop + 1].c_str() + m_nLeft + 1), m_strText.c_str(), w * sizeof(wchar_t));
}

