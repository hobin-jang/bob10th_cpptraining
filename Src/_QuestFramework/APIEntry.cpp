#include "pch.h"
#include "APIEntry.h"

static IQuestInfo* g_pQuestInfo;
void ExportAPIEntry(IQuestInfo* pIntance)
{
	g_pQuestInfo = pIntance;
}

DLL_API int QueryNpc(ST_NPC_INFO* outInfoArr)
{
	std::vector<ST_NPC_INFO> vecNPC;
	g_pQuestInfo->QueryNpc(vecNPC);

	if (vecNPC.empty())
		return 0;

	if (nullptr == outInfoArr)
		return (int)vecNPC.size();

	*outInfoArr = vecNPC[0];
	return (int)vecNPC.size();
}

DLL_API int QueryNpcEx(ST_QUEST_NPC_DATA* outInfoArr)
{
	std::vector<ST_QUEST_NPC_DATA> vecNPC;
	g_pQuestInfo->QueryNpcEx(vecNPC);

	if (vecNPC.empty())
		return 0;

	if (nullptr == outInfoArr)
		return (int)vecNPC.size();

	*outInfoArr = vecNPC[0];
	return (int)vecNPC.size();
}

struct ST_QUEST_QUERIER
{
	std::vector<ST_QUEST_DATA*> quests;

	ST_QUEST_QUERIER(void)
	{
		g_pQuestInfo->QueryQuest(quests);
	}
	
	~ST_QUEST_QUERIER(void)
	{
		for (ST_QUEST_DATA* pQuestData : quests)
			delete pQuestData;
		quests.clear();
	}
};

DLL_API int QueryQuest(int nQuestID, int* pTargetNpcID, ST_QUEST_SEQUENCE* outInfoArr)
{
	ST_QUEST_QUERIER query;
	if ((int)query.quests.size() <= nQuestID)
		return 0;

	ST_QUEST_DATA* pQuest = query.quests[nQuestID];
	if (pTargetNpcID)
		*pTargetNpcID = pQuest->m_nTargetNpcId;
	if (outInfoArr)
		memcpy(outInfoArr, &pQuest->m_Sequence[0]
			, pQuest->m_Sequence.size() * sizeof(pQuest->m_Sequence[0]));

	return (int)pQuest->m_Sequence.size();
}
