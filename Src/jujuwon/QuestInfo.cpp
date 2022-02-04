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
    npc.x = 18;
    npc.y = 13;
    npc.z = 1;
    npc.nNpcID = 131;
    npc.strTrack = "보안개발트랙";
    npc.strName = "헤르미온느가꿈인이주원";
    npc.nAge = 24;
    npc.strMBTI = "ESFP이고 O형이에요";
    npc.cPatch = 'J';
    npc.strMessage = "BoB 를 휴학없이 한다고 ?\n"
        "다시 한 번 생각해봐..";

    npc.strContents1 =
        "여긴...\n"
        "말로만 듣던 BoB 센터...?\n"
        "공기부터 스근하군.\n"
        ;

    npc.strContents2 = "전직 스근하네 ~";
    npc.strContents3 = "이렇게 스근한 팀 프로젝트는 처음이었어.";
    npc.strContents4 = "BoB 기간... 정말 스근했다..";


    npc.vecBigImage.push_back("                                 r1@@@@@@@@@@6G4kw6@@@@kk%@@@@@@@n!                       ");
    npc.vecBigImage.push_back("                               h@@@@kF11oy*kVwEAHHHW@@@@@@k2F2k@@@@@@c`                   ");
    npc.vecBigImage.push_back("                             L@@31F*4dGGGd3w4VVkkkkkP*4@@@@@@UUEw6@@@@@@'                 ");
    npc.vecBigImage.push_back("                         `!!v@624Hd4kkkkkkkVV444kkkkVV4Pk@@@@@wkdG@@@@@@@@(               ");
    npc.vecBigImage.push_back("                      )V@@@@@@&W4kVV4ww444VVVV44kkkkkkkkVPH@@@@6P444@@@@@@@@.             ");
    npc.vecBigImage.push_back("                    s@@@@U6W@@Gw33wE3wE33444VVVVVVVkkkkPkVkk@@@@@PVd4@@@@@@@@<            ");
    npc.vecBigImage.push_back("                  ,@@@@@@@@@@6HGE3dd@@Gdd33444VVVVVVkkkkkkkVk@@@@@k46W@@@@@@@@*           ");
    npc.vecBigImage.push_back("                 -@@@@@@@@@@@@6HHHHH@@@HHGG33ww4VVVVVVVkkkkkw3@@@@W4H@@@@@@@@@@Q          ");
    npc.vecBigImage.push_back("                 @@@@@@@@@@@@@@WW6%0@@@@WH6HGdd344444444VVV4wG0@@@@d6@@@@@@@@@@@n         ");
    npc.vecBigImage.push_back("                *@@@@@@@@@@@@@@@@@@@@@@@H@W@@HAGE33333EEEEEEdHH@@@@@W@@@@@@@@@@@@_        ");
    npc.vecBigImage.push_back("               `@@@@@@@@@@@@@@@@@@@@@@&@d@W@@0WH%HHHHHGHHHHH6&@@@@@@@@@@@@@@@@@@@@        ");
    npc.vecBigImage.push_back("               c@@@@@@@@@@@@@@@@@@@@@@n@W@@@@@@W@@WWW@WW@@@@@@@@@@@@@@@@@@@@@@@@@@,       ");
    npc.vecBigImage.push_back("               @@@@@@@@@@@@@@@@@@@@@@@f@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@c       ");
    npc.vecBigImage.push_back("               @@@@@@@@@@@@@@@@@@@@@@0_Q@@@@6@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@C       ");
    npc.vecBigImage.push_back("               @@@@@@@@@@@@@@@@@@@@@@K-E@@@@I@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@%       ");
    npc.vecBigImage.push_back("               @@@@@@@@@@@@@@@@@@@@@@2.2@@@0>@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@V       ");
    npc.vecBigImage.push_back("               @@@@@@@@@@@@@@@@@@@@@@u.v@@@6f@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@7       ");
    npc.vecBigImage.push_back("               @@@@@@@@@@@%>F6&Q0#&%F'''+C2+!)x*ykkE$$$$EVyP%&KQ@@K6K@@@@@@@@@@@@@+       ");
    npc.vecBigImage.push_back("               ?@@@@@@Ky7<'-(&@@@@@@@6?f!'r_,,;frrf((+LLcY%Q@@@@@@@@kun7x1#@@@@@@@-       ");
    npc.vecBigImage.push_back("               :@@@@#<('!_-+Gu](rrff)L]><:,,........,-::Lv?>]+)frr+n62';;'<7@@@@@@        ");
    npc.vecBigImage.push_back("                @@@@6)('_:-:,.'`` ``''''.,,,,.'''''..,,,,'''``````'..--:_;f(4@@@@@        ");
    npc.vecBigImage.push_back("                C@@@o(('_:-,.`'',:.'''',-,,,,.'''''.,,,,-,.'.....''`',-:_;ffI@@@@f        ");
    npc.vecBigImage.push_back("                 @@@C(('_:-.:<vK3x@@QIf-.---,.''``'.,---.,;?7W@@@Qh>'.,-_;f)c@@@#         ");
    npc.vecBigImage.push_back("               ._-@@v+(;_::Lv:f@' @@@@@@n;::-.'```'.,::_c6@P @@@@@s.<?!-:;f)]K@k!_        ");
    npc.vecBigImage.push_back("               r?r;:_cf'_--,  +@@@@@@@@?,]f!:,'`  `.-!']:'@@@@@@@@x  `:,_;fL(.Lf<<        ");
    npc.vecBigImage.push_back("               ,:(+;'));_:,`` `4@@@@@P7`  _:,'`   `',-_`  u@@@@@Fu- ``.-_;r],_))_:        ");
    npc.vecBigImage.push_back("               ',-fc_')'_:-,'`  '.,.``   ``''`     ``'```  .,,.`   `',-:_!+:.L)_,,        ");
    npc.vecBigImage.push_back("                ,-r<?:,'_:-,.'``                                  ``.,-:_;!,L[f:,         ");
    npc.vecBigImage.push_back("                   ``                                                       ``            ");
    npc.vecBigImage.push_back("         ,'``````````````````````````                                                  '  ");
    npc.vecBigImage.push_back("         ..``````````````````````                                                      `  ");
    npc.vecBigImage.push_back("         ..'''''''''``````````````````````````                                        ``  ");
    npc.vecBigImage.push_back("         ',''''''''''''''````````````````````````````                                 `   ");
    npc.vecBigImage.push_back("          -'...'.'''''''''''''''''''```````````````````````````                       '   ");
    npc.vecBigImage.push_back("          :............'..'''''''''''''''''`````````````````````````````              .   ");
    npc.vecBigImage.push_back("          _.,......................''''''''''''''''''`````````````````````````````  ` .   ");
    npc.vecBigImage.push_back("          _,,,,,,,..,...................'...''''''`''''''''''''`````````````````````` ,   ");
    npc.vecBigImage.push_back("          _,-,,,,,,,,,,,,,,..,,.................'  ...'''''''''''''''''```````````````,   ");
    npc.vecBigImage.push_back("          !--------,,,,,,,,,,,,,,,.,,,.......`       .......''''''''''''''''''''''```',   ");
    npc.vecBigImage.push_back("          !:-----------------,,,,,,,,,,,,,,.        `.................''.''''''''''''',   ");
    npc.vecBigImage.push_back("          __-:-----------------------,,,,,,,        .,,,.......................'..'''.,   ");
    npc.vecBigImage.push_back("          :!::::::::::----------------------.        .,,,,,,,,,,,,,.................',.   ");
    npc.vecBigImage.push_back("          -;:_::_:::::::::::::-:-------------,``'` `,-,-,,,,,,,,,,,,,,,,,............-'   ");
    npc.vecBigImage.push_back("          ,':___________:::::::::::::::::----:--:--:------------,,,,,,,,,,,,,,,,,,,,.:'   ");
    npc.vecBigImage.push_back("          'r_!________________:__:_:::::::::::---------------------------,,-,,,,,,,,._`   ");
    npc.vecBigImage.push_back("          `f_!__________________________:_::::::::::::::::--------------------------,_'   ");
    npc.vecBigImage.push_back("          _'!!!!!!!!!!!!!!!_____________________:::::::::::::::::::-:----------------_!   ");
    npc.vecBigImage.push_back("         '_';!!!!!!!!!!!!!!!!!!!____!______________________::::::::::::::::::--------!,-  ");
    npc.vecBigImage.push_back("         -,f;!!!!!!!!!!!!!!!!!!!!!!!!__________________________:___::::::::::::::::-:;... ");
    npc.vecBigImage.push_back("        -..r;;;;;;;;;;;;;;;;;;;;;;;;;;;;!!!!!!!!!!!!!!!!!!!!!!!!!!!__________________!.`: ");



    npc.vecSmallImage.push_back("     ~##===========#==$$#.    ");
    npc.vecSmallImage.push_back("    :$$$===========$$==$#*    ");
    npc.vecSmallImage.push_back("   .#$$$==$$========#$=###.   ");
    npc.vecSmallImage.push_back("   ;#$$$==$$========$$=$##$   ");
    npc.vecSmallImage.push_back("   #$$#$$=$#=$======$#$$###   ");
    npc.vecSmallImage.push_back("   ####$$$$==#======$#$$###~  ");
    npc.vecSmallImage.push_back("   #####$$$;$$$$$$$$$#$####!  ");
    npc.vecSmallImage.push_back("   #####$$$:$*$$$$$$$#$####!  ");
    npc.vecSmallImage.push_back("   ######$$-$;$$$$$$#######!  ");
    npc.vecSmallImage.push_back("   ###=!$#=,!~!*===$#$=$###:  ");
    npc.vecSmallImage.push_back("   ##;~~===*~,---~====*:!##.  ");
    npc.vecSmallImage.push_back("   ##~--...,,,..,,,...,-~##   ");
    npc.vecSmallImage.push_back("   :$~-,,;-,,,..,,,-;,,-~=#   ");
    npc.vecSmallImage.push_back("   -*~-~$~@=-,..,-!@@=~-~*:   ");
    npc.vecSmallImage.push_back("   ~-~--:@@$-,..,,=@@~,,~~~.  ");
    npc.vecSmallImage.push_back("   ,:~-.,!;.... ...*:,.-~~,   ");
    npc.vecSmallImage.push_back(" ,,.,......................., ");
    npc.vecSmallImage.push_back(".-------------,,,,,,,,,,,,,,,.");
    npc.vecSmallImage.push_back(" ------------------,,,,,,,,,, ");
    npc.vecSmallImage.push_back(" --------------------,-,,,,,- ");
    npc.vecSmallImage.push_back(" ~~~~------------------------ ");
    npc.vecSmallImage.push_back(" ~~~~~~~~~-----,------------- ");
    npc.vecSmallImage.push_back(" ~~~~~~~~~~~~-,.------------~ ");
    npc.vecSmallImage.push_back(" :~~~~~~~~~~~-,,-~~~--------~ ");
    npc.vecSmallImage.push_back(" :~~~~~~~~~~~~-,-~~~~~~~~---~ ");

    vecNPC.push_back(npc);
}

