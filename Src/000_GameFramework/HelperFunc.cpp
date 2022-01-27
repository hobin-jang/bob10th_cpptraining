#include "pch.h"
#include "HelperFunc.h"

void TokenizeMessage(std::string strContext, std::vector<std::wstring>& outMessages, size_t tMaxTextLen)
{
	TokenizeMessage(core::WCSFromMBS(strContext), outMessages, tMaxTextLen);
}

void TokenizeMessage(std::wstring strContext, std::vector<std::wstring>& outMessages, size_t tMaxTextLen)
{
	// 메시지를 캐리지 리턴별로 잘라서 vector에 넣어둠
	std::vector<std::wstring> vecLines;
	core::TokenizeToArray(strContext, L"\n", vecLines, true);

	// 만일 하나의 라인이 너무 길면 화면 길이에 맞추어 여러 줄로 자름
	for (std::wstring strLine : vecLines)
	{
		for (size_t i = 0; i < strLine.size(); i += tMaxTextLen)
		{
			size_t tRemainedSize = strLine.size() - i;
			outMessages.push_back(strLine.substr(i, MIN(tMaxTextLen, tRemainedSize)));
		}
	}

	// 메시지가 없으면 최소 한 줄은 유지되도록 수정함
	if (outMessages.empty())
		outMessages.push_back(L"메시지가 없습니다.");
}
