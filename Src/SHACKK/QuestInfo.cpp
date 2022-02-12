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
        npc.x = 12;
        npc.y = 9;
        npc.z = 7;
        npc.cPatch = 'b';
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

        npc.strContents2 = "전직을 축하한담!!\n"
            "5층에 어린이 창현이가 할말이 있담!!\n"
            "빨리 튀어오도록!!\n";
        npc.strContents3 = "긴 여정을 마친걸 축하한담!!\n"
            "16층에 청소년 창현이가 할말이 있땀!!\n"
            "빨리 튀어오도록!!\n";
        npc.strContents4 = "앞으로도 응원하겠담!!";

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
    
}

void CQuestInfo::QueryQuestObject(std::vector<ST_QUEST_OBJECT>& vecQuestObject)
{
    {
        ST_QUEST_OBJECT stObject;
        stObject.nQuestObjectId = 157;
        stObject.strName = "청소년 창현";
        stObject.cPatch = 'L';
        stObject.x = 5;
        stObject.y = 9;
        stObject.z = 16;
        stObject.reserved = 0;
        vecQuestObject.push_back(stObject);
    }

    {
        ST_QUEST_OBJECT stObject;
        stObject.nQuestObjectId = 158;
        stObject.strName = "아기 창현";
        stObject.cPatch = 'L';
        stObject.x = 23;
        stObject.y = 16;
        stObject.z = 1;
        stObject.reserved = 0;
        vecQuestObject.push_back(stObject);
    }

    {
        ST_QUEST_OBJECT stObject;
        stObject.nQuestObjectId = 159;
        stObject.strName = "수료생 창현";
        stObject.cPatch = 'L';
        stObject.x = 19;
        stObject.y = 21;
        stObject.z = 27;
        stObject.reserved = 0;
        vecQuestObject.push_back(stObject);
    }

    {
        ST_QUEST_OBJECT stObject;
        stObject.nQuestObjectId = 273;
        stObject.strName = "잊혀진 기억 1";
        stObject.cPatch = '.';
        stObject.x = 10;
        stObject.y = 23;
        stObject.z = 5;
        stObject.reserved = 0;
        vecQuestObject.push_back(stObject);
    }

    {
        ST_QUEST_OBJECT stObject;
        stObject.nQuestObjectId = 279;
        stObject.strName = "잊혀진 기억 2";
        stObject.cPatch = '.';
        stObject.x = 21;
        stObject.y = 17;
        stObject.z = 15;
        stObject.reserved = 0;
        vecQuestObject.push_back(stObject);
    }

    {
        ST_QUEST_OBJECT stObject;
        stObject.nQuestObjectId = 280;
        stObject.strName = "낡은 쪽지";
        stObject.cPatch = '.';
        stObject.x = 6;
        stObject.y = 8;
        stObject.z = 27;
        stObject.reserved = 0;
        vecQuestObject.push_back(stObject);
    }
}

