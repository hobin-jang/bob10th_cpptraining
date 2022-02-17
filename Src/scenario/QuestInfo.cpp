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

void CQuestInfo::QueryNpcEx(std::vector<ST_QUEST_NPC_DATA>& vecNPC)
{
}

void CQuestInfo::QueryQuestObject(std::vector<ST_QUEST_OBJECT>& vecQuestObject)
{
	{
		ST_QUEST_OBJECT stObject;
		stObject.nQuestObjectId = 290;
		stObject.strName = "1�ܰ�1������";
		stObject.cPatch = 'B';
		stObject.x = 12;
		stObject.y = 19;
		stObject.z = 16;
		stObject.reserved = 0;
		vecQuestObject.push_back(stObject);
	}
}

void CQuestInfo::QueryQuestItem(std::vector<ST_QUEST_ITEM_DATA>& vecQuestItem)
{
	{
		ST_QUEST_ITEM_DATA item;
		item.btId = 128;
		item.strName = "������";
		item.strDesc = "��� ü�°� ���ŷ��� ȸ�������ش�.";
		item.nHP = 9999;
		item.nMP = 9999;
		vecQuestItem.push_back(item);
	}
	{
		ST_QUEST_ITEM_DATA item;
		item.btId = 129;
		item.strName = "����޴�";
		item.strDesc = "BoB ��������� ���޵ȴ�. �ƹ� ȿ���� ����. ���� ���� ��..";
		item.nHP = 0;
		item.nMP = 0;
		vecQuestItem.push_back(item);
	}
	{
		ST_QUEST_ITEM_DATA item;
		item.btId = 136;
		item.strName = "1�ܰ�1�������������";
		item.strDesc = "1�ܰ�1�������� ����� �ڵ鿡�� �־����� ����";
		item.nHP = 0;
		item.nMP = 0;
		vecQuestItem.push_back(item);
	}
}

void CQuestInfo::QueryQuestMonster(std::vector<ST_QUEST_MONSTER_DATA>& vecQuestMonster)
{
	{
		ST_QUEST_MONSTER_DATA monster;
		monster.dwMonsterId = 20001;
		monster.strName = "�����������";
		monster.btLevel = 99;
		monster.nHP = 9999;
		monster.btAttack = 30;
		monster.btDex = 7;
		monster.btVulnerability = JOB_TYPE_NOVICE;
		monster.nRewardMoney= 5000;
		monster.nRewardExp = 50000;
		monster.vecRewardItems.push_back(128);	// ������
		vecQuestMonster.push_back(monster);
	}
	{
		ST_QUEST_MONSTER_DATA monster;
		monster.dwMonsterId = 20002;
		monster.strName = "3�����߰���";
		monster.btLevel = 99;
		monster.nHP = 999;
		monster.btAttack = 50;
		monster.btDex = 7;
		monster.btVulnerability = JOB_TYPE_DEVELOPER;
		monster.nRewardMoney = 5000;
		monster.nRewardExp = 50000;
		monster.vecRewardItems.push_back(3);	// ��������
		vecQuestMonster.push_back(monster);
	}
	{
		ST_QUEST_MONSTER_DATA monster;
		monster.dwMonsterId = 20003;
		monster.strName = "3�������İ���";
		monster.btLevel = 99;
		monster.nHP = 999;
		monster.btAttack = 50;
		monster.btDex = 7;
		monster.btVulnerability = JOB_TYPE_INVESTIGATOR;
		monster.nRewardMoney = 5000;
		monster.nRewardExp = 50000;
		monster.vecRewardItems.push_back(6);	// �׸�ī��
		vecQuestMonster.push_back(monster);
	}
	{
		ST_QUEST_MONSTER_DATA monster;
		monster.dwMonsterId = 20004;
		monster.strName = "3�������ð���";
		monster.btLevel = 99;
		monster.nHP = 999;
		monster.btAttack = 50;
		monster.btDex = 7;
		monster.btVulnerability = JOB_TYPE_CONSULTANT;
		monster.nRewardMoney = 5000;
		monster.nRewardExp = 50000;
		monster.vecRewardItems.push_back(7);	// Ŀ��
		vecQuestMonster.push_back(monster);
	}
	{
		ST_QUEST_MONSTER_DATA monster;
		monster.dwMonsterId = 20005;
		monster.strName = "3���м�����";
		monster.btLevel = 99;
		monster.nHP = 999;
		monster.btAttack = 50;
		monster.btDex = 7;
		monster.btVulnerability = JOB_TYPE_ANALYST;
		monster.nRewardMoney = 5000;
		monster.nRewardExp = 50000;
		monster.vecRewardItems.push_back(8);	// �������帵ũ
		vecQuestMonster.push_back(monster);
	}
	{
		ST_QUEST_MONSTER_DATA monster;
		monster.dwMonsterId = 20006;
		monster.strName = "1�ܰ�1������";
		monster.btLevel = 17;
		monster.nHP = 300;
		monster.btAttack = 25;
		monster.btDex = 5;
		monster.btVulnerability = JOB_TYPE_NOVICE;
		monster.nRewardMoney = 5000;
		monster.nRewardExp = 2000;
		monster.vecRewardItems.push_back(2);
		monster.vecRewardItems.push_back(5);
		vecQuestMonster.push_back(monster);
	}
}

