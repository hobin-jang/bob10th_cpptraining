#pragma once

#include <vector>
#include <string>
#include "../000_GameFramework/000_GameFramework.h"

#pragma pack(push, 1)

struct ST_FILTER
{
	int nTargetNpcId;
	unsigned short wCondition;
	unsigned short wReward;

	ST_FILTER(void)
		: nTargetNpcId(0)
		, wCondition(0)
		, wReward(0)
	{}
	ST_FILTER(int targetNpcId, unsigned short condition, unsigned short reward = 0)
		: nTargetNpcId(targetNpcId)
		, wCondition(condition)
		, wReward(reward)
	{
	}
};

struct ST_QUEST_OBJECT : public ST_POINT3
{
	std::string strName;
	char cPatch;
	int nQuestObjectId;
};

struct ST_QUEST_BATTLE_INFO
{
	BYTE btMinPlayerCount;	// 1~6 ����
	std::vector<DWORD> vecClearBattleEnemy;
	ST_QUEST_BATTLE_INFO(void)
		: btMinPlayerCount(1)
	{}
};

struct ST_QUEST_DATA
{
	int nNpcId;
	ST_FILTER StartCondition;	
	ST_FILTER ClearCondition;
	std::vector<std::string> vecMessages;
	std::vector<BYTE> vecRewardItems;
	CDlgSuper* pClearGame;
	ST_QUEST_BATTLE_INFO ClearBattle;
	ST_QUEST_DATA(void)
		: nNpcId(-1), StartCondition(), ClearCondition(), vecMessages(), vecRewardItems(), pClearGame(nullptr), ClearBattle()
	{}
};

struct ST_QUEST_NPC_DATA : public ST_POINT3
{
	int nNpcID;
	std::string strTrack;
	std::string strName;
	int nAge;
	std::string strMBTI;
	char cPatch;
	std::string strMessage;
	std::vector<std::string> vecBigImage;		// 50x50
	std::vector<std::string> vecSmallImage;		// 25x25

	std::string strContents1;	// ��Ʈ�� �޽���
	std::string strContents2;	// �������� �� ������ �޽���
	std::string strContents3;	// 2�ܰ� ������Ʈ�� ��ģ �� ������ �޽���
	std::string strContents4;	// ���� �� ������ �޽���

	double CalcLevelOfCompletion(void) const;
};

enum E_JOB_TYPE
{
	JOB_TYPE_NONE = 0,		// ������
	JOB_TYPE_DEVELOPER,
	JOB_TYPE_FORENSICER,
	JOB_TYPE_CONSULTANT,
	JOB_TYPE_ANALYST,
	JOB_TYPE_MASTER,		// �����
};

struct ST_QUEST_ITEM_DATA
{
	BYTE btId;
	short nHP;
	short nMP;
	std::string strName;
	std::string strDesc;
	ST_QUEST_ITEM_DATA(void)
		: btId(0), nHP(0), nMP(0)
	{}
};

struct ST_QUEST_MONSTER_DATA
{
	DWORD dwMonsterId;
	std::string strName;
	BYTE btLevel;			// ����. ū �ǹ̴� ���� ����̴�.
	short nHP;				// ü��
	BYTE btAttack;			// ���ݷ�.
	BYTE btDex;				// �ൿ�ӵ�. 1~7������ ��������.(������ 10������.)
	BYTE btVulnerability;	// � ������ ������� ��Ÿ����. 0:���Ӽ�, �ٷ��� E_JOB_TYPE ����.
	WORD wRewardMoney;		// ���� �ݾ�. ������ ��������2.
	DWORD dwRewardExp;		// ���� ����ġ. ������ ��������.
	std::vector<BYTE> vecRewardItems;	// ���� ������. ������ ��������3
};
#pragma pack(pop)