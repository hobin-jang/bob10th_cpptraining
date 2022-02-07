#pragma once

#include "../100_QuestFramework/100_QuestFramework.h"
#include "../000_GameFramework/000_GameFramework.h"
class QuestInfo : public IQuestInfo
{
public:
	QuestInfo(void);
	~QuestInfo(void);

	void QueryNpcEx(std::vector<ST_QUEST_NPC_DATA>& vecNPC);
	void QueryQuestObject(std::vector<ST_QUEST_OBJECT>& vecQuestObject);
	void QueryQuest(std::vector<ST_QUEST_DATA>& vecQuest);
};

