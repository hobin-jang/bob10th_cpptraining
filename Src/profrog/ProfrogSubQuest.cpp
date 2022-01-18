#include "pch.h"
#include "ProfrogSubQuest.h"
 
CProfrogSubQuest::CProfrogSubQuest(void)
	: ST_QUEST_DATA()
{
	m_nTargetNpcId = 10000;

	m_Sequence.push_back(ST_QUEST_MESSAGE(m_nTargetNpcId, "���� ��¦�̰� �ִ�."));

	{
		ST_QUEST_FLAG_FILTER Condition;
		Condition.mask[1] = 0xFF;
		Condition.flags[1] = 0b11000000;
		m_Sequence.push_back(ST_QUEST_CONDITION(Condition));
	}

	m_Sequence.push_back(ST_QUEST_MESSAGE(0, "���� �ٴڿ� ������ �ֳ�."));
	m_Sequence.push_back(ST_QUEST_MESSAGE(0, "[��Ű]�� �����ߴ�."));
	m_Sequence.push_back(ST_QUEST_MESSAGE(0, "�ƹ����� �̰� ������ ����� ��Ű ����."));
	
	{
		ST_QUEST_FLAG_FILTER Reward;
		Reward.mask[1] = 0xFF;
		Reward.flags[1] = 0b11100000;
		m_Sequence.push_back(ST_QUEST_REWARD(Reward));
	}

	m_Sequence.push_back(ST_QUEST_MESSAGE(m_nTargetNpcId, "�̰����� ���� �ƹ��͵� ����."));
}

CProfrogSubQuest::~CProfrogSubQuest(void)
{
}
