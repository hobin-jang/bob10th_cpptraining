#pragma once

#include "../_QuestFramework/_QuestFramework.h"

class CResourceContainer
{
	std::vector<ST_NPC_INFO> m_vecNPCInfo;

	CResourceContainer(void);
	~CResourceContainer(void);

public:
	void Load(void);

	int GetNpcCount(void) { return (int)m_vecNPCInfo.size(); }
	const ST_NPC_INFO* GetNpcInfo(int nIndex);

	static CResourceContainer* GetInstance(void)
	{
		static CResourceContainer instance;
		return &instance;
	}
};

inline CResourceContainer* Resource(void)
{
	return CResourceContainer::GetInstance();
}