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

struct ST_QUEST_DATA
{
	int nNpcId;
	ST_FILTER StartCondition;	
	ST_FILTER ClearCondition;
	std::vector<std::string> vecMessages;
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

#pragma pack(pop)