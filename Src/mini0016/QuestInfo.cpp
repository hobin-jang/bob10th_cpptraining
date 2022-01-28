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
    strcpy_s(npc.szName, 21, "김민정");
    npc.patch = 'N';
    strcpy_s(npc.szGreetMessage, 61, "git 어려워요..");

    npc.vecBuffer.resize(60);

    npc.vecBuffer[0] = "                      ,,,,,,,,                    ";
    npc.vecBuffer[1] = "                    ,;#######$-,                  ";
    npc.vecBuffer[2] = "                  ,~$@#@@@@@@#@=,                 ";
    npc.vecBuffer[3] = "                 ,=#@@@@@@@@@@@@=,                ";
    npc.vecBuffer[4] = "                ,=#@@@@@@@#@@@@@@*,               ";
    npc.vecBuffer[5] = "               .!#@@@@@@@#=#@@@@@#*,              ";
    npc.vecBuffer[6] = "               ~=$#@@@@#$*;*$@@@@@#:              ";
    npc.vecBuffer[7] = "              ,!$$#@@#$*!~~:!#@@###*,             ";
    npc.vecBuffer[8] = "              :=$#@@#=*:--,-~=##@@#$:             ";
    npc.vecBuffer[9] = "             -*$$#@#=!:-,,,,-;=#@@##*,            ";
    npc.vecBuffer[10] = "             ~=####=!:-,,..,,~*$#@##$~            ";
    npc.vecBuffer[11] = "             :$#@#$*;~,,...,,-;$####$:            ";
    npc.vecBuffer[12] = "            -*$@@$*;~,......,,~*#####;.           ";
    npc.vecBuffer[13] = "            ~=#@@$!:-.......,,~!$#@##=-           ";
    npc.vecBuffer[14] = "            ~=#@#$*!;;~,..,-:;*$##@@#$~           ";
    npc.vecBuffer[15] = "            :$##=;-,,-,,.,,---,~!#@@@#~           ";
    npc.vecBuffer[16] = "           ,!###!-,,,,,,,,,,,,,-;$#@@#:           ";
    npc.vecBuffer[17] = "           -*##$:-;:!#~,..,,~$;*!=#@@@:           ";
    npc.vecBuffer[18] = "           -=##*-,,-~~-...,,--~-~;*###;           ";
    npc.vecBuffer[19] = "           ~$##!,...,,,...,,,,,,,-;$##$~          ";
    npc.vecBuffer[20] = "           ~$##;,.........,,.....,~*#@#~          ";
    npc.vecBuffer[21] = "           :###;,.  .......,......,!@##~          ";
    npc.vecBuffer[22] = "          ,*###*-.  .......,,....,,!@##~          ";
    npc.vecBuffer[23] = "          -=###$:.....,.,.-,,....,-!@##~          ";
    npc.vecBuffer[24] = "          :$####;,.....,-,--,...,,-*@##~          ";
    npc.vecBuffer[25] = "         ,!$###@;,,.......,,,,,,,-:$@##~          ";
    npc.vecBuffer[26] = "         ,*$###@*-,,,,-,,.,--,,,,-;@##$:          ";
    npc.vecBuffer[27] = "         ~=####@#:,,,,-,,.,--,,,--!@##$;.         ";
    npc.vecBuffer[28] = "        .!$####@@!-,,,,,..,,,,,,-:$@##$;.         ";
    npc.vecBuffer[29] = "        ,=#####@@#:,,,,..,,,,,--:$@@@#$!,         ";
    npc.vecBuffer[30] = "        -$$####@@@*~,,,....,,--:$@@@@#$*,         ";
    npc.vecBuffer[31] = "        -$$$###@@@$:-,,....,,-~*@@@@###*,         ";
    npc.vecBuffer[32] = "        ,=$$###@@@$:---,,,,--~!#@@@@###=-         ";
    npc.vecBuffer[33] = "        -$$#$#@@@@#:------~~~:*#@@@@@@@$:.        ";
    npc.vecBuffer[34] = "        ,=$#$#@@@@#:-,,---~~~:=@@@@@@@@#*,        ";
    npc.vecBuffer[35] = "        ,*$$$#@@@#$:-,,,,---~;=#@@@@@@@@$!.       ";
    npc.vecBuffer[36] = "        .:$$##@@#$=:,,,,,,---;=##@@@@@@@@$:       ";
    npc.vecBuffer[37] = "       .!###@@@@$=!:,,,,,,,,-;=##@@@@@@@@@#:      ";
    npc.vecBuffer[38] = "     ---!##@@@@#=!:~,,.,,,,,-:*=$#@@@@@@@@@$,     ";
    npc.vecBuffer[39] = "   ,,,--:=#@@@#=!;~-,..,,,,,-~:!=$#@@@@@@@@@*~-   ";
    npc.vecBuffer[40] = ",,,,,,--;=$#@@=!:~--,......,,-~:*$$@@@@@@@@@=~--  ";
    npc.vecBuffer[41] = ";-,,-----:*=*=!:--,,........,,,~:*$#@@@@@@@@=~-,. ";
    npc.vecBuffer[42] = ",--,,,--,--:!;~,,.............,-~;=#@@@@@@@#;-,-, ";
    npc.vecBuffer[43] = ",,-,,,,-,,,,,,,,,.............,-~;*#@@@@###=;--,-,";
    npc.vecBuffer[44] = ",-,,,,,,,,,,,,,,,,...........,,-~;*#@##@$=!;-,~---";
    npc.vecBuffer[45] = ",;,,,,,,,,,---,,,,,.........,,,-~*$$$=#=;:~--,~---";
    npc.vecBuffer[46] = ",;,-,-,,,,,---,,,,,,.......,,,,,-:;;!**;~---,,-,--";
    npc.vecBuffer[47] = ",:,,--,,,---,,,,,,,,,,,..,,,,,,,-----~----,-,,-,--";
    npc.vecBuffer[48] = "-:,,--,----,,,,,,,,,~:-,,-,,,,,,,,,,,,,,-------,--";
    npc.vecBuffer[49] = ",~,,,-,,,,,,,,,,,,,-:=:,,-,,,,,,,,,,,,,,----,--,--";
    npc.vecBuffer[50] = ",~----,,,,,,,,,,,,,,-;~,~,,,,,,,,,,,,,,,---,,~-,--";
    npc.vecBuffer[51] = "-~-~~,,,,,,,,,,,,,,,,-,,~-,,,,,,,,,,,,,,-,-,,-,,--";
    npc.vecBuffer[52] = "---:--,,,,,,,,,,,,,,,,,,~,,,-,,,,,,,,,,,-,,-~-,---";
    npc.vecBuffer[53] = "--~~--,,,,,,,,,,,,,,,,,,-,,,,,,,,,,,,,,,,,-~;~--,,";
    npc.vecBuffer[54] = "---:----,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,---:~----";
    npc.vecBuffer[55] = "--~;-~,-,,,,,,,,,,,,,,,,,-,,,,,,,,,,,,,-----~~,,,-";
    npc.vecBuffer[56] = "-,-;-~,,,,,,,,,,,,,,,,,,,,,,,,,,,,,---,---~~~-,,--";
    npc.vecBuffer[57] = ",,-~~-,,,,,,,,,,,,,-,,,,,,,,,,,,,,,-------~~~-,---";
    npc.vecBuffer[58] = "-,-~~-,,,,,,,,,,,-,,,,,.,,,,,,,,,,,,,------;:---,-";
    npc.vecBuffer[59] = "-,-:*--,,,,,,,,,,,,,,,,.,-,,,,,,,,,,,------;;--,,-";

    vecNPC.push_back(npc);

}


