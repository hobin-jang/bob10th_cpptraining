#pragma once

#include <vector>
#include <string>

class CQuestInfo : public IQuestInfo
{
public:
	CQuestInfo(void);
	~CQuestInfo(void);

	void QueryNpcEx(std::vector<ST_QUEST_NPC_DATA>& vecNPC);
	void QueryQuestObject(std::vector<ST_QUEST_OBJECT>& vecQuestObject);
	void QueryQuestItem(std::vector<ST_QUEST_ITEM_DATA>& vecQuestItem);
	void QueryQuestMonster(std::vector<ST_QUEST_MONSTER_DATA>& vecQuestMonster);
	void QueryQuest(std::vector<ST_QUEST_DATA>& vecQuest);
};
