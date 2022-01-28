#include "pch.h"
#include "APIEntry.h"

static IQuestInfo* g_pQuestInfo;
void ExportAPIEntry(IQuestInfo* pIntance)
{
	g_pQuestInfo = pIntance;
}

DLL_API int QueryNpcEx(std::vector<ST_QUEST_NPC_DATA>& vecNpcInfo)
{
	g_pQuestInfo->QueryNpcEx(vecNpcInfo);
	return (int)vecNpcInfo.size();
}

DLL_API void QueryQuestObject(std::vector<ST_QUEST_OBJECT>& vecQuest)
{
	g_pQuestInfo->QueryQuestObject(vecQuest);
}

DLL_API void QueryQuest(std::vector<ST_QUEST_DATA>& vecQuest)
{
	g_pQuestInfo->QueryQuest(vecQuest);
}
