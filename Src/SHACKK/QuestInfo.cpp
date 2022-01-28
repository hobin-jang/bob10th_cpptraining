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


        npc.vecSmallImage.push_back("@@@@@@@@@@@!!*@@@@@@@@@@@");
        npc.vecSmallImage.push_back("@@@@@@@@@@*!!!!*@@@@@@@@@");
        npc.vecSmallImage.push_back("@@@@@@@@@~~~:***@@@@@@@@@");
        npc.vecSmallImage.push_back("@@@@@@   .  .;**, @@@@@@@");
        npc.vecSmallImage.push_back("@@@@@        :**-   @@@@@");
        npc.vecSmallImage.push_back("@@@@@        ;*!    @@@@@");
        npc.vecSmallImage.push_back("@@@@      !****:     @@@@");
        npc.vecSmallImage.push_back("@@@       .~~~~      @@@@");
        npc.vecSmallImage.push_back("@@@                   @@@");
        npc.vecSmallImage.push_back("@@@    .,       ..    @@@");
        npc.vecSmallImage.push_back("@@.   .!=.      =*,   .@@");
        npc.vecSmallImage.push_back("@@.   .!=.      =*,   .@@");
        npc.vecSmallImage.push_back("@@.    ,-   .   -,    .@@");
        npc.vecSmallImage.push_back("@@.                   .@@");
        npc.vecSmallImage.push_back("@@        .   .      ..@@");
        npc.vecSmallImage.push_back("@@@@      ;;;;;      @@@@");
        npc.vecSmallImage.push_back("@@@@       .:.      @@@@@");
        npc.vecSmallImage.push_back("@@@@@               @@@@@");
        npc.vecSmallImage.push_back("@@@@@               @@@@@");
        npc.vecSmallImage.push_back("@@@@@@@           @@@@@@@");
        npc.vecSmallImage.push_back("@@@@@@@@@       @@@@@@@@@");

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

        npc.strContents2 = "전직을 축하한담!!";
        npc.strContents3 = "긴 여정을 마친걸 축하한담!!";
        npc.strContents4 = "앞으로도 응원하겠담!!";

        vecNPC.push_back(npc);
    }
    
}


void CQuestInfo::QueryQuest(std::vector<ST_QUEST_DATA*>& vecQuest)
{
    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 132;
        stQuest.StartCondition = ST_FILTER(132, 0x0000, 0x0001);
        stQuest.vecMessages.push_back("너...노트북도 없이 빈손으로 온거냠...");
        stQuest.vecMessages.push_back("기본이 안되있구만 기본이!!");
        stQuest.vecMessages.push_back("뭐? 돈이 없다고? 그럴수있지..ㅎㅎ");
        stQuest.vecMessages.push_back("로비의 연구원님한테 가면 노트북을 줄꺼얌");
        stQuest.vecMessages.push_back("가서 받아오도록!!");
        stQuest.ClearCondition = ST_FILTER(132, 0x0003);
    }

    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 0;
        stQuest.StartCondition = ST_FILTER(132, 0x0001, 0x0003);
        stQuest.vecMessages.push_back("교육생이구나! 안녕?");
        stQuest.vecMessages.push_back("아직 노트북 수령을 못했구나??");
        stQuest.vecMessages.push_back("[BoB트북]을 획득했습니다.");
        stQuest.vecMessages.push_back("여기!! 열공해~~");
        stQuest.vecMessages.push_back("(뭐야...진짜주네? ㄷㄷ)");
        stQuest.vecMessages.push_back("다시 BABY 임창현한테 가보자");
        //stQuest.vecMessages.push_back("돈줄테니까 왼쪽에 컴퓨터 상점에서 구매하면 돼~");
        //stQuest.vecMessages.push_back("[1,500,000원]을 획득했습니다.");
        //이후 추가되는 NPC 정보에 따라서 BoB트북 획득 과정을 어렵게 할 예정
        stQuest.ClearCondition = ST_FILTER(132, 0x0007);
    }

    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 132;
        stQuest.StartCondition = ST_FILTER(132, 0x0003, 0x0007);
        stQuest.vecMessages.push_back("노트북을 구해왔구남!!");
        stQuest.vecMessages.push_back("좋아, 이제부터 해커가 되기위한 여정을 시작해보겠담!");
        stQuest.vecMessages.push_back("우선, 보안인이라면 C++은 기본소양이라고 볼수있담");
        stQuest.vecMessages.push_back("뭐? 파이썬이 짱이라고?");
        stQuest.vecMessages.push_back("그건 나도 인정이지만... 하라는대로해! 수료하기싫어?");
        stQuest.vecMessages.push_back("하라는대로해! 수료하기싫어?");
        stQuest.vecMessages.push_back("케헴... C++은 전상현 멘토님이 대한민국 최강자니까..");
        stQuest.vecMessages.push_back("전상현 멘토님한테 가봐!");
        stQuest.ClearCondition = ST_FILTER(132, 0x000F);
    }

    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 4;
        stQuest.StartCondition = ST_FILTER(132, 0x0007, 0x000F);
        stQuest.vecMessages.push_back("안녕하세요! 11기여러분 환영합니다.");
        stQuest.vecMessages.push_back("C++ 고수가 되고싶다구요?");
        stQuest.vecMessages.push_back("우선... 물리학과 생물학을 먼저 공부해야합니다...");
        stQuest.vecMessages.push_back("(뭔 소리야... 이상한아저씨같은데?;;)");
        stQuest.vecMessages.push_back("이상한 소리로 들리시겠지만...");
        stQuest.vecMessages.push_back("앞으로 공부하다 보면 수많은 샷건을 치게 될겁니다..");
        stQuest.vecMessages.push_back("반드시.. 컴퓨터가 고장나지 않을 만큼의 힘(F = ma)을 계산해서 샷건을 쳐야하며..");
        stQuest.vecMessages.push_back("샷건을 치다 피가날 경우 염증으로부터의…...");
        stQuest.vecMessages.push_back("(못들어주겠군.. 도망가자)");
        stQuest.ClearCondition = ST_FILTER(132, 0x001F);
    }

    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 132;
        stQuest.StartCondition = ST_FILTER(132, 0x000F, 0x001F);
        stQuest.vecMessages.push_back("ㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋ");
        stQuest.vecMessages.push_back("당황했니??");
        stQuest.vecMessages.push_back("앞으로 BoB생활을 하다보면 말이얌..!");
        stQuest.vecMessages.push_back("더욱 황당한 일이 많이 생길꺼얌!");
        stQuest.vecMessages.push_back("예를들면... 분명오늘 과제가 1개였는데..");
        stQuest.vecMessages.push_back("잘때쯤엔 과제가 5개가 되있다던지..ㅎㅎ");
        stQuest.vecMessages.push_back("과제를 계속 하는데도 오히려 늘어나기만 했지..");
        stQuest.vecMessages.push_back("너! 아기수준으로 합격해서 성장해온 내 이야기를 듣고싶은거얌?");
        stQuest.vecMessages.push_back("탑을 오르다보면 계속해서 나를 만날 수 있을꺼얌!");
        stQuest.vecMessages.push_back("내 이야기를 담아둘테니 많은 도움이 되길 바랄껨!!");
        stQuest.ClearCondition = ST_FILTER(132, 0x003F);
    }
}