void CQuestInfo::QueryQuestObject(std::vector<ST_QUEST_OBJECT>& vecQuestObject)
{
    ST_QUEST_OBJECT stObject;
    stObject.nQuestObjectId = 272;
    stObject.strName = "쓰다 만 휴학원서";
    stObject.cPatch = 0;	// 화면에 보이지도 않고 만져지지도 않게 하려면 0을 넣으면 됨
    stObject.x = 36;
    stObject.y = 23;
    stObject.z = 0;
    stObject.reserved = 0;
    vecQuestObject.push_back(stObject);
}

void CQuestInfo::QueryQuest(std::vector<ST_QUEST_DATA>& vecQuest)
{
    // 헤르미온느가꿈인이주원
    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 131;
        stQuest.StartCondition = ST_FILTER(131, 0x0000, 0x0001);
        stQuest.vecMessages.push_back("BoB 를 시작한 지 벌써 3달째..");
        stQuest.vecMessages.push_back("재밌는 교육들인데 시간이 너무 부족해..");
        stQuest.vecMessages.push_back("왜냐고?");
        stQuest.vecMessages.push_back("커피숍 담장에 끼어있는 휴학원서를 가져다 주면 설명해줄게");
        stQuest.ClearCondition = ST_FILTER(131, 0x0003);
        vecQuest.push_back(stQuest);
    }
    // 휴학원서
    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 272;
        stQuest.StartCondition = ST_FILTER(131, 0x0001, 0x0003);
        stQuest.vecMessages.push_back("담장에 휴학원서가 끼워져 있다.");
        stQuest.vecMessages.push_back("이걸 말하는건가?");
        stQuest.vecMessages.push_back("휴학원서가 왜 여기 끼워져 있지?");
        stQuest.vecMessages.push_back("일단 가져가보자.");
        stQuest.vecMessages.push_back("[쓰다 만 휴학원서]를 획득했습니다.");
        stQuest.vecMessages.push_back("다시 헤르미온느가꿈인이주원에게로 돌아가자.");
        stQuest.ClearCondition = ST_FILTER(131, 0x0007);
        vecQuest.push_back(stQuest);
    }
    // 헤르미온느가꿈인이주원
    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 131;
        stQuest.StartCondition = ST_FILTER(131, 0x0003, 0x0007);
        stQuest.vecMessages.push_back("엇? 내가 쓰다 날려버린 휴학원서잖아.");
        stQuest.vecMessages.push_back("[쓰다 만 휴학원서]를 전달했습니다.");
        stQuest.vecMessages.push_back("정말 고마워 마저 작성 좀 할게.");
        stQuest.vecMessages.push_back("슉 슈슉.. 슈슈슉..");
        stQuest.vecMessages.push_back("...");
        stQuest.vecMessages.push_back("다 됐다! 드디어 휴학원서를 제출했어.");
        stQuest.vecMessages.push_back("응? 왜 휴학을 하는 거냐고?");
        stQuest.vecMessages.push_back("많이 얻어가고 싶을 수록 선택과 집중이 필요하다는 걸 느꼈거든.");
        stQuest.vecMessages.push_back("이제 휴학도 했으니 BoB 에 더 집중해볼까~");
        stQuest.ClearCondition = ST_FILTER(131, 0x000F);
        vecQuest.push_back(stQuest);
    }
}
