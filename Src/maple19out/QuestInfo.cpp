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
    ST_QUEST_NPC_DATA npc;
    npc.x = 10;
    npc.y = 10;
    npc.z = 24;
    npc.nNpcID = 134;
    npc.strTrack = "������м�Ʈ��";
    npc.strName = "���μ�";
    npc.nAge = 26;
    npc.strMBTI = "ISFJ�̰� A���Դϴ�";
    npc.cPatch = 'M';
    npc.strMessage = "���� ������ BoB?";

    npc.vecBigImage.resize(40);
    npc.vecBigImage[0] = "                     .,,...,.                     ";
    npc.vecBigImage[1] = "                 ,;;!!*!!!!!!:.                   ";
    npc.vecBigImage[2] = "               ,;!****====*=***-.                 ";
    npc.vecBigImage[3] = "              -;****===========*;,                ";
    npc.vecBigImage[4] = "             .!!**===============*-               ";
    npc.vecBigImage[5] = "             !!!**================*-              ";
    npc.vecBigImage[6] = "            -!!**==================*.             ";
    npc.vecBigImage[7] = "           .;***=*==================,             ";
    npc.vecBigImage[8] = "           -!****===================!             ";
    npc.vecBigImage[9] = "           :****=*==================*             ";
    npc.vecBigImage[10] = "           !******==================*-            ";
    npc.vecBigImage[11] = "           *******===================:            ";
    npc.vecBigImage[12] = "          ,****=***==================:            ";
    npc.vecBigImage[13] = "          :****=****=================~            ";
    npc.vecBigImage[14] = "          ;!***==****========*=======-            ";
    npc.vecBigImage[15] = "          ,***===*!**=====****=======.            ";
    npc.vecBigImage[16] = "           ***==*:;;;!;-,~;:;!======*             ";
    npc.vecBigImage[17] = "           ;*;!;-~-~-.   ..,~:;;!*==:             ";
    npc.vecBigImage[18] = "           ,:-..~. .,..  .,~,,,;~:!*.             ";
    npc.vecBigImage[19] = "           ..~,:...-,,, .,-,----~-!;.             ";
    npc.vecBigImage[20] = "            .- ~.,.:~.-..~,-;~~--~!~              ";
    npc.vecBigImage[21] = "             . ;  ..,.- .~,,,,,,,,:,              ";
    npc.vecBigImage[22] = "                .  .. .  ~......-,~.              ";
    npc.vecBigImage[23] = "                ,,       ,,. ..-,,,.              ";
    npc.vecBigImage[24] = "                         .,,. ...,,.              ";
    npc.vecBigImage[25] = "                         ...   .,,.               ";
    npc.vecBigImage[26] = "                         ...   .,,.               ";
    npc.vecBigImage[27] = "                       ..,..  ..,.                ";
    npc.vecBigImage[28] = "                         ...  .,,.                ";
    npc.vecBigImage[29] = "                         ...  .,,.                ";
    npc.vecBigImage[30] = "                      ...,,....,.                 ";
    npc.vecBigImage[31] = "                    ....,,-,..,,.                 ";
    npc.vecBigImage[32] = "                         .,...,.                  ";
    npc.vecBigImage[33] = "                         .....,-,                 ";
    npc.vecBigImage[34] = "               --         ...,,-~.                ";
    npc.vecBigImage[35] = "               ~-        ...,,,-:-                ";
    npc.vecBigImage[36] = "                -       ..,,,,,-:-.        ";
    npc.vecBigImage[37] = "                .     ..,,,,,,,-:-..              ";
    npc.vecBigImage[38] = "                         .,,.,,-:-...             ";
    npc.vecBigImage[39] = "                        .....,,-~,.......         ";


    npc.vecSmallImage.resize(25);
    npc.vecSmallImage[0] = "                     .,,...,.                     ";
    npc.vecSmallImage[1] = "                 ,;;!!*!!!!!!:.                   ";
    npc.vecSmallImage[2] = "               ,;!****====*=***-.                 ";
    npc.vecSmallImage[3] = "              -;****===========*;,                ";
    npc.vecSmallImage[4] = "             .!!**===============*-               ";
    npc.vecSmallImage[5] = "             !!!**================*-              ";
    npc.vecSmallImage[6] = "            -!!**==================*.             ";
    npc.vecSmallImage[7] = "           .;***=*==================,             ";
    npc.vecSmallImage[8] = "           -!****===================!             ";
    npc.vecSmallImage[9] = "           :****=*==================*             ";
    npc.vecSmallImage[10] = "           !******==================*-            ";
    npc.vecSmallImage[11] = "           *******===================:            ";
    npc.vecSmallImage[12] = "          ,****=***==================:            ";
    npc.vecSmallImage[13] = "          :****=****=================~            ";
    npc.vecSmallImage[14] = "          ;!***==****========*=======-            ";
    npc.vecSmallImage[15] = "          ,***===*!**=====****=======.            ";
    npc.vecSmallImage[16] = "           ***==*:;;;!;-,~;:;!======*             ";
    npc.vecSmallImage[17] = "           ;*;!;-~-~-.   ..,~:;;!*==:             ";
    npc.vecSmallImage[18] = "           ,:-..~. .,..  .,~,,,;~:!*.             ";
    npc.vecSmallImage[19] = "           ..~,:...-,,, .,-,----~-!;.             ";
    npc.vecSmallImage[20] = "            .- ~.,.:~.-..~,-;~~--~!~              ";
    npc.vecSmallImage[21] = "             . ;  ..,.- .~,,,,,,,,:,              ";
    npc.vecSmallImage[22] = "                .  .. .  ~......-,~.              ";
    npc.vecSmallImage[23] = "                ,,       ,,. ..-,,,.              ";
    npc.vecSmallImage[24] = "                         .,,. ...,,.              ";

    vecNPC.push_back(npc);
}

