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
	BYTE btMinPlayerCount;	// 1~6 사이
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

	std::string strContents1;	// 인트로 메시지
	std::string strContents2;	// 전직했을 때 보여줄 메시지
	std::string strContents3;	// 2단계 프로젝트를 마친 후 보여줄 메시지
	std::string strContents4;	// 수료 후 보여줄 메시지

	double CalcLevelOfCompletion(void) const;
};

enum E_JOB_TYPE
{
	JOB_TYPE_NONE = 0,		// 교육생
	JOB_TYPE_DEVELOPER,
	JOB_TYPE_FORENSICER,
	JOB_TYPE_CONSULTANT,
	JOB_TYPE_ANALYST,
	JOB_TYPE_MASTER,		// 수료생
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
	BYTE btLevel;			// 레벨. 큰 의미는 없고 장식이다.
	short nHP;				// 체력
	BYTE btAttack;			// 공격력.
	BYTE btDex;				// 행동속도. 1~7까지만 지정하자.(보스는 10까지다.)
	BYTE btVulnerability;	// 어떤 직업에 취약한지 나타낸다. 0:무속성, 바로위 E_JOB_TYPE 참조.
	WORD wRewardMoney;		// 보상 금액. 벨붕은 방지하자2.
	DWORD dwRewardExp;		// 보상 경험치. 벨붕은 방지하자.
	std::vector<BYTE> vecRewardItems;	// 보상 아이템. 벨붕은 방지하자3
};
#pragma pack(pop)