void CQuestInfo::QueryNpcEx(std::vector<ST_QUEST_NPC_DATA>& vecNPC)
{
    ST_QUEST_NPC_DATA npc;
    npc.x = 14;
    npc.y = 23;
    npc.z = 5;  // 5층
    npc.nNpcID = 155;
    npc.strTrack = "디지털포렌식";
    npc.strName = "김민정";
    npc.nAge = 22;
    npc.strMBTI = "MBTI는 INFP, 혈액형은 B라네";
    npc.cPatch = 'N';
    npc.strMessage = "자네 나와 함께 MBTI 과몰입해볼 생각 없나?";

    //큰 이미지 (50 * 50)
    npc.vecBigImage.push_back("                      ,,,,,,,,                    ");
    npc.vecBigImage.push_back("                    ,;#######$-,                  ");
    npc.vecBigImage.push_back("                  ,~$@#@@@@@@#@=,                 ");
    npc.vecBigImage.push_back("                 ,=#@@@@@@@@@@@@=,                ");
    npc.vecBigImage.push_back("                ,=#@@@@@@@#@@@@@@*,               ");
    npc.vecBigImage.push_back("               .!#@@@@@@@#=#@@@@@#*,              ");
    npc.vecBigImage.push_back("               ~=$#@@@@#$*;*$@@@@@#:              ");
    npc.vecBigImage.push_back("              ,!$$#@@#$*!~~:!#@@###*,             ");
    npc.vecBigImage.push_back("              :=$#@@#=*:--,-~=##@@#$:             ");
    npc.vecBigImage.push_back("             -*$$#@#=!:-,,,,-;=#@@##*,            ");
    npc.vecBigImage.push_back("             ~=####=!:-,,..,,~*$#@##$~            ");
    npc.vecBigImage.push_back("             :$#@#$*;~,,...,,-;$####$:            ");
    npc.vecBigImage.push_back("            -*$@@$*;~,......,,~*#####;.           ");
    npc.vecBigImage.push_back("            ~=#@@$!:-.......,,~!$#@##=-           ");
    npc.vecBigImage.push_back("            ~=#@#$*!;;~,..,-:;*$##@@#$~           ");
    npc.vecBigImage.push_back("            :$##=;-,,-,,.,,---,~!#@@@#~           ");
    npc.vecBigImage.push_back("           ,!###!-,,,,,,,,,,,,,-;$#@@#:           ");
    npc.vecBigImage.push_back("           -*##$:-;:!#~,..,,~$;*!=#@@@:           ");
    npc.vecBigImage.push_back("           -=##*-,,-~~-...,,--~-~;*###;           ");
    npc.vecBigImage.push_back("           ~$##!,...,,,...,,,,,,,-;$##$~          ");
    npc.vecBigImage.push_back("           ~$##;,.........,,.....,~*#@#~          ");
    npc.vecBigImage.push_back("           :###;,.  .......,......,!@##~          ");
    npc.vecBigImage.push_back("          ,*###*-.  .......,,....,,!@##~          ");
    npc.vecBigImage.push_back("          -=###$:.....,.,.-,,....,-!@##~          ");
    npc.vecBigImage.push_back("          :$####;,.....,-,--,...,,-*@##~          ");
    npc.vecBigImage.push_back("         ,!$###@;,,.......,,,,,,,-:$@##~          ");
    npc.vecBigImage.push_back("         ,*$###@*-,,,,-,,.,--,,,,-;@##$:          ");
    npc.vecBigImage.push_back("         ~=####@#:,,,,-,,.,--,,,--!@##$;.         ");
    npc.vecBigImage.push_back("        .!$####@@!-,,,,,..,,,,,,-:$@##$;.         ");
    npc.vecBigImage.push_back("        ,=#####@@#:,,,,..,,,,,--:$@@@#$!,         ");
    npc.vecBigImage.push_back("        -$$####@@@*~,,,....,,--:$@@@@#$*,         ");
    npc.vecBigImage.push_back("        -$$$###@@@$:-,,....,,-~*@@@@###*,         ");
    npc.vecBigImage.push_back("        ,=$$###@@@$:---,,,,--~!#@@@@###=-         ");
    npc.vecBigImage.push_back("        -$$#$#@@@@#:------~~~:*#@@@@@@@$:.        ");
    npc.vecBigImage.push_back("        ,=$#$#@@@@#:-,,---~~~:=@@@@@@@@#*,        ");
    npc.vecBigImage.push_back("        ,*$$$#@@@#$:-,,,,---~;=#@@@@@@@@$!.       ");
    npc.vecBigImage.push_back("        .:$$##@@#$=:,,,,,,---;=##@@@@@@@@$:       ");
    npc.vecBigImage.push_back("       .!###@@@@$=!:,,,,,,,,-;=##@@@@@@@@@#:      ");
    npc.vecBigImage.push_back("     ---!##@@@@#=!:~,,.,,,,,-:*=$#@@@@@@@@@$,     ");
    npc.vecBigImage.push_back("   ,,,--:=#@@@#=!;~-,..,,,,,-~:!=$#@@@@@@@@@*~-   ");
    npc.vecBigImage.push_back(",,,,,,--;=$#@@=!:~--,......,,-~:*$$@@@@@@@@@=~--  ");
    npc.vecBigImage.push_back(";-,,-----:*=*=!:--,,........,,,~:*$#@@@@@@@@=~-,. ");
    npc.vecBigImage.push_back(",--,,,--,--:!;~,,.............,-~;=#@@@@@@@#;-,-, ");
    npc.vecBigImage.push_back(",,-,,,,-,,,,,,,,,.............,-~;*#@@@@###=;--,-,");
    npc.vecBigImage.push_back(",-,,,,,,,,,,,,,,,,...........,,-~;*#@##@$=!;-,~---");
    npc.vecBigImage.push_back(",;,,,,,,,,,---,,,,,.........,,,-~*$$$=#=;:~--,~---");
    npc.vecBigImage.push_back(",;,-,-,,,,,---,,,,,,.......,,,,,-:;;!**;~---,,-,--");
    npc.vecBigImage.push_back(",:,,--,,,---,,,,,,,,,,,..,,,,,,,-----~----,-,,-,--");
    npc.vecBigImage.push_back("-:,,--,----,,,,,,,,,~:-,,-,,,,,,,,,,,,,,-------,--");
    npc.vecBigImage.push_back(",~,,,-,,,,,,,,,,,,,-:=:,,-,,,,,,,,,,,,,,----,--,--");

    //작은 이미지 (25 * 25)
    npc.vecSmallImage.resize(25);
    npc.vecSmallImage.push_back("          .~!!~.         ");
    npc.vecSmallImage.push_back("         ;#@@@@#:        ");
    npc.vecSmallImage.push_back("        :@@@##@@#-       ");
    npc.vecSmallImage.push_back("       -$@#$!!$@@;.      ");
    npc.vecSmallImage.push_back("      .!##=:--;$##,      ");
    npc.vecSmallImage.push_back("      ,$#=:,,,-*##;.     ");
    npc.vecSmallImage.push_back("      ~##!-...,!##$,     ");
    npc.vecSmallImage.push_back("     .*#=-,..,,~=@#,     ");
    npc.vecSmallImage.push_back("     ,$$;:!~.,;*=##,     ");
    npc.vecSmallImage.push_back("     ,#=--~,.,~~~*#,     ");
    npc.vecSmallImage.push_back("     ,#*.........;$*.    ");
    npc.vecSmallImage.push_back("     ~#*,....,..,!#=.    ");
    npc.vecSmallImage.push_back("    .!#=~,...,..,=#=.    ");
    npc.vecSmallImage.push_back("    .=##=,,,,--,-=@=.    ");
    npc.vecSmallImage.push_back("    .*#@=-,,,,,-;$#*.    ");
    npc.vecSmallImage.push_back("    ;$#@@=,..,-~=@#$.    ");
    npc.vecSmallImage.push_back("    ;$#@@=--,-:=@@@#,    ");
    npc.vecSmallImage.push_back("    -#$@@*,,--:$@@@@!    ");
    npc.vecSmallImage.push_back("   .~###$;,,,,:$@@#@#-   ");
    npc.vecSmallImage.push_back(" ..:$#@$!~,,,,~!$@@@@$,. ");
    npc.vecSmallImage.push_back(",,,-!=$!~,....,~!#@@@@:-.");
    npc.vecSmallImage.push_back(",,,-,~:,,......-:$@@@$~,,");
    npc.vecSmallImage.push_back(",--,,,,,,.....,-;=$#*;,,-");
    npc.vecSmallImage.push_back("---,,,,,,,...,,,~:::--,--");
    npc.vecSmallImage.push_back("--,-,,,,,--.,,,,,,,,--,--");

    //게임 시작 시 인트로 멘트
    npc.strContents1 =
        "안녕 BoB 11기 친구, 만나서 반갑다네\n"
        "나는 디포 트랙 10기 김민정이라네\n"
        ;

    // 전직 후 보여지는 멘트
    npc.strContents2 =
        "전직을 축하한다네!\n"
        "뭐? 퀘스트 줄 때랑 말투가 다르다고?\n"
        "그런 가벼운 문제는 넘깁세. 사람이 어떻게 항상 똑같을 수 있겠나\n"
        ;
    
    // 팀 프로젝트 이후 멘트
    npc.strContents3 =
        "팀 프로젝트까지 했다니 고생이 많았군 그래\n"
        "뭐? 프로젝트가 끝났으니 이제 쉬겠다고?\n"
        "떼잉.. 3차 교육이 있다는 걸 잊었나?!?\n"
        "얼른 수업 들으러 가게!! (꼰꼰)\n"
        ;

    // 엔딩 시 멘트
    npc.strContents4 =
        "여기까지 왔다니 마무리를 축하하네!"
        "코로나가 언제 끝날지는 모르겠지만 11기 시작 전에는 끝났으면 좋겠군\n"
        "앞으로의 활동들 건승하길 바라네\n"
        ;

    vecNPC.push_back(npc);
}

