#pragma once

#include <vector>
#include "Struct.h"

struct IQuestInfo
{
	virtual void QueryNpc(std::vector<ST_NPC_INFO>& vecNPC) = 0;
	virtual void QueryQuest(std::vector<ST_QUEST_DATA*>& vecQuest) = 0;
};
