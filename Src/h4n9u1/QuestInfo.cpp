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

void CQuestInfo::QueryNpcEx(std::vector<ST_QUEST_NPC_DATA>& vecNPC)
{
	ST_QUEST_NPC_DATA npc;
	npc.Pos.x = 5;
	npc.Pos.y = 3;
	npc.Pos.x = 24;
	npc.nNpcID = 146;
	npc.strTrack = "취약점분석트랙";
	npc.strName = "김훈민(H4N9U1)";
	npc.nAge = 24;
	npc.strMBTI = "INTJ/P";
	npc.cPatch = 'H';
	npc.strMessage = "취약점분석... 프로그래밍 언어... DB... 네트워크.. 임베디드 시스템... 알고리즘... 컴파일러... 배우고 싶은 건 많은데 시간이 없네... 그렇다면 나 자신을 갈아넣어야지...";
	npc.vecBuffer.resize(12);
	npc.vecBuffer[0] = "                ";
	npc.vecBuffer[1] = "        ___ ___ ";
	npc.vecBuffer[2] = " .-.   |   |   |";
	npc.vecBuffer[3] = " |E|___| N | D |";
	npc.vecBuffer[4] = " |x| c | e |   |";
	npc.vecBuffer[5] = " |p| / | t | B |";
	npc.vecBuffer[6] = " |l| c | w |   |";
	npc.vecBuffer[7] = " |o| p | o |   |";
	npc.vecBuffer[8] = " |i| p | r |   |";
	npc.vecBuffer[9] = " |t| ! | k |   |";
	npc.vecBuffer[10] =" ---------------";
	npc.vecBuffer[11] ="   h4n9u1.xyz  ";
	vecNPC.push_back(npc);
}

void CQuestInfo::QueryQuest(std::vector<ST_QUEST_DATA*>& vecQuest)
{
	
}