void CQuestInfo::QueryQuest(std::vector<ST_QUEST_DATA>& vecQuest)
{
	{
		ST_QUEST_DATA quest;
		quest.nNpcId = 1;
		quest.StartCondition = ST_FILTER(1, 0x0000, 0x0001);
		quest.ClearCondition = ST_FILTER(1, 0x0003);
		quest.vecMessages.push_back("�����ϳ�.");
		quest.vecMessages.push_back("���� ���������� �ö�Ա���.");
		quest.vecMessages.push_back("�׷� ���ݱ����� �Ƿ��� �ѹ� ���غ���?");
		quest.vecMessages.push_back("...");
		quest.vecMessages.push_back(".......");
		quest.vecMessages.push_back("������.......");
		quest.vecMessages.push_back("����������.......");
		quest.vecMessages.push_back("������������������.......");
		quest.vecMessages.push_back("(��.. �̰� �����Ҹ���..?)");
		quest.vecMessages.push_back("(�ھ�!!!)");
		quest.vecMessages.push_back("(�ƴ�... �̰�..!!)");
		quest.vecMessages.push_back("(������!! ��濡�� �������� �־�!!)");
		quest.vecMessages.push_back("������!!!");
		quest.vecMessages.push_back("�����ض�!! �����÷��̴�------!");
		quest.ClearBattle.btMinPlayerCount = 1;
		quest.ClearBattle.vecMonster.push_back(20001);
		quest.ClearBattle.vecMonster.push_back(20002);
		quest.ClearBattle.vecMonster.push_back(20003);
		quest.ClearBattle.vecMonster.push_back(20004);
		quest.ClearBattle.vecMonster.push_back(20005);
		vecQuest.push_back(quest);
	}
	{
		ST_QUEST_DATA quest;
		quest.nNpcId = 1;
		quest.StartCondition = ST_FILTER(1, 0x0003, 0xFFFF);
		quest.ClearCondition = ST_FILTER(1, 0xFFFF);
		quest.vecMessages.push_back("å�Ӱ� �ְ�");
		quest.vecMessages.push_back("�ӹ��� �������༭ ����");
		quest.vecMessages.push_back("��Ƽ ��Ȱ��");
		quest.vecMessages.push_back("�䳪���� ������� ���� �־�������");
		quest.vecMessages.push_back("�� ����� ���� BoB �ϴ� ���� �������� �ʾҰڳ�?");
		quest.vecMessages.push_back("������ ������ ��ٺ��� �������� �ݵ��");
		quest.vecMessages.push_back("��â�ϴ� ���� �����ɼ�");
		quest.vecMessages.push_back("���� ���ϰڳ�");
		quest.vecMessages.push_back("�ɾ�� ���� ���� ���ϰɼ�");
		quest.vecMessages.push_back("��𼭳� �ڶ����� BoB���̶�� ���� ���� ���Գ�");
		quest.vecRewardItems.push_back(129);
		vecQuest.push_back(quest);
	}
	{
		ST_QUEST_DATA quest;
		quest.nNpcId = 290;
		quest.StartCondition = ST_FILTER(0, 0x000F, 0x001F);
		quest.ClearCondition = ST_FILTER(290, 0x0001);
		quest.vecMessages.push_back("�ʰ� �׵����� ������ ������ �����ߴٸ�...");
		quest.vecMessages.push_back("���� ���� ����� �� �����ž�!");
		quest.ClearBattle.vecMonster.push_back(20006);
		vecQuest.push_back(quest);
	}
	{
		ST_QUEST_DATA quest;
		quest.nNpcId = 10004;		// ��� �繰 ���̵�
		quest.StartCondition = ST_FILTER(0, 0x000F, 0x000F);
		quest.ClearCondition = ST_FILTER(290, 0xFFFF);
		quest.vecMessages.push_back("������ �� ������� �ִ�...");
		vecQuest.push_back(quest);
	}
	{
		ST_QUEST_DATA quest;
		quest.nNpcId = 290;
		quest.StartCondition = ST_FILTER(290, 0x0001, 0xFFFF);
		quest.ClearCondition = ST_FILTER(290, 0xFFFF);
		quest.vecMessages.push_back("�� 1�ܰ豳�� ������ �������bb");
		quest.vecMessages.push_back("2�� ���� ���뱳���� Ʈ�������� ���?");
		quest.vecMessages.push_back("2�� ������ 3������ ��������Ʈ�� �����ϴ� �ž�.");
		quest.vecMessages.push_back("�����ִ� ������ �����ؼ� ���� �´� ������� �Բ�");
		quest.vecMessages.push_back("������ �Ͽ� ���� ����� ���� �� �ֱ� �����Ұ�!");
		quest.vecRewardItems.push_back(136);
		vecQuest.push_back(quest);
	}
}