void CQuestInfo::QueryQuest(std::vector<ST_QUEST_DATA>& vecQuest)
{
    //{
    //    ST_QUEST_DATA stQuest;
    //    stQuest.nNpcId = 158;
    //    stQuest.StartCondition = ST_FILTER(132, 0x0000, 0x001);
    //    stQuest.vecMessages.push_back("너...노트북도 없이 빈손으로 온거냠...");
    //    stQuest.vecMessages.push_back("기본이 안되있구만 기본이!!");
    //    stQuest.vecMessages.push_back("뭐? 돈이 없다고? 그럴수있지..ㅎㅎ");
    //    stQuest.vecMessages.push_back("로비의 연구원님한테 가면 노트북을 줄꺼얌");
    //    stQuest.vecMessages.push_back("가서 받아오도록!!");
    //    stQuest.ClearCondition = ST_FILTER(132, 0x0003);
    //    vecQuest.push_back(stQuest);
    //}

    //{
    //    ST_QUEST_DATA stQuest;
    //    stQuest.nNpcId = 0;
    //    stQuest.StartCondition = ST_FILTER(132, 0x0001, 0x0003);
    //    stQuest.vecMessages.push_back("교육생이구나! 안녕?");
    //    stQuest.vecMessages.push_back("아직 노트북 수령을 못했구나??");
    //    stQuest.vecMessages.push_back("[BoB트북]을 획득했습니다.");
    //    stQuest.vecMessages.push_back("여기!! 열공해~~");
    //    stQuest.vecMessages.push_back("(뭐야...진짜주네? ㄷㄷ)");
    //    stQuest.vecMessages.push_back("다시 BABY 임창현한테 가보자");
    //    //stQuest.vecMessages.push_back("돈줄테니까 왼쪽에 컴퓨터 상점에서 구매하면 돼~");
    //    //stQuest.vecMessages.push_back("[1,500,000원]을 획득했습니다.");
    //    //이후 추가되는 NPC 정보에 따라서 BoB트북 획득 과정을 어렵게 할 예정
    //    stQuest.ClearCondition = ST_FILTER(132, 0x0007);
    //    vecQuest.push_back(stQuest);
    //}

    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 158;
        stQuest.StartCondition = ST_FILTER(132, 0x0000, 0x0007);
        stQuest.vecMessages.push_back("노트북을 구해왔구남!!");
        stQuest.vecMessages.push_back("좋아, 이제부터 해커가 되기위한 여정을 시작해보겠담!");
        stQuest.vecMessages.push_back("우선, 보안인이라면 C++은 기본소양이라고 볼수있담");
        stQuest.vecMessages.push_back("뭐? 파이썬이 짱이라고?");
        stQuest.vecMessages.push_back("그건 나도 킹정이지만...");
        stQuest.vecMessages.push_back("하라는대로해! 수료하기싫어?");
        stQuest.vecMessages.push_back("케헴... C++은 전상현 멘토님이 대한민국 최강자니까..");
        stQuest.vecMessages.push_back("전상현 멘토님한테 가봐!");
        stQuest.ClearCondition = ST_FILTER(132, 0x000F);
        vecQuest.push_back(stQuest);
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
        stQuest.vecMessages.push_back("R.U.N");
        stQuest.ClearCondition = ST_FILTER(132, 0x001F);
        vecQuest.push_back(stQuest);
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
        stQuest.vecMessages.push_back("나를 플레이하다보면, BoB 활동을 하면서 알게된 팁들을 공유해줄껨!!");
        stQuest.vecMessages.push_back("많은 도움이 되길 바랄껨!!");
        stQuest.ClearCondition = ST_FILTER(132, 0x003F);
        vecQuest.push_back(stQuest);
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
        stQuest.vecMessages.push_back("아무래도 옆방에서 놀다가 [잊혀진 기억1]을 흘린거같담ㅠㅠ");
        stQuest.vecMessages.push_back("난 공부하느라 바쁘니까 좀 찾아주람!!");
        stQuest.vecMessages.push_back("오른쪽 방을 뒤져보면 있을거담!!");
        stQuest.ClearCondition = ST_FILTER(132, 0x007F);
        vecQuest.push_back(stQuest);
        
    }

    // [잊혀진 기억1] 찾아오기
    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 273;
        stQuest.StartCondition = ST_FILTER(132, 0x003F, 0x007F);
        stQuest.vecMessages.push_back("(무엇인가 반짝인다..)");
        stQuest.vecMessages.push_back("(혹시 이건가...?");
        stQuest.vecMessages.push_back("[잊혀진 기억1]을 획득했습니다.");
        stQuest.vecMessages.push_back("(일단 가져가보자..)");
        stQuest.ClearCondition = ST_FILTER(132, 0x00FF);
        vecQuest.push_back(stQuest);
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
        stQuest.vecMessages.push_back("나처럼 몰아치기가 습관화 되어있는 사람은 이번이 고칠 기회담!!!");
        stQuest.vecMessages.push_back("그날 생긴 과제는 무조껀 당일 해결하는게 베스트인거 같담!!");
        stQuest.vecMessages.push_back("나처럼 아무것도 모르는 아가는 과제를 혼자 해결하기 벅찰 수 있담...ㅠㅠ");
        stQuest.vecMessages.push_back("그래서 동기들을 잘 사귀어두어야 한담!! 과제를 같이하면서 더욱 친해질 수 있담ㅎㅎ");
        stQuest.vecMessages.push_back("그럼 잠은 언제자냐구?? 잠을 줄이면 된담!!");
        stQuest.vecMessages.push_back("비밀인데... 사람은 사실 하루에 4시간만 자도 충분하담...ㅎㅎ");
        stQuest.vecMessages.push_back("그리고 또...");
        stQuest.vecMessages.push_back("공통수업과 트랙교육 마지막에 시험을 치뤄야한다는건 알고있냠!!");
        stQuest.vecMessages.push_back("수업 도중에 \"이 내용을 시험에 내겠다\"고 직접 말씀하시는 경우도 있고,");
        stQuest.vecMessages.push_back("강의자료에 빨간줄같이 강조된 부분이 있을꺼담!!");
        stQuest.vecMessages.push_back("시험 바로전날 밤11시까지 수업이 있어서 시험공부 할 시간이란 존재하지 않는담...");
        stQuest.vecMessages.push_back("매 수업시간마다 노션에 내용을 정리하면서 수업을 들으면, 나중에 시험치룰때 편하담!!");
        stQuest.vecMessages.push_back("이번 팁 방출은 여기까지... 나는 17층에 먼저 가있겠담..ㅎㅎ");
        stQuest.ClearCondition = ST_FILTER(132, 0x01FF);
        vecQuest.push_back(stQuest);
    }

    //16F : 청소년 창현
    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 157;
        stQuest.StartCondition = ST_FILTER(132, 0x00FF, 0x01FF);
        stQuest.vecMessages.push_back("호오...여기까지 오다니 대단하담!!!");
        stQuest.vecMessages.push_back("탑은 오를만 한지 모르겠넴ㅎㅎ");
        stQuest.vecMessages.push_back("나도 공통교육때, 전상현 멘토님이 이런 게임을 던져주셨는데");
        stQuest.vecMessages.push_back("사실 난 별로 많이 안해봤담...ㅎㅎㅎ");
        stQuest.vecMessages.push_back("나와는 달리 여기까지온 너는... 당연히 열심히하는 친구겠구남!!!");
        stQuest.vecMessages.push_back("기억을 더듬어서 또 팁을 주도록 하겠담!");
        stQuest.vecMessages.push_back("어...");
        stQuest.vecMessages.push_back("어어......");
        stQuest.vecMessages.push_back("기억이 안난담ㅠㅠㅠㅠㅠㅠ");
        stQuest.vecMessages.push_back("아무래도 [잊혀진 기억2]를 잃어버린것 같담ㅠㅠㅠㅠ");
        stQuest.vecMessages.push_back("15층에 미로에서 너무 헤맸담... 그때 잃어버린거 같담...");
        stQuest.vecMessages.push_back("막다른 길임을 인지했을 때... 화가나서 벽을 쳤는데 그때 기억이 날아갔나보담ㅠㅠ");
        stQuest.vecMessages.push_back("미안하지만.. 15층 막다른 길목을 전부 뒤져봐야할거같담ㅠㅠ");
        stQuest.ClearCondition = ST_FILTER(132, 0x03FF);
        vecQuest.push_back(stQuest);
    }

    // [잊혀진 기억 2] 찾아오기
    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 279;
        stQuest.StartCondition = ST_FILTER(132, 0x01FF, 0x03FF);
        stQuest.vecMessages.push_back("(여기... 핏자국이...)");
        stQuest.vecMessages.push_back("(이자식..얼마나 화가났으면 피까지 흘릴정도로 벽을 때린거야ㅋㅋㅋ)");
        stQuest.vecMessages.push_back("(사춘기가 온건가...)");
        stQuest.vecMessages.push_back("[잊혀진 기억 2]를 획득했습니다.");
        stQuest.vecMessages.push_back("(다시 돌아가자..)");
        stQuest.ClearCondition = ST_FILTER(132, 0x07FF);
        vecQuest.push_back(stQuest);
    }

    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 157;
        stQuest.StartCondition = ST_FILTER(132, 0x03FF, 0x07FF);
        stQuest.vecMessages.push_back("오!! 이걸 찾다니 지렸담.....ㄷㄷ");
        stQuest.vecMessages.push_back("이번엔 팀 프로젝트와 관련한 팁을 방출하겠담..!");
        stQuest.vecMessages.push_back("이번에 내가 느낀건... 프로젝트의 주제도 중요하지만..");
        stQuest.vecMessages.push_back("누구랑 팀을 하느냐도 정말정말정말x9999 중요한거같담!");
        stQuest.vecMessages.push_back("공통교육, 트랙교육때 열심히하는 친구들을 눈여겨 봤다가,");
        stQuest.vecMessages.push_back("그 친구한테 프로젝트를 같이하자고 꼬셔야한담!@!@");
        stQuest.vecMessages.push_back("팀 프로젝트는 3개월이라는 기간동안 진행되는데, 결코 짧은 기간은 아니담!!");
        stQuest.vecMessages.push_back("1,2,3차 발표를 하게되는데... 발표준비 시즌이 다가오면 무척 바빠진담ㅠㅠ");
        stQuest.vecMessages.push_back("프로젝트에 대한 내용을 문서화하는 작업을 평상시에 같이하면 좋담!!");
        stQuest.vecMessages.push_back("이렇게 하면 발표시즌에는 그동한 정리해둔 내용을 PPT에 잘 녹여내기만 하면 된담!!!");
        stQuest.vecMessages.push_back("그리고.. 성과를 내는것도 매우 중요한데, 팀 프로젝트를 하는 동안에");
        stQuest.vecMessages.push_back("해당 프로젝트로 BoB 외부에서의 활동도 추가적으로 하면 더욱 좋담!! 예를들면 논문이라던지... 등등");
        stQuest.vecMessages.push_back("팀 프로젝트도 열심히 해보길 바란담!@");
        stQuest.vecMessages.push_back("다음 Tip은 어마어마게 지리는거니까 꼭 끝까지 탑을 오르길 바래!");
        stQuest.ClearCondition = ST_FILTER(132, 0x0FFF);
        vecQuest.push_back(stQuest);
    }

    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 159;
        stQuest.StartCondition = ST_FILTER(132, 0x07FF, 0x0FFF);
        stQuest.vecMessages.push_back("진짜...여기까지 왔넴... OoO");
        stQuest.vecMessages.push_back("너 정말 지독한 아이구남?");
        stQuest.vecMessages.push_back("칭찬이얌ㅎㅎ");
        stQuest.vecMessages.push_back("이걸 끝까지 해보는게 정말 열정이거든....");
        stQuest.vecMessages.push_back("아마 여기까지 온사람은 몇 안될꺼얌ㅋㅋㅋㅋ");
        stQuest.vecMessages.push_back("정말 고생했으니... 어마어마한 선물을 주겠담...");
        stQuest.vecMessages.push_back("이 메세지를 보고 나한테 처음으로 [암호]보내는 사람에겐 치킨 기프티콘을 주겠담..ㅎㅎ");
        stQuest.vecMessages.push_back("치킨 먹으면서 이야기를 같이 해보면 좋을 것 같담!!");
        stQuest.vecMessages.push_back("암호는...");
        stQuest.vecMessages.push_back("암호...는.....");
        stQuest.vecMessages.push_back("ㅠㅠㅠㅠㅠㅠㅠ까먹었담ㅠㅠㅠㅠㅠㅠㅠㅠ");
        stQuest.vecMessages.push_back("(이자식이 끝까지 진짜;;;");
        stQuest.vecMessages.push_back("이건 분명히 내가 쪽지에 적어뒀는뎀,,,");
        stQuest.vecMessages.push_back("분명 27층 어딘가에 있는데... 어딨는지 찾아주람!!!");
        stQuest.ClearCondition = ST_FILTER(132, 0x1FFF);
        vecQuest.push_back(stQuest);
    }

    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 280;
        stQuest.StartCondition = ST_FILTER(132, 0x0FFF, 0x1FFF);
        stQuest.vecMessages.push_back("(이건가...?");
        stQuest.vecMessages.push_back("[낡은 쪽지]를 획득했습니다.");
        stQuest.vecMessages.push_back("(읽어보자.)");
        stQuest.vecMessages.push_back("<암호 : 창현 짱짱맨님, 치킨받으러 왔습니다.>");
        stQuest.vecMessages.push_back("<위 암호를 BoB10기 보안제품개발트랙 임창현한테 보내는 선착순 1명은 치킨을 얻을 수 있담!!>");
        stQuest.vecMessages.push_back("(과연 진짜 줄까...?)");
        stQuest.vecMessages.push_back("(속는셈 치고 연락해보자)");
        stQuest.vecMessages.push_back("(근데 연락처가 없는데...?)");
        stQuest.vecMessages.push_back("(페이스북을 뒤져보자");
        stQuest.ClearCondition = ST_FILTER(132, 0x3FFF);
        vecQuest.push_back(stQuest);
    }

    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 159;
        stQuest.StartCondition = ST_FILTER(132, 0x3FFF, 0x7FFFF);
        stQuest.vecMessages.push_back("치킨은 잘 받았니?ㅎㅎ");
        stQuest.vecMessages.push_back("암호를 까먹었니? <암호 : 창현 짱짱맨님, 치킨 받으러 왔습니다.>");
        stQuest.ClearCondition = ST_FILTER(132, 0xFFFF);
        vecQuest.push_back(stQuest);
    }
}