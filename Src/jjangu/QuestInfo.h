#pragma once

#include <vector>
#include <string>
#include "../_QuestFramework/_QuestFramework.h"

class CQuestInfo : public IQuestInfo
{
public:
	CQuestInfo(void);
	~CQuestInfo(void);

	void QueryNpc(std::vector<ST_NPC_INFO>& vecNPC);
	void QueryNpcEx(std::vector<ST_QUEST_NPC_DATA>& vecNPC);
	void QueryQuest(std::vector<ST_QUEST_DATA*>& vecQuest);
};

class QuestInfo
{
};

