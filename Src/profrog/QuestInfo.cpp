#include "pch.h"
#include "QuestInfo.h"

static CQuestInfo g_QuestInfo;

CQuestInfo::CQuestInfo(void)
{
	ExportAPIEntry(this);
}

CQuestInfo::~CQuestInfo(void)
{
}

void CQuestInfo::QueryNpc(std::vector<ST_NPC_INFO>& vecNPC)
{
	{
		ST_NPC_INFO npc;
		npc.id = 1;
		strcpy_s(npc.szName, 21, "������ ����");
		npc.x = 75;
		npc.y = 101;
		npc.w = 0.5;
		npc.h = 0.5;
		npc.patch = '@';
		strcpy_s(npc.szGreetMessage, 61, "��������");
		vecNPC.push_back(npc);
	}

	{
		ST_NPC_INFO npc;
		npc.id = 10000;
		strcpy_s(npc.szName, "");
		npc.x = 31;
		npc.y = 147;
		npc.w = 0.5;
		npc.h = 0.5;
		npc.patch = '^';
		strcpy_s(npc.szGreetMessage, 61, "���� ������ ������ ������ �ִ�.");
		vecNPC.push_back(npc);
	}

	{
		ST_NPC_INFO npc;
		npc.id = 10001;
		strcpy_s(npc.szName, "��Ƽ1");
		npc.x = 81;
		npc.y = 101;
		npc.w = 0.5;
		npc.h = 0.5;
		npc.patch = '&';
		strcpy_s(npc.szGreetMessage, 61, "������ ����� �ҹ� ���þ�? (-50,50) �ٹ濡 �ִٴ���..");
		vecNPC.push_back(npc);
	}

	{
		ST_NPC_INFO npc;
		npc.id = 10002;
		strcpy_s(npc.szName, "��Ƽ2");
		npc.x = 81;
		npc.y = 97;
		npc.w = 0.5;
		npc.h = 0.5;
		npc.patch = '&';
		strcpy_s(npc.szGreetMessage, 61, "���� ������ �ٸ� ����� ����ϴ� �ɸ��� �ȵ�.");
		vecNPC.push_back(npc);
	}

	{
		ST_NPC_INFO npc;
		npc.id = 10003;
		strcpy_s(npc.szName, "��Ƽ3");
		npc.x = 87;
		npc.y = 101;
		npc.w = 0.5;
		npc.h = 0.5;
		npc.patch = '&';
		strcpy_s(npc.szGreetMessage, 61, "������ ������� `G` ��ư���� �����ϸ� ���� �� �ִ�.");
		vecNPC.push_back(npc);
	}

	{
		ST_NPC_INFO npc;
		npc.id = 10004;
		strcpy_s(npc.szName, "��Ƽ4");
		npc.x = 87;
		npc.y = 97;
		npc.w = 0.5;
		npc.h = 0.5;
		npc.patch = '&';
		strcpy_s(npc.szGreetMessage, 61, "���� ����� ��..... ������ `G`��ư���� ���� ��ƾ� ��");
		vecNPC.push_back(npc);
	}
}

#include "ProfrogQuest.h"
#include "ProfrogSubQuest.h"
void CQuestInfo::QueryQuest(std::vector<ST_QUEST_DATA*>& vecQuest)
{
	vecQuest.push_back(new CProfrogQuest());
	vecQuest.push_back(new CProfrogSubQuest());
}
