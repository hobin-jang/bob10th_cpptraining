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

	ST_POINT pos = m_Pos.MakePoint();
	if (pos.x < 1 || pos.y < 1)
		return;

	for (size_t i=0; i<m_vecImageData.size(); i++)
	{
		const std::wstring& strSrcLine = m_vecImageData[i];
		int y = pos.y + (int)i;
		if (m_vecImageData.size() <= y)
			return;

		vecBuffer.DrawString(m_Pos.x, y, strSrcLine, (size_t)m_Size.x);
	}
}
