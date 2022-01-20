#pragma once

#include "../_QuestFramework/_QuestFramework.h"

class CNpcContainer
{
	std::vector<ST_NPC_INFO> m_vecNPCInfo;

public:
	CNpcContainer(void);
	~CNpcContainer(void);

	void Load(void);

	int GetCount(void) { return (int)m_vecNPCInfo.size(); }
	const ST_NPC_INFO* GetNpcInfo(int nIndex);
};

