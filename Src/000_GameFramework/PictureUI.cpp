#include "pch.h"
#include "PictureUI.h"
#include "HelperFunc.h"

CPictureUI::CPictureUI(void)
	: CUISuper()
{
}

CPictureUI::~CPictureUI(void)
{
}

void CPictureUI::SetImage(std::vector<std::string> vecImage)
{
	CDisplayBuffer vecTempImage;
	for(std::string& strLine : vecImage)
		vecTempImage.push_back(unicode::WCSFromMBS(strLine));

	SetImage(vecTempImage);
}

void CPictureUI::SetImage(CDisplayBuffer vecImage)
{
	m_vecImageData.clear();
	for (std::wstring& strLine : vecImage)
	{
		Replace(strLine, L"\t", L"    ");
		m_vecImageData.push_back(strLine);
	}
}

void CPictureUI::OnDrawUI(CDisplayBuffer& vecBuffer)
{
	__super::OnDrawUI(vecBuffer);
	int nBufferY = m_TargetPos.y + 1;
	int nBottom = (int)(m_Pos.y + m_Size.y + 1);
	nBottom = std::min<int>(nBottom, (int)vecBuffer.size() - 1);

	for (const std::wstring& strSrcLine : m_vecImageData)
	{
		int y = nBufferY++;
		if (nBottom <= y)
			break;

		const size_t tMaxBuffLength = vecBuffer[y].size() - (m_Pos.x + 1);
		int w = std::min<int>(std::min<int>(m_Size.x, strSrcLine.size()), tMaxBuffLength);
		memcpy((void*)&vecBuffer[y][m_Pos.x+1], strSrcLine.c_str(), w * sizeof(wchar_t));
	}
}
