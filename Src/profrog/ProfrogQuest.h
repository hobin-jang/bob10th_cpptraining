#pragma once

#include "../_QuestFramework/_QuestFramework.h"

class CProfrogQuest : public ST_QUEST_DATA
{
	ST_QUEST_FLAG_FILTER m_ClearCondition;
public:
	CProfrogQuest(void);
	~CProfrogQuest(void);
};
