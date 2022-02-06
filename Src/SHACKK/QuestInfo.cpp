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

    {
    ST_QUEST_NPC_DATA npc;
    npc.x = 23;
    npc.y = 16;
    npc.z = 1;
    npc.nNpcID = 158;
    npc.strTrack = "보안제품개발트랙";
    npc.strName = "아기 창현";
    npc.nAge = 5;
    npc.strMBTI = "BABY";
    npc.cPatch = 'L';
    npc.strMessage = "응애~응애~";


    npc.strContents1 = "";

    vecNPC.push_back(npc);
    }

    {
        ST_QUEST_NPC_DATA npc;
        npc.x = 7;
        npc.y = 20;
        npc.z = 5;
        npc.nNpcID = 156;
        npc.strTrack = "보안제품개발트랙";
        npc.strName = "어린이 창현";
        npc.nAge = 5;
        npc.strMBTI = "LOVE 사랑해요 여러분";
        npc.cPatch = 'L';
        npc.strMessage = "멀봐?(사춘기인듯하다)";
        

        npc.strContents1 = "";

        vecNPC.push_back(npc);
    }

    {
        ST_QUEST_NPC_DATA npc;
        npc.x = 5;
        npc.y = 9;
        npc.z = 16;
        npc.nNpcID = 157;
        npc.strTrack = "보안제품개발트랙";
        npc.strName = "청소년 창현";
        npc.nAge = 18;
        npc.strMBTI = "MBTI : H.E.L.L.";
        npc.cPatch = 'L';
        npc.strMessage = "수소폭탄보단 과제폭탄이 더 무섭다...";

        vecNPC.push_back(npc);
    }
    
}

void CQuestInfo::QueryQuestObject(std::vector<ST_QUEST_OBJECT>& vecQuestObject)
{
    ST_QUEST_OBJECT stObject;
    stObject.nQuestObjectId = 273;
    stObject.strName = "잊혀진 기억1";
    stObject.cPatch = 'm';	// 화면에 보이지도 않고 만져지지도 않게 하려면 0을 넣으면 됨
    stObject.x = 10;
    stObject.y = 23;
    stObject.z = 5;
    stObject.reserved = 0;
    vecQuestObject.push_back(stObject);
}

void CQuestInfo::QueryQuest(std::vector<ST_QUEST_DATA>& vecQuest)
{
    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 158;
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
        stQuest.nNpcId = 158;
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
        stQuest.nNpcId = 158;
        stQuest.StartCondition = ST_FILTER(132, 0x000F, 0x001F);
        stQuest.vecMessages.push_back("ㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋ");
        stQuest.vecMessages.push_back("당황했니??");
        stQuest.vecMessages.push_back("앞으로 BoB생활을 하다보면 말이얌..!");
        stQuest.vecMessages.push_back("더욱 황당한 일이 많이 생길꺼얌!");
        stQuest.vecMessages.push_back("예를들면... 분명오늘 과제가 1개였는데..");
        stQuest.vecMessages.push_back("잘때쯤엔 과제가 5개가 되있다던지..ㅎㅎ");
        stQuest.vecMessages.push_back("과제를 계속 하는데도 오히려 늘어나기만 했지..");
        stQuest.vecMessages.push_back("너! 아기 수준으로 BoB를 시작한 내 이야기를 듣고싶은거얌?");
        stQuest.vecMessages.push_back("탑을 오르다보면 계속해서 나를 만날 수 있을꺼얌!");
        stQuest.vecMessages.push_back("내 이야기를 담아둘테니 많은 도움이 되길 바랄껨!!");
        stQuest.ClearCondition = ST_FILTER(132, 0x003F);
    }

    // 5F : 어린 창현
    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 156;
        stQuest.StartCondition = ST_FILTER(132, 0x001F, 0x003F);
        stQuest.vecMessages.push_back("안녕!");
        stQuest.vecMessages.push_back("벌써 전직을 했구나..!");
        stQuest.vecMessages.push_back("잠시 쉬어갈겸.. 내 이야기를 들어보는게 어떠냠..?");
		stQuest.vecMessages.push_back("앞으로 공통수업, 트랙교육때 꿀팁을 알려주겠담..!");
        stQuest.vecMessages.push_back("잠깐만.... 기억이나질 않는담..");
        stQuest.vecMessages.push_back("아무래도 옆방에서 놀다가 [잊혀진 기억]을 흘린거같담ㅠㅠ");
        stQuest.vecMessages.push_back("난 공부하느라 바쁘니까 좀 찾아주람!!");
        stQuest.vecMessages.push_back("오른쪽 방을 뒤져보면 있을거담!!");
        stQuest.ClearCondition = ST_FILTER(132, 0x007F);
        
    }

    //기억의 조각 찾아오기
    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 273;
        stQuest.StartCondition = ST_FILTER(132, 0x003F, 0x007F);
        stQuest.vecMessages.push_back("(무엇인가 반짝인다..)");
        stQuest.vecMessages.push_back("(혹시 이건가...?");
        stQuest.vecMessages.push_back("[잊혀진 기억1]을 획득했습니다.");
        stQuest.ClearCondition = ST_FILTER(132, 0x00FF);
    }

    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 156;
        stQuest.StartCondition = ST_FILTER(132, 0x007F, 0x00FF);
        stQuest.vecMessages.push_back("역시! 거기있었담!! 어서 줘!!");
        stQuest.vecMessages.push_back("[잊혀진 기억1]을 잃었습니다.");
        stQuest.vecMessages.push_back("우걱우걱..");
        stQuest.vecMessages.push_back("(뭐야...저거 먹는거였어?! 바닥에 떨어져있었는데.. 괜찮으려나");
        stQuest.vecMessages.push_back("꺼-억!");
        stQuest.vecMessages.push_back("이제 기억났담!!");
        stQuest.vecMessages.push_back("난 그동안 벼락치기를 하는 습관이 있어서 고생을 많이했담....ㅠㅠ");
        stQuest.vecMessages.push_back("초반에는 생각보다 과제가 많이 없어서 \"내일해야지~ 수업듣느라 고생했어 나자신ㅠㅠ\" 이러고 넘겼담..");
        stQuest.vecMessages.push_back("그러다 갑자기 과제가 파도처럼 밀려왔담....ㅠㅠ");
        stQuest.vecMessages.push_back("당장 어제 과제도 해야하는데, 오늘 할 과제가 또생기다니.. 정말 절망이었담...ㅠㅠ");
        stQuest.vecMessages.push_back("나처럼 몰아치기를 좋아하는 사람은 진짜 힘들꺼담!");
        stQuest.vecMessages.push_back("그날 생긴 과제는 무조껀 당일 해결하는게 베스트인거 같담!!");
        stQuest.vecMessages.push_back("그럼 잠은 언제자냐구?? 잠을 줄이면 된담!!");
        stQuest.vecMessages.push_back("비밀인데... 사람은 사실 하루에 4시간만 자도 충분하담...ㅎㅎ");
        stQuest.vecMessages.push_back("그리고 또...");
        stQuest.vecMessages.push_back("앗...기억이....");
        stQuest.vecMessages.push_back("");
        stQuest.ClearCondition = ST_FILTER(132, 0x01FF);
    }

    //16F : 청소년 창현
    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 157;
        stQuest.StartCondition = ST_FILTER(132, 0x00FF, 0x01FF);
        stQuest.vecMessages.push_back("이런이런~");
    }
}