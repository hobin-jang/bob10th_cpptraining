#include "pch.h"
#include "QuestInfo.h"

static CQuestInfo g_QuestInfo;

CQuestInfo::CQuestInfo()
{
	ExportAPIEntry(this);
}

CQuestInfo::~CQuestInfo()
{
	
}

void CQuestInfo::QueryNpc(std::vector<ST_NPC_INFO>& vecNPC)
{
	ST_NPC_INFO npc;
	strcpy_s(npc.szName, 21, "김훈민 멘티");
	npc.patch = 'p';
	strcpy_s(npc.szGreetMessage, 61, "..."); // 자기소개 추가 예정

	// 사진이 없으므로 닉네임의 아스키코드를 넣음
	npc.vecBuffer.resize(6);
	npc.vecBuffer[0] = " _   _    ___  _   _  _____  _   _  __  ";
	npc.vecBuffer[1] = "| | | |  /   || \\ | ||  _  || | | |/  | ";
	npc.vecBuffer[2] = "| |_| | / /| ||  \\| || |_| || | | |`| | ";
	npc.vecBuffer[3] = "|  _  |/ /_| || . ` |\\____ || | | | | | ";
	npc.vecBuffer[4] = "| | | |\\___  || |\\  |.___/ /| |_| |_| |_";
	npc.vecBuffer[5] = "\\_| |_/    |_/\\_| \\_/\\____/  \\___/ \\___/";

	vecNPC.push_back(npc);
}

void CQuestInfo::QueryQuest(std::vector<ST_QUEST_DATA*>& vecQuest)
{
	
}