void CQuestInfo::QueryQuestObject(std::vector<ST_QUEST_OBJECT>& vecQuestObject)
{
    // 블루라이트 차단 안경
    {
        ST_QUEST_OBJECT stObject;
        stObject.nQuestObjectId = 260;
        stObject.strName = "블루라이트 차단 안경";
        stObject.cPatch = 'B';
        stObject.x = 9;
        stObject.y = 12;
        stObject.z = 5;
        stObject.reserved = 0;
        vecQuestObject.push_back(stObject);
    }

    // 안경 케이스
    {
        ST_QUEST_OBJECT stObject;
        stObject.nQuestObjectId = 271;
        stObject.strName = "안경 케이스";
        stObject.cPatch = 'D';
        stObject.x = 8;
        stObject.y = 12;
        stObject.z = 5;
        stObject.reserved = 0;
        vecQuestObject.push_back(stObject);
    }

}

void CQuestInfo::QueryQuest(std::vector<ST_QUEST_DATA>& vecQuest)
{
    // NPC 김민정
    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 155;
        stQuest.StartCondition = ST_FILTER(155, 0x0000, 0x0001);
        stQuest.vecMessages.push_back("아 눈이 너무 뻑뻑하네..화면을 너무 오래 봤나");
        stQuest.vecMessages.push_back("이럴 땐 블루라이트 차단 안경을 써줘야 하는데 어디갔지?");
        stQuest.vecMessages.push_back("아까 서둘러 5층 들어오면서 코너에 부딪쳤는데 그때 안경을 잃어버렸나봐");
        stQuest.vecMessages.push_back("지금 과제를 해야 해서 시간이 없는데 이따 저녁에 또 수업이 있네ㅠㅠ");
        stQuest.vecMessages.push_back("혹시 안경 찾는 걸 도와줄 수 있어?");
        stQuest.vecMessages.push_back("5F에서 [블루라이트 차단 안경]을 찾아보자");
        stQuest.ClearCondition = ST_FILTER(155, 0x0003);
        vecQuest.push_back(stQuest);
    }

    // 블루라이트 차단 안경
    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 260;
        stQuest.StartCondition = ST_FILTER(155, 0x0001, 0x0003);
        stQuest.vecMessages.push_back("[블루라이트 차단 안경]이 바닥에 떨어져 있다.");
        stQuest.vecMessages.push_back("이게 민정이가 찾던 안경인가 보네");
        stQuest.vecMessages.push_back("근데 왜 안경 케이스에 안 담아져 있지?");
        stQuest.vecMessages.push_back("누가 밟았으면 부러졌을 거야");
        stQuest.vecMessages.push_back("[블루라이트 차단 안경]을 획득했습니다.");
        stQuest.vecMessages.push_back("다시 김민정에게로 돌아가자.");
        stQuest.ClearCondition = ST_FILTER(155, 0x0007);
        vecQuest.push_back(stQuest);
    }

    // NPC 김민정
    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 155;
        stQuest.StartCondition = ST_FILTER(155, 0x0003, 0x000F);
        stQuest.vecMessages.push_back("[김민정]에게 [블루라이트 차단 안경]을 건넸다.");
        stQuest.vecMessages.push_back("안경을 찾아줘서 고마워!");
        stQuest.vecMessages.push_back("(안경을 한 번 써보더니) 그런데 안경 알이 조금 더럽네");
        stQuest.vecMessages.push_back("옷으로 닦으면 기스가 날텐데.. 안경닦이가 어딨더라..");
        stQuest.vecMessages.push_back("어? 안경 케이스도 잃어버렸네. 그 안에 안경닦이가 있는데 이를 어쩐담");
        stQuest.vecMessages.push_back("미안하지만 안경 케이스도 찾아봐줄 수 있어?");
        stQuest.vecMessages.push_back("[블루라이트 차단 안경]을 발견한 곳 근처에서 [안경 케이스]를 찾아보자");

        stQuest.ClearCondition = ST_FILTER(155, 0x000F);
        vecQuest.push_back(stQuest);
    }

    // 안경 케이스
    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 271;
        stQuest.StartCondition = ST_FILTER(155, 0x000F, 0x001F);
        stQuest.vecMessages.push_back("[안경 케이스]를 발견했다.");
        stQuest.vecMessages.push_back("안경 있던 곳 바로 옆에 있었는데 아까는 왜 못 봤지?");
        stQuest.vecMessages.push_back("[안경 케이스]를 획득했습니다.");
        stQuest.vecMessages.push_back("혹시 모르니 안경닦이가 케이스 안에 잘 들어있는지 확인해봐야지");
        stQuest.vecMessages.push_back("괜히 없으면 한 번 더 시킬지도 몰라");
        stQuest.vecMessages.push_back("음 잘 들어있네! 그럼 이걸 이제 갖다주면 되겠다.");
        stQuest.vecMessages.push_back("다시 김민정에게로 돌아가자.");
        stQuest.ClearCondition = ST_FILTER(155, 0x001F);
        vecQuest.push_back(stQuest);
    }

    // NPC 김민정
    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 155;
        stQuest.StartCondition = ST_FILTER(155, 0x000F, 0x001F);
        stQuest.vecMessages.push_back("[김민정]에게 [안경 케이스]를 건넸다.");
        stQuest.vecMessages.push_back("번거로웠을 텐데 가져다줘서 정말 고마워!");
        stQuest.vecMessages.push_back("덕분에 오늘 저녁 수업을 잘 마무리할 수 있을 거 같아");
        stQuest.vecMessages.push_back("너도 수업 잘 듣고, BoB 11기 힘내!");
        stQuest.vecMessages.push_back("아차 지금 몇 시지? 오늘까지 제출해야 하는 과제가 몇 개더라");
        stQuest.vecMessages.push_back("(급격하게 생기를 잃고 사라지는 망령이 보인다.)");
        stQuest.ClearCondition = ST_FILTER(155, 0x001F);
        vecQuest.push_back(stQuest);
    }
}
