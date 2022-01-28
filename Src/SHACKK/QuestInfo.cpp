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
    npc.nNpcID = 132;
    npc.strTrack = "보안제품개발";
    npc.strName = "BABY 임창현";
    npc.x = 22;
    npc.y = 15;
    npc.z = 1;
    npc.cPatch = 'B';
    npc.strMBTI = "저는 MBTI가 BABY에요 응애~~";
    npc.strMessage = "애기는 아무것도 몰라염! \n"
        "C++이 머에염!! 먹는건가염??\n"
        "먹는거 얘기하니까 배고프네... 엄마 밥줘!! 응애~~\n";

    npc.vecBigImage.push_back("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");
    npc.vecBigImage.push_back("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");
    npc.vecBigImage.push_back("@@@@@@@@@@@@@@@@@@@@@@@@@@@*!!!!!@@@@@@@@@@@@@@@@@@@@@@@@@@@");
    npc.vecBigImage.push_back("@@@@@@@@@@@@@@@@@@@@@@@@@!!!!!!!!!!@@@@@@@@@@@@@@@@@@@@@@@@@");
    npc.vecBigImage.push_back("@@@@@@@@@@@@@@@@@@@@@@@@!!!******!!!!@@@@@@@@@@@@@@@@@@@@@@@");
    npc.vecBigImage.push_back("@@@@@@@@@@@@@@@@@@@@@@@!************!!@@@@@@@@@@@@@@@@@@@@@@");
    npc.vecBigImage.push_back("@@@@@@@@@@@@@@@@@@@@@@**!:~,,:********@@@@@@@@@@@@@@@@@@@@@@");
    npc.vecBigImage.push_back("@@@@@@@@@@@@@@@@@@@@           ~******~ @@@@@@@@@@@@@@@@@@@@");
    npc.vecBigImage.push_back("@@@@@@@@@@@@@@@@@@              ;******   @@@@@@@@@@@@@@@@@@");
    npc.vecBigImage.push_back("@@@@@@@@@@@@@@@@                 ******     @@@@@@@@@@@@@@@@");
    npc.vecBigImage.push_back("@@@@@@@@@@@@@@@                  ******      @@@@@@@@@@@@@@@");
    npc.vecBigImage.push_back("@@@@@@@@@@@@@@                  .******       @@@@@@@@@@@@@@");
    npc.vecBigImage.push_back("@@@@@@@@@@@@@                   !******        @@@@@@@@@@@@@");
    npc.vecBigImage.push_back("@@@@@@@@@@@@           *;      ~******~         @@@@@@@@@@@@");
    npc.vecBigImage.push_back("@@@@@@@@@@@            ~***:~;********           @@@@@@@@@@@");
    npc.vecBigImage.push_back("@@@@@@@@@@@             *************-           @@@@@@@@@@@");
    npc.vecBigImage.push_back("@@@@@@@@@@              .***********~             @@@@@@@@@@");
    npc.vecBigImage.push_back("@@@@@@@@@@               .*********               @@@@@@@@@@");
    npc.vecBigImage.push_back("@@@@@@@@@                  -!**!~                  @@@@@@@@@");
    npc.vecBigImage.push_back("@@@@@@@@@                                          @@@@@@@@@");
    npc.vecBigImage.push_back("@@@@@@@@                                           @@@@@@@@@");
    npc.vecBigImage.push_back("@@@@@@@                                             @@@@@@@@");
    npc.vecBigImage.push_back("@@@@@@@                                             @@@@@@@@");
    npc.vecBigImage.push_back("@@@@@@@           ===;                ~===          @@@@@@@@");
    npc.vecBigImage.push_back("@@@@@@@.         =====~              ,=====         .@@@@@@@");
    npc.vecBigImage.push_back("@@@@@@..         ======              *=====.        ..@@@@@@");
    npc.vecBigImage.push_back("@@@@@@..         ======              *=====.        ..@@@@@@");
    npc.vecBigImage.push_back("@@@@@...         =====:              -=====         ...@@@@@");
    npc.vecBigImage.push_back("@@@@@...          ===*                ;===.         ...@@@@@");
    npc.vecBigImage.push_back("@@@@@...                   ......                  ....@@@@@");
    npc.vecBigImage.push_back("@@@@@ ..                    ....                   ... @@@@@");
    npc.vecBigImage.push_back("@@@@@@...                                          ...@@@@@@");
    npc.vecBigImage.push_back("@@@@@@ ..                                          .. @@@@@@");
    npc.vecBigImage.push_back("@@@@@@@..                                          ..@@@@@@@");
    npc.vecBigImage.push_back("@@@@@@@@.                                         ..@@@@@@@@");
    npc.vecBigImage.push_back("@@@@@@@@@               ;;.      .;;              @@@@@@@@@@");
    npc.vecBigImage.push_back("@@@@@@@@@@              ;;;;;;;;;;;;              @@@@@@@@@@");
    npc.vecBigImage.push_back("@@@@@@@@@@               ;;;;;;;;;;               @@@@@@@@@@");
    npc.vecBigImage.push_back("@@@@@@@@@@@               ,;;;;;;,               @@@@@@@@@@@");
    npc.vecBigImage.push_back("@@@@@@@@@@@                  ..                  @@@@@@@@@@@");
    npc.vecBigImage.push_back("@@@@@@@@@@@@                                    @@@@@@@@@@@@");
    npc.vecBigImage.push_back("@@@@@@@@@@@@@                                  @@@@@@@@@@@@@");
    npc.vecBigImage.push_back("@@@@@@@@@@@@@@                                @@@@@@@@@@@@@@");
    npc.vecBigImage.push_back("@@@@@@@@@@@@@@@                              @@@@@@@@@@@@@@@");
    npc.vecBigImage.push_back("@@@@@@@@@@@@@@@@                            @@@@@@@@@@@@@@@@");
    npc.vecBigImage.push_back("@@@@@@@@@@@@@@@@@@                        @@@@@@@@@@@@@@@@@@");
    npc.vecBigImage.push_back("@@@@@@@@@@@@@@@@@@@@                    @@@@@@@@@@@@@@@@@@@@");
    npc.vecBigImage.push_back("@@@@@@@@@@@@@@@@@@@@@@@@            @@@@@@@@@@@@@@@@@@@@@@@@");
    npc.vecBigImage.push_back("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");
    npc.vecBigImage.push_back("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");

    vecNPC.push_back(npc);
}


void CQuestInfo::QueryQuest(std::vector<ST_QUEST_DATA*>& vecQuest)
{
}
