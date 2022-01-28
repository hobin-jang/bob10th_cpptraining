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
    ST_NPC_INFO npc;
    npc.id = 134;
    strcpy_s(npc.szName, 21, "강민석 멘티");
    npc.x = 10;
    npc.y = 10;
    npc.w = 0.5;
    npc.h = 0.5;
    npc.patch = 'm';
    strcpy_s(npc.szGreetMessage, 61, "오늘도 삽질 화이팅!");



    npc.vecBuffer.resize(60);
    npc.vecBuffer[0] = "                     .,,...,.                     ";
    npc.vecBuffer[1] = "                 ,;;!!*!!!!!!:.                   ";
    npc.vecBuffer[2] = "               ,;!****====*=***-.                 ";
    npc.vecBuffer[3] = "              -;****===========*;,                ";
    npc.vecBuffer[4] = "             .!!**===============*-               ";
    npc.vecBuffer[5] = "             !!!**================*-              ";
    npc.vecBuffer[6] = "            -!!**==================*.             ";
    npc.vecBuffer[7] = "           .;***=*==================,             ";
    npc.vecBuffer[8] = "           -!****===================!             ";
    npc.vecBuffer[9] = "           :****=*==================*             ";
    npc.vecBuffer[10] = "           !******==================*-            ";
    npc.vecBuffer[11] = "           *******===================:            ";
    npc.vecBuffer[12] = "          ,****=***==================:            ";
    npc.vecBuffer[13] = "          :****=****=================~            ";
    npc.vecBuffer[14] = "          ;!***==****========*=======-            ";
    npc.vecBuffer[15] = "          ,***===*!**=====****=======.            ";
    npc.vecBuffer[16] = "           ***==*:;;;!;-,~;:;!======*             ";
    npc.vecBuffer[17] = "           ;*;!;-~-~-.   ..,~:;;!*==:             ";
    npc.vecBuffer[18] = "           ,:-..~. .,..  .,~,,,;~:!*.             ";
    npc.vecBuffer[19] = "           ..~,:...-,,, .,-,----~-!;.             ";
    npc.vecBuffer[20] = "            .- ~.,.:~.-..~,-;~~--~!~              ";
    npc.vecBuffer[21] = "             . ;  ..,.- .~,,,,,,,,:,              ";
    npc.vecBuffer[22] = "                .  .. .  ~......-,~.              ";
    npc.vecBuffer[23] = "                ,,       ,,. ..-,,,.              ";
    npc.vecBuffer[24] = "                         .,,. ...,,.              ";
    npc.vecBuffer[25] = "                         ...   .,,.               ";
    npc.vecBuffer[26] = "                         ...   .,,.               ";
    npc.vecBuffer[27] = "                       ..,..  ..,.                ";
    npc.vecBuffer[28] = "                         ...  .,,.                ";
    npc.vecBuffer[29] = "                         ...  .,,.                ";
    npc.vecBuffer[30] = "                      ...,,....,.                 ";
    npc.vecBuffer[31] = "                    ....,,-,..,,.                 ";
    npc.vecBuffer[32] = "                         .,...,.                  ";
    npc.vecBuffer[33] = "                         .....,-,                 ";
    npc.vecBuffer[34] = "               --         ...,,-~.                ";
    npc.vecBuffer[35] = "               ~-        ...,,,-:-                ";
    npc.vecBuffer[36] = "                -       ..,,,,,-:-.        ";
    npc.vecBuffer[37] = "                .     ..,,,,,,,-:-..              ";
    npc.vecBuffer[38] = "                         .,,.,,-:-...             ";
    npc.vecBuffer[39] = "                        .....,,-~,.......         ";
    npc.vecBuffer[40] = "                         ....,,-~..........       ";
    vecNPC.push_back(npc);
}

void CQuestInfo::QueryNpcEx(std::vector<ST_QUEST_NPC_DATA>& vecNPC)
{
    ST_QUEST_NPC_DATA npc;
    npc.x = 10;
    npc.y = 10;
    npc.z = 1;
    npc.nNpcID = 134;
    npc.strTrack = "취약점분석트랙";
    npc.strName = "강민석";
    npc.nAge = 26;
    npc.strMBTI = "ISFJ이고 A형입니다";
    npc.cPatch = 'M';
    npc.strMessage = "언제 끝날까 BoB?";

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

void CQuestInfo::QueryQuest(std::vector<ST_QUEST_DATA*>& vecQuest)
{

}

void CQuestInfo::QueryQuestObject(std::vector<ST_QUEST_OBJECT>& vecQuestObject)
{
    ST_QUEST_OBJECT strObject;


}