void CQuestInfo::QueryQuest(std::vector<ST_QUEST_DATA>& vecQuest)
{
    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 134;
        stQuest.StartCondition = ST_FILTER(134, 0x0000, 0x0001);
        stQuest.vecMessages.push_back("�и� �°� ®�µ� �� �ȵǴ� �ɱ�?");
        stQuest.vecMessages.push_back("���� �� ����������...");
        stQuest.vecMessages.push_back("���� ����ؼ� 1���� �ִ� ����鿡�� ���� �ɾ��ٷ�?");
        stQuest.vecMessages.push_back("[���μ� ��Ƽ�� ���� 1���� �ִ� C++ ������� �����]");
        stQuest.ClearCondition = ST_FILTER(134, 0x0003);
        vecQuest.push_back(stQuest);
    }

    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 128;
        stQuest.StartCondition = ST_FILTER(134, 0x0001, 0x0003);
        stQuest.vecMessages.push_back("C++ ����� ������ ����...");
        stQuest.vecMessages.push_back("��...? ���� ������?");
        stQuest.vecMessages.push_back("�� �̰� �̷��� ¥�� �ȵ���");
        stQuest.vecMessages.push_back("[Ÿ��Ÿ��]");
        stQuest.vecMessages.push_back("���� ���� ���� �������? ���� ������ �Ǿ����� ���ڴ�");
        stQuest.ClearCondition = ST_FILTER(134, 0x0007);
        vecQuest.push_back(stQuest);
    }

    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 134;
        stQuest.StartCondition = ST_FILTER(134, 0x0003, 0xFFFF);
        stQuest.vecMessages.push_back("���� ������ �����...");
        stQuest.vecMessages.push_back("���� ����");
        stQuest.ClearCondition = ST_FILTER(134, 0xFFFF);
        vecQuest.push_back(stQuest);
    }
}

void CQuestInfo::QueryQuestObject(std::vector<ST_QUEST_OBJECT>& vecQuestObject)
{
}
