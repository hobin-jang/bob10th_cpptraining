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
    npc.x = 2;
    npc.y = 12;
    npc.z = 2;
    npc.nNpcID = 137;
    npc.strTrack = "디지털포렌식트랙";
    npc.strName = "이권희";
    npc.nAge = 23;
    npc.strMBTI = "INTJ.. MBTI는.. 유사과학이니 조심해!";
    npc.cPatch = 'V';
    npc.strMessage = "오늘은 즐거운 월요일이야! 너도 신나지??";
    
    npc.vecBigImage.push_back("                   .,;=*$$*!~,                    ");
    npc.vecBigImage.push_back("                 .!==$==$$$###=.                  ");
    npc.vecBigImage.push_back("                ===$$$##$$@$$##$*                 ");
    npc.vecBigImage.push_back("              ,*$$$$$###$########=;               ");
    npc.vecBigImage.push_back("             ~$$##$$###$$$$$####$#$:              ");
    npc.vecBigImage.push_back("            ~=#$###$$$$$#$$$$$##$$#$;             ");
    npc.vecBigImage.push_back("            $######$$$$$$#$$$$$$#$#$$;            ");
    npc.vecBigImage.push_back("           *######$#$##$$###$$$$#$$$$$            ");
    npc.vecBigImage.push_back("           =###########$$##$$$#$$$#$$$*           ");
    npc.vecBigImage.push_back("          .$#########$$$$#$$$$$=$$=$$$$           ");
    npc.vecBigImage.push_back("          .$######$$$==$$$$$$==$$===#=$           ");
    npc.vecBigImage.push_back("           #@##@##$==*$#$$$=====$$#$$=$           ");
    npc.vecBigImage.push_back("           $######=!!!==#=##$#######$$*           ");
    npc.vecBigImage.push_back("           *#####$=*!!!;=*!#$########$;           ");
    npc.vecBigImage.push_back("           .$$#$=!;;;!:-,:-;=$$=#$##$=            ");
    npc.vecBigImage.push_back("            =##=~,....,.  .,,,..~!*##:            ");
    npc.vecBigImage.push_back("           .,$$~,,,!$...        ..-$=.            ");
    npc.vecBigImage.push_back("           ..-$-,,--!,,.    ,=~-. .=,..           ");
    npc.vecBigImage.push_back("             .=,...    .          .*              ");
    npc.vecBigImage.push_back("           . .:,.                 .:              ");
    npc.vecBigImage.push_back("             .~,.                 .-              ");
    npc.vecBigImage.push_back("            ..~,.      .          ..              ");
    npc.vecBigImage.push_back("              ,-..    ..          -               ");
    npc.vecBigImage.push_back("              .~,.    .           ~               ");
    npc.vecBigImage.push_back("               .,..   .-,.,      .,               ");
    npc.vecBigImage.push_back("                ,,.              .                ");
    npc.vecBigImage.push_back("                ,,..             .                ");
    npc.vecBigImage.push_back("                ,,.......  ..    .                ");
    npc.vecBigImage.push_back("                 ,,..,,,.....   .                 ");
    npc.vecBigImage.push_back("                 ,,.....        .                 ");
    npc.vecBigImage.push_back("                  ,....        .                  ");
    npc.vecBigImage.push_back("                  ,,..        ..                  ");
    npc.vecBigImage.push_back("                  ,,,..      ...                  ");
    npc.vecBigImage.push_back("                  ,,,,,.......                    ");
    npc.vecBigImage.push_back("                  ...,,---,,.                     ");
    npc.vecBigImage.push_back("                  ....,,,,..    .                 ");
    npc.vecBigImage.push_back("                 .........                        ");
    npc.vecBigImage.push_back("                 .......                          ");
    npc.vecBigImage.push_back("                 ,..  .          .                ");
    npc.vecBigImage.push_back("              .*,....              =:             ");
    npc.vecBigImage.push_back("             *#,....               *##=           ");
    npc.vecBigImage.push_back("           ,$##-....               #####*-        ");
    npc.vecBigImage.push_back("         -*#####...               ;#######*,      ");
    npc.vecBigImage.push_back("       -######@#~..              ,##########=,    ");
    npc.vecBigImage.push_back("     -###########-              ,#############$   ");
    npc.vecBigImage.push_back("   .=############$~            :################= ");
    npc.vecBigImage.push_back("  ;################!-        ;=###################");
    npc.vecBigImage.push_back(":#####################*:~~;#######################");
    npc.vecBigImage.push_back("####################@#############################");
    npc.vecBigImage.push_back("##################################################");
    npc.vecBigImage.push_back("##################################################");
    npc.vecBigImage.push_back("##################################################");
    npc.vecBigImage.push_back("##################################################");
    npc.vecBigImage.push_back("##############################################@###");
    npc.vecBigImage.push_back("##################################################");
    npc.vecBigImage.push_back("###############################################@##");
    npc.vecBigImage.push_back("###############################################@##");
    npc.vecBigImage.push_back("##################################################");
    npc.vecBigImage.push_back("##################################################");
    npc.vecBigImage.push_back("##################################################");

    npc.vecSmallImage.push_back("#####@@@@@@@@#@@@########");
    npc.vecSmallImage.push_back("#####@@@@#@@@#@@@########");
    npc.vecSmallImage.push_back("####g######@##@##QQBQQ6QB");
    npc.vecSmallImage.push_back("###QH@@######BB$MehZMdMgQ");
    npc.vecSmallImage.push_back("##BBI8#########QQdM8OwBBQ");
    npc.vecSmallImage.push_back("BBQBEkD########QgWzmKB##8");
    npc.vecSmallImage.push_back("BQ$Q$PVyHOQQ80dqKVTOdQ##$");
    npc.vecSmallImage.push_back("Qg$0KY!:Y}}}Lxr\vr}XT3#BR");
    npc.vecSmallImage.push_back("QDRDM,  _v)?<   :!~r*VBzr");
    npc.vecSmallImage.push_back("Q9O9V =r-yxT`  ` !'<>yBzv");
    npc.vecSmallImage.push_back("gRdO( zy:ZM)  ;T :_~~mj=?");
    npc.vecSmallImage.push_back("0EOZ) O*|MM;  XH !_==Z^!r");
    npc.vecSmallImage.push_back("EEM5o` _Pkk!  y)':-==y!!^");
    npc.vecSmallImage.push_back("OOGGGakZGDl*    *_-!!^!!=");
    npc.vecSmallImage.push_back("ddPIxk3gdQQ)<-:r<-.:!>!!L");
    npc.vecSmallImage.push_back("ZZG(^(TuqDRx^=!::-.::~!xo");
    npc.vecSmallImage.push_back("MGHr;~adL\|r**!!!-':!iuuc");
    npc.vecSmallImage.push_back("G3Ks)~YUixvvr!,,_``_*vTVc");
    npc.vecSmallImage.push_back("PKhoUl*cxvx<:,_.```.,=rxV");
    npc.vecSmallImage.push_back("amhjyoiv}(^?^=_`     `,*x");
    npc.vecSmallImage.push_back("KsIzwddurrxvr_`       `,|");
    npc.vecSmallImage.push_back("mUXzmOQQMYvr:`         `~");
    npc.vecSmallImage.push_back("mUIzbdQQWxr^-           ,");
    npc.vecSmallImage.push_back("hjwkMG$Oex*~.           -");
    npc.vecSmallImage.push_back("r<!:,__-.```             ");// 위엣것 참조.
    
    // 인트로 메시지
    npc.strContents1 =
        "앗!...\n"
        "아...\n"
        "....\n"
        "방금 커피를 엎질렀어..\n"
        "오히려 좋...\n"
        "...\n"
        "......\n"
        "아니 안좋아...\n"
        "내 마우스..\n"
        "어 근데..\n"
        "여긴 어디지??\n"
        "BoB.. 센터..?\n"
        "???\n"
        ;
    
    // 전직했을 때 보여줄 메시지
    npc.strContents2 = 
        "[성장] 했구나\n"
        "후후...\n"
        ;	

    // 2단계 프로젝트를 마친 후 보여줄 메시지
    npc.strContents3 =
        "오호..\n"
        "프로젝트를 성공적으로 마쳤구나!!\n"
        "수고 많았어!!\n"
        "그동안 많은걸 배웠을거라고 생각해\n"
        "수료까지 다시 화이팅해보자!!\n"
        ;	

    // 수료 후 보여줄 메시지
    npc.strContents4 =
        "5252!!\n"
        "진짜로 수료한거냐구!!\n"
        "박수!!\n"
        "아주 훌륭해\n"
        "수고 많았다!!\n"
        "이제 시작이니까 그 초심 잃지말고!!\n"
        ;	

    vecNPC.push_back(npc);
}


