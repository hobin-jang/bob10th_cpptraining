#include "pch.h"
#include "HelperFunc.h"

void TokenizeMessage(std::string strContext, std::vector<std::wstring>& outMessages, size_t tMaxTextLen)
{
	TokenizeMessage(core::WCSFromMBS(strContext), outMessages, tMaxTextLen);
}

void TokenizeMessage(std::wstring strContext, std::vector<std::wstring>& outMessages, size_t tMaxTextLen)
{
	// �޽����� ĳ���� ���Ϻ��� �߶� vector�� �־��
	std::vector<std::wstring> vecLines;
	core::TokenizeToArray(strContext, L"\n", vecLines, true);

	// ���� �ϳ��� ������ �ʹ� ��� ȭ�� ���̿� ���߾� ���� �ٷ� �ڸ�
	for (std::wstring strLine : vecLines)
	{
		for (size_t i = 0; i < strLine.size(); i += tMaxTextLen)
		{
			size_t tRemainedSize = strLine.size() - i;
			outMessages.push_back(strLine.substr(i, MIN(tMaxTextLen, tRemainedSize)));
		}
	}

	// �޽����� ������ �ּ� �� ���� �����ǵ��� ������
	if (outMessages.empty())
		outMessages.push_back(L"�޽����� �����ϴ�.");
}
