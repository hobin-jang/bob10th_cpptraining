#include "pch.h"
#include "ProfrogQuest.h"

CProfrogQuest::CProfrogQuest(void)
	: ST_QUEST_DATA()
{
	m_nTargetNpcId = 1;

	m_Sequence.push_back(ST_QUEST_MESSAGE(m_nTargetNpcId, "�ȳ�? �� ���Ȱ���Ʈ�� �����."));
	m_Sequence.push_back(ST_QUEST_MESSAGE(m_nTargetNpcId, "���� C++ ���Ǹ� �ϴ� ������~"));
	m_Sequence.push_back(ST_QUEST_MESSAGE(m_nTargetNpcId, "������� �������� ũ�ν��÷��� API�� ���� å�� �� ���ڶ���."));
	m_Sequence.push_back(ST_QUEST_MESSAGE(0, "... �ȹ���þ�� -_-"));
	m_Sequence.push_back(ST_QUEST_MESSAGE(m_nTargetNpcId, "��, Ȥ�� �˾�? ���� å �ѱ� ����.."));

	{
		ST_QUEST_FLAG_FILTER Reward;
		Reward.mask[1] = 0xFF;
		Reward.flags[1] = 0b10000000;
		m_Sequence.push_back(ST_QUEST_REWARD(Reward));
	}

	{
		ST_QUEST_FLAG_FILTER Condition;
		Condition.mask[1] = 0xFF;
		Condition.flags[1] = 0b10000000;
		m_Sequence.push_back(ST_QUEST_CONDITION(Condition));
	}

	m_Sequence.push_back(ST_QUEST_MESSAGE(0, "��ħ API�� �����Ϸ��µ���,"));
	m_Sequence.push_back(ST_QUEST_MESSAGE(0, "�� å.. ��� �ϸ� ���� �� �������?"));
	m_Sequence.push_back(ST_QUEST_MESSAGE(m_nTargetNpcId, "���� ������ �ϴ� ģ������ �ַ��� �ߴµ�.."));
	m_Sequence.push_back(ST_QUEST_MESSAGE(m_nTargetNpcId, "�� �ƴ� �� ������ -_- ������ �ȴ�"));
	m_Sequence.push_back(ST_QUEST_MESSAGE(0, "�� ������ ������ �ҰԿ� �Ф�"));
	m_Sequence.push_back(ST_QUEST_MESSAGE(m_nTargetNpcId, "... ���ϰ����� ��Ź �ϳ��� ����ָ� �ٰ�."));
	m_Sequence.push_back(ST_QUEST_MESSAGE(m_nTargetNpcId, "���ϰ� �����Ϸ� ���ٺ��� ��Ű�� �Ҿ���Ⱦ�."));
	m_Sequence.push_back(ST_QUEST_MESSAGE(m_nTargetNpcId, "��ǥ (31, 147) �������̾��� �� ����."));

	{
		ST_QUEST_FLAG_FILTER Reward;
		Reward.mask[1] = 0xFF;
		Reward.flags[1] = 0b11000000;
		m_Sequence.push_back(ST_QUEST_REWARD(Reward));
	}

	{
		ST_QUEST_FLAG_FILTER Condition;
		Condition.mask[1] = 0xFF;
		Condition.flags[1] = 0b11100000;	// ProfrogSubQuest
		m_Sequence.push_back(ST_QUEST_CONDITION(Condition));
	}

	m_Sequence.push_back(ST_QUEST_MESSAGE(0, "Ȥ�� �̰ǰ���?"));
	m_Sequence.push_back(ST_QUEST_MESSAGE(0, "(��Ű�� �ǳ��ش�)"));
	m_Sequence.push_back(ST_QUEST_MESSAGE(m_nTargetNpcId, "��!!!!!! �¾�! ���� ������ ������ �ߴµ� �ϴ��� ��Ҵ�."));
	m_Sequence.push_back(ST_QUEST_MESSAGE(m_nTargetNpcId, "������ ǥ�÷� �� å �� �ٰ�."));
	m_Sequence.push_back(ST_QUEST_MESSAGE(0, "[ũ�ν��÷��� �ٽɸ�� ������ ��� å]�� �����ߴ�."));
	m_Sequence.push_back(ST_QUEST_MESSAGE(m_nTargetNpcId, "������ ������ ������ ^^"));

	{
		ST_QUEST_FLAG_FILTER Reward;
		Reward.mask[1] = 0xFF;
		Reward.flags[1] = 0b11110000;
		m_Sequence.push_back(ST_QUEST_REWARD(Reward));
	}

	{	// ��� ������ ����Ʈ�� ������ �������� �޽����� �ѹ� �� ��Ÿ����.
		ST_QUEST_FLAG_FILTER Condition;
		Condition.mask[1] = 0xFF;
		Condition.flags[1] = 0b11110000;
		m_Sequence.push_back(ST_QUEST_CONDITION(Condition));
	}
}

CProfrogQuest::~CProfrogQuest(void)
{
}