void CQuestInfo::QueryQuestObject(std::vector<ST_QUEST_OBJECT>& vecQuestObject)
{
    {
        ST_QUEST_OBJECT stObject;
        stObject.nQuestObjectId = 267;
        stObject.strName = "얼룩진 마우스패드";
        stObject.cPatch = 0;	// 화면에 보이지도 않고 만져지지도 않게 하려면 0을 넣으면 됨
        stObject.x = 3;
        stObject.y = 13;
        stObject.z = 3;
        stObject.reserved = 0;
        vecQuestObject.push_back(stObject);
    }
}



void CQuestInfo::QueryQuest(std::vector<ST_QUEST_DATA>& vecQuest)
{
    // npc 이권희
    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 137;
        stQuest.StartCondition = ST_FILTER(137, 0x0000, 0x0001);
        stQuest.vecMessages.push_back("아아..");
        stQuest.vecMessages.push_back("아까 급하게 나오다가 말야");
        stQuest.vecMessages.push_back("마우스패드를 놓고왔지 뭐야");
        stQuest.vecMessages.push_back("어디였지.. 3층이었나..?");
        stQuest.vecMessages.push_back("아 미안한데 그 마우스패드좀 가져와줄 수 있니??");
        stQuest.ClearCondition = ST_FILTER(137, 0x0003);
        vecQuest.push_back(stQuest);
    }

    // 얼룩진 마우스패드
    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 267;
        stQuest.StartCondition = ST_FILTER(137, 0x0001, 0x0003);
        stQuest.vecMessages.push_back("음 마우스패드가 이건가");
        stQuest.vecMessages.push_back("마르지도 않은 커피얼룩이 있네");
        stQuest.vecMessages.push_back("근데 왜 내가 이 심부름을 하고 있지..?");
        stQuest.vecMessages.push_back(".....");
        stQuest.vecMessages.push_back("모르겠고! 일단 가져다주자");
        stQuest.ClearCondition = ST_FILTER(137, 0x0007);
        vecQuest.push_back(stQuest);
    }

    // npc 이권희
    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 137;
        stQuest.StartCondition = ST_FILTER(137, 0x0003, 0x0007);
        stQuest.vecMessages.push_back("오오..!");
        stQuest.vecMessages.push_back("정말 가져와줬네!");
        stQuest.vecMessages.push_back("고마워 ^^");
        stQuest.vecMessages.push_back("너 정말 착한 아이구나!");
        stQuest.vecMessages.push_back("아 ..! 막차 곧 오겠다");
        stQuest.vecMessages.push_back("그 나중에라도 도울 거 있으ㅁ...");
        stQuest.vecMessages.push_back("(황급히 달려간다)");
        stQuest.vecMessages.push_back("...?");
        stQuest.ClearCondition = ST_FILTER(137, 0x000F);
        vecQuest.push_back(stQuest);
    }

}