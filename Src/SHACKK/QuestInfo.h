#pragma once

#include <vector>
#include <string>

class CQuestInfo : public IQuestInfo
{
public:
	CQuestInfo(void);
	~CQuestInfo(void);

	virtual void QueryNpcEx(std::vector<ST_QUEST_NPC_DATA>& vecNPC);
	virtual void QueryQuestObject(std::vector<ST_QUEST_OBJECT>& vecQuestObject);
	virtual void QueryQuest(std::vector<ST_QUEST_DATA>& vecQuest);
	virtual void QueryQuestItem(std::vector<ST_QUEST_ITEM_DATA>& vecQuestItem);
	virtual void QueryQuestMonster(std::vector<ST_QUEST_MONSTER_DATA>& vecQuestMonster);
};
