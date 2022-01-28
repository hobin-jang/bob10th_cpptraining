#pragma once

#include <vector>
#include "QuestStruct.h"

struct IQuestInfo
{
	virtual void QueryNpcEx(std::vector<ST_QUEST_NPC_DATA>& vecNPC) = 0;
	virtual void QueryQuestObject(std::vector<ST_QUEST_OBJECT>& vecQuestObject) {}
	virtual void QueryQuest(std::vector<ST_QUEST_DATA>& vecQuest) {}
};
