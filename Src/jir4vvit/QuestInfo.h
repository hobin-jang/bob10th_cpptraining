#pragma once

#include <vector>
#include <string>

class CQuestInfo : public IQuestInfo
{
public:
    CQuestInfo(void);
    ~CQuestInfo(void);
    
    void QueryNpcEx(std::vector<ST_QUEST_NPC_DATA>& vecNPC);
    void QueryQuest(std::vector<ST_QUEST_DATA*>& vecQuest);
};
