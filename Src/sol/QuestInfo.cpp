#include "pch.h"
#include "QuestInfo.h"
#include "MiniGame.h"

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
    npc.x = 6;
    npc.y = 11;
    npc.z = 21;
    npc.nNpcID = 153;
    npc.strTrack = "디지털포렌식트랙";
    npc.strName = "채은솔";
    npc.nAge = 25;
    npc.strMBTI = "INFP이고 O형이에요";
    npc.cPatch = 'E';
    npc.strMessage = "버그가 되고 싶지 않으면\n" //캐릭터 소개 및 NPC 말
        "열심히 따라가야 해.\n"
        "여기까지 따라온 나는 뭐냐고?\n"
        "그래도 버그야..";

    npc.vecBigImage.push_back("                     -!**!:;;.                    ");
    npc.vecBigImage.push_back("                  .;$######$##=!                  ");
    npc.vecBigImage.push_back("                 !*=$###@#=$$###=.                ");
    npc.vecBigImage.push_back("                ==!!=#####*$######.               ");
    npc.vecBigImage.push_back("               $$$**=##@##*#$###@@$               ");
    npc.vecBigImage.push_back("              @@###*=$#@#$;$$#@@####              ");
    npc.vecBigImage.push_back("             ##@@#$=$$#@#*~*########=             ");
    npc.vecBigImage.push_back("             @##@@##=$$#=!-:*$$######             ");
    npc.vecBigImage.push_back("            @@@@@@$##=;--,.,-;$######             ");
    npc.vecBigImage.push_back("            @@@@@##*-.     ..,~=#@####            ");
    npc.vecBigImage.push_back("            @@@@##:.       . ,-:*$##@@            ");
    npc.vecBigImage.push_back("           -@@@#$~..       ...,-:*###@            ");
    npc.vecBigImage.push_back("           #@@@$-..       ....,,-:=##@            ");
    npc.vecBigImage.push_back("           $@@#~.       .......,,~;##@-           ");
    npc.vecBigImage.push_back("           #@@=,.,,..........,,--~~$##$           ");
    npc.vecBigImage.push_back("           $@@~.-~~:;;,....,~::::;~;@@$           ");
    npc.vecBigImage.push_back("           $@#,......--...,~~-,,-~~~@#$           ");
    npc.vecBigImage.push_back("            ##,.,,~;~,,...,,,~!:~~~~##!           ");
    npc.vecBigImage.push_back("           ~#$..,::==:,. .,,;#;;!~-~$#-           ");
    npc.vecBigImage.push_back("           -,:.. ..,,,..  ,.,,---,-~*:;           ");
    npc.vecBigImage.push_back("           -,-.   .....   ...,,,,,,~!:$           ");
    npc.vecBigImage.push_back("            ..,.          ........,~!;=           ");
    npc.vecBigImage.push_back("            ; -.          ..   ..,-~:**           ");
    npc.vecBigImage.push_back("           .=,-,.     .   .,.  ..,-:;#*           ");
    npc.vecBigImage.push_back("            =;-,..   ..   .,. ..,-~:=#=           ");
    npc.vecBigImage.push_back("            $$*-,...  .~,,~-,..,--~#@#~           ");
    npc.vecBigImage.push_back("            $$#-,,..   ,-~~-,..,--~#@#;           ");
    npc.vecBigImage.push_back("            $##~,,,...   .,,,,,--~:@@#            ");
    npc.vecBigImage.push_back("            ####-,,,,-....,---,--~$@@#,           ");
    npc.vecBigImage.push_back("            #@@#:,,,-~,,----~~---~@@@#!           ");
    npc.vecBigImage.push_back("            ##@#$~,,,.,...,-----~#@@@#~           ");
    npc.vecBigImage.push_back("           .##@#$$-,...,-~~----~=@@@@#*           ");
    npc.vecBigImage.push_back("           .#@@@#$:~,... ..,,-~!@@@@@#:           ");
    npc.vecBigImage.push_back("           ~#@@@@$-;:,....,,-~~*@@@@@#$           ");
    npc.vecBigImage.push_back("           *#@@@@$,-:;~~----~~~=@@@@@#$.          ");
    npc.vecBigImage.push_back("           *#@@@@$,,-:;;:~~~~~~$@@@@##*!          ");
    npc.vecBigImage.push_back("          ,*#@@@@$,.,-~::~~~~~~$@@#@@*.           ");
    npc.vecBigImage.push_back("          ,~#$###$,..,-~~~~~~~~=@@@@@#~.          ");
    npc.vecBigImage.push_back("          .*,*##@$,...,-~~-~-~~!#@#@@@#:          ");
    npc.vecBigImage.push_back("           .,#$#@*.....,----~~~~####@@@#.         ");
    npc.vecBigImage.push_back("     ...=$#######.......,,-----~=###@###$#=..     ");
    npc.vecBigImage.push_back("   ..*##########*........,,----~;####@@@@######!, ");
    npc.vecBigImage.push_back(" .!$######@####@:..    ...,,,,,--=##@#@@@@@######*");
    npc.vecBigImage.push_back(" $$#######@@@@@##=-        ....,,*@@#@@@@#########");
    npc.vecBigImage.push_back("!$########@@@@#@###$~,        -:#@#@@@@@@#########");
    npc.vecBigImage.push_back("###########@@@#########$:~~:$####@@@@@@@@#########");
    npc.vecBigImage.push_back("###$#######@@@##############@######@@@@@@#########");
    npc.vecBigImage.push_back("###########@@#############@#########@@@@########@@");
    npc.vecBigImage.push_back("#############@############@######@@@#@@##########@");
    npc.vecBigImage.push_back("@###########@##@#####@#####@####@#############@##@");

    npc.vecSmallImage.push_back("         .:$#$=~         ");
    npc.vecSmallImage.push_back("        ~=#@#$##:        ");
    npc.vecSmallImage.push_back("       ~$==#==##@:       ");
    npc.vecSmallImage.push_back("      -@@$=#**$###-      ");
    npc.vecSmallImage.push_back("      :@@$**:-;$##:      ");
    npc.vecSmallImage.push_back("     ,@@$;.   ,:=##,     ");
    npc.vecSmallImage.push_back("     ,@$:    ..,:$@,     ");
    npc.vecSmallImage.push_back("     ,#;,,,..,--~*#,     ");
    npc.vecSmallImage.push_back("     ,=-~;:,.-::~:$,     ");
    npc.vecSmallImage.push_back("     .;.,--..,-~~~!.     ");
    npc.vecSmallImage.push_back("      ..  ......,-~.     ");
    npc.vecSmallImage.push_back("     .~,.    ...,~!.     ");
    npc.vecSmallImage.push_back("     ,=;.  ..,..,!#,     ");
    npc.vecSmallImage.push_back("     ,#=,. .,,,,-=#,     ");
    npc.vecSmallImage.push_back("     ,#=-,,-----~=#,     ");
    npc.vecSmallImage.push_back("     ,##;-,-~~--!##,     ");
    npc.vecSmallImage.push_back("     ,#@=~-.,,-!#@@-     ");
    npc.vecSmallImage.push_back("     ,#@=-~~~-~=#@#!.    ");
    npc.vecSmallImage.push_back("     ;##*,-~~~~*#@#*.    ");
    npc.vecSmallImage.push_back("     ,;#*..,--~;$@##.    ");
    npc.vecSmallImage.push_back("    .=$#*...,--~=@##$==  ");
    npc.vecSmallImage.push_back("  =$$@@#*   ..,,:$#@@##$=");
    npc.vecSmallImage.push_back("$$###@@##$$:  ;##@@@#####");
    npc.vecSmallImage.push_back("#$$####@########@@@@#####");
    npc.vecSmallImage.push_back("@########@###@@##@@######");

    npc.strContents1 = "미작성"; //캐릭터 시작말
    npc.strContents2 = "미작성"; //1단계 통과
    npc.strContents3 = "미작성"; //2단계 통과
    npc.strContents4 = "미작성"; //3단계 통과
    vecNPC.push_back(npc);

}

