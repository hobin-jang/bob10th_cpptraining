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
    npc.nAge = 5;
    npc.strMBTI = "저는 MBTI가 BABY\n"
        "이랍니다! 응애~~";
    npc.strMessage = "애기는 아무것도 몰라염! \n"
        "C++이 머에염!! 먹는건가염??\n"
        "먹는거 얘기하니까 배고프네...\n"
        "엄마 밥줘!! 응애~~\n";

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

    npc.strContents1 = "응애...\n"
        "요기가 어디얌...\n"
        "난분명...엄마품에서...\n"
        "분유를 먹고있었는데...?\n"
        "꿈인가...\n"
        "BoB 합격이라니...\n"
        "화이트해커 양성소라.. 멋진걸??\n"
        "해커....어떻게 하면 될수있는거얌..?\n"
        "오오... 27층까지 가면 해커가 될수있다고?!\n"
        "오늘부터 분유끊는다...\n";

    vecNPC.push_back(npc);
}


void CQuestInfo::QueryQuest(std::vector<ST_QUEST_DATA*>& vecQuest)
{
}