void CQuestInfo::QueryQuestObject(std::vector<ST_QUEST_OBJECT>& vecQuestObject)
{
    //고장
    {
        ST_QUEST_OBJECT stObject;
        stObject.nQuestObjectId = 283;
        stObject.strName = "라꾸라꾸1";
        stObject.cPatch = 'I';	// 화면에 보이지도 않고 만져지지도 않게 하려면 0을 넣으면 됨
        stObject.x = 4;
        stObject.y = 23;
        stObject.z = 20;
        stObject.reserved = 0;
        vecQuestObject.push_back(stObject);
    }

    //멀쩡
    {
        ST_QUEST_OBJECT stObject;
        stObject.nQuestObjectId = 284;
        stObject.strName = "라꾸라꾸2";
        stObject.cPatch = 'I';	// 화면에 보이지도 않고 만져지지도 않게 하려면 0을 넣으면 됨
        stObject.x = 3;
        stObject.y = 23;
        stObject.z = 20;
        stObject.reserved = 0;
        vecQuestObject.push_back(stObject);
    }
}

void CQuestInfo::QueryQuest(std::vector<ST_QUEST_DATA>& vecQuest)
{/*
    //NPC : 21층, 밤샌은솔
    //사물 : 20층, 라꾸라꾸1, 라꾸라꾸2

    //밤샌은솔
    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 153;
        stQuest.StartCondition = ST_FILTER(153, 0x0000, 0x0001);
        stQuest.vecMessages.push_back("아이고 아이고 허리야, 어디 누울만한 곳 없나..?");
        stQuest.vecMessages.push_back("어엇? 자네는 누군가?");
        stQuest.vecMessages.push_back("아아 이번에 들어온 교육생이구만");
        stQuest.vecMessages.push_back("나는 10기일세, 이거 참 반갑구먼");
        stQuest.vecMessages.push_back("이것도 인연인데 내 특별히 자네에게 BoB 센터에서 전해 내려오는 비밀을 알려주지");
        stQuest.vecMessages.push_back("자네, BoB 센터 27층에 가봤는가?");
        stQuest.vecMessages.push_back("그럼 4강의장이 어디에 있는지도 알겠군");
        stQuest.vecMessages.push_back("그 4강의장에는 비밀이 있지...");
        stQuest.vecMessages.push_back("한 번 상상해보게");
        stQuest.vecMessages.push_back("강의장 문을 열고 주변을 살펴보면 보드.. 탁자.. 책상들이 보일걸세");
        stQuest.vecMessages.push_back("거기서 시선을 더 안쪽으로 따라가보면...");
        stQuest.vecMessages.push_back("....");
        stQuest.vecMessages.push_back("......");
        stQuest.vecMessages.push_back("또 다른 문이 있다네...!");
        stQuest.vecMessages.push_back("그 문 안에는...!.!.!.!.!");
        stQuest.vecMessages.push_back(".....");
        stQuest.vecMessages.push_back(".......");
        stQuest.vecMessages.push_back("라꾸라꾸가 있다네");
        stQuest.vecMessages.push_back("라꾸라꾸 좀 가져다 주겠나? ㅎㅎ");
        stQuest.vecMessages.push_back("아 참, BoB 센터가 게임속으로 옮겨오면서 위치가 좀 달라졌다네");
        stQuest.vecMessages.push_back("20층을 가보게나, 그곳에 4강의장이 있을게야");
        stQuest.ClearCondition = ST_FILTER(153, 0x0003);
        vecQuest.push_back(stQuest);
    }

    //고장난 라꾸라꾸
    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 283;
        stQuest.StartCondition = ST_FILTER(153, 0x0001, 0x0003);
        stQuest.vecMessages.push_back("라꾸라꾸를 발견하였다.");
        stQuest.vecMessages.push_back("얼릉 가져다주자.");
        stQuest.vecMessages.push_back("[라꾸라꾸1]을 획득했습니다.");
        stQuest.vecMessages.push_back("다시 밤샌은솔에게로 돌아가자.");
        stQuest.ClearCondition = ST_FILTER(153, 0x0007);
        vecQuest.push_back(stQuest);
    }

    //밤샌은솔
    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 153;
        stQuest.StartCondition = ST_FILTER(153, 0x0003, 0x0007);
        stQuest.vecMessages.push_back("오, 무거웠을텐데 고맙네");
        stQuest.vecMessages.push_back("꼼지락 꼼지락 (펼치는 중)");
        stQuest.vecMessages.push_back("에잉 이게 아니라네");
        stQuest.vecMessages.push_back("고장난 라꾸라꾸자녀?");
        stQuest.vecMessages.push_back("여기엔 누울 수도 없겠어!");
        stQuest.vecMessages.push_back("다른걸로 다시 가져와 주겠능가?");
        stQuest.ClearCondition = ST_FILTER(153, 0x000F);
        vecQuest.push_back(stQuest);
    }

    //멀쩡한 라꾸라꾸
    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 284;
        stQuest.StartCondition = ST_FILTER(153, 0x0007, 0x000F);
        stQuest.vecMessages.push_back("라꾸라꾸를 발견하였다.");
        stQuest.vecMessages.push_back("얼릉 가져다주자.");
        stQuest.vecMessages.push_back("[라꾸라꾸2]을 획득했습니다.");
        stQuest.vecMessages.push_back("다시 밤샌은솔에게로 돌아가자.");
        stQuest.ClearCondition = ST_FILTER(153, 0x001F);
        vecQuest.push_back(stQuest);
    }

    //밤샌은솔
    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 153;
        stQuest.StartCondition = ST_FILTER(153, 0x000F, 0x001F);
        stQuest.vecMessages.push_back("오, 가져왔구먼");
        stQuest.vecMessages.push_back("꼼지락 꼼지락 (펼치는 중)");
        stQuest.vecMessages.push_back("음, 멀쩡하구먼");
        stQuest.vecMessages.push_back("이제 편히 잘 수 있겠어!");
        stQuest.vecMessages.push_back("고마우니 내 보답을 하겠네");
        stQuest.vecMessages.push_back("자네, 아까전에 내가 말한 BoB 센터에서 전해 내려오는 비밀을 기억하나?");
        stQuest.vecMessages.push_back("그래, BoB 센터 27층 4강의장에 숨겨진 문이 있다는 말이었지");
        stQuest.vecMessages.push_back("이 말은 사실일세");
        stQuest.vecMessages.push_back("센터에서 밤을 새는 일이 생긴다면 먼저 멘토링룸을 가보게");
        stQuest.vecMessages.push_back("라꾸라꾸가 안보인다고? 혹은 부족하다고?");
        stQuest.vecMessages.push_back("그럼 4강의장 안쪽 문을 찾아가게");
        stQuest.vecMessages.push_back("자네가 원하는 것이 있을것이여");
        stQuest.vecMessages.push_back("고장난거 조심하고, 거 있는 매트도 쓰게나");
        stQuest.vecMessages.push_back("은인이 두고간 것이여");
        stQuest.vecMessages.push_back("남은 BoB 생활 응원하겠네");
        stQuest.vecMessages.push_back("건강 잘 챙기고 필드에서 봅세!");
        stQuest.ClearCondition = ST_FILTER(153, 0xFFFF);
        vecQuest.push_back(stQuest);
    }

    //미니게임
    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 153;
        stQuest.StartCondition = ST_FILTER(153, 0x001F, 0xFFFF);
        stQuest.vecMessages.push_back("미니게임~ 퀘스트 보상~");
        stQuest.pClearGame = new CMiniGame();
        vecQuest.push_back(stQuest);
    }*/
}