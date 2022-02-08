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
    npc.strTrack = "���Ȱ���Ʈ��";
    npc.strName = "�츣�̿´����������ֿ�";
    npc.nAge = 24;
    npc.strMBTI = "ESFP�̰� O���̿���";
    npc.cPatch = 'J';
    npc.strMessage = "BoB �� ���о��� �Ѵٰ� ?\n"
        "�ٽ� �� �� �����غ�..";

    npc.strContents1 =
        "����...\n"
        "���θ� ��� BoB ����...?\n"
        "������� �����ϱ�.\n"
        ;

    npc.strContents2 = "���� �����ϳ� ~";
    npc.strContents3 = "�̷��� ������ �� ������Ʈ�� ó���̾���.";
    npc.strContents4 = "BoB �Ⱓ... ���� �����ߴ�..";


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
    stObject.strName = "���� �� ���п���";
    stObject.cPatch = 0;	// ȭ�鿡 �������� �ʰ� ���������� �ʰ� �Ϸ��� 0�� ������ ��
    stObject.x = 36;
    stObject.y = 23;
    stObject.z = 0;
    stObject.reserved = 0;
    vecQuestObject.push_back(stObject);
}

void CQuestInfo::QueryQuest(std::vector<ST_QUEST_DATA>& vecQuest)
{
    // �츣�̿´����������ֿ�
    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 131;
        stQuest.StartCondition = ST_FILTER(131, 0x0000, 0x0001);
        stQuest.vecMessages.push_back("BoB �� ������ �� ���� 3��°..");
        stQuest.vecMessages.push_back("��մ� �������ε� �ð��� �ʹ� ������..");
        stQuest.vecMessages.push_back("�ֳİ�?");
        stQuest.vecMessages.push_back("Ŀ�Ǽ� ���忡 �����ִ� ���п����� ������ �ָ� �������ٰ�");
        stQuest.ClearCondition = ST_FILTER(131, 0x0003);
        vecQuest.push_back(stQuest);
    }
    // ���п���
    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 272;
        stQuest.StartCondition = ST_FILTER(131, 0x0001, 0x0003);
        stQuest.vecMessages.push_back("���忡 ���п����� ������ �ִ�.");
        stQuest.vecMessages.push_back("�̰� ���ϴ°ǰ�?");
        stQuest.vecMessages.push_back("���п����� �� ���� ������ ����?");
        stQuest.vecMessages.push_back("�ϴ� ����������.");
        stQuest.vecMessages.push_back("[���� �� ���п���]�� ȹ���߽��ϴ�.");
        stQuest.vecMessages.push_back("�ٽ� �츣�̿´����������ֿ����Է� ���ư���.");
        stQuest.ClearCondition = ST_FILTER(131, 0x0007);
        vecQuest.push_back(stQuest);
    }
    // �츣�̿´����������ֿ�
    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 131;
        stQuest.StartCondition = ST_FILTER(131, 0x0003, 0x0007);
        stQuest.vecMessages.push_back("��? ���� ���� �������� ���п����ݾ�.");
        stQuest.vecMessages.push_back("[���� �� ���п���]�� �����߽��ϴ�.");
        stQuest.vecMessages.push_back("���� ���� ���� �ۼ� �� �Ұ�.");
        stQuest.vecMessages.push_back("�� ����.. ������..");
        stQuest.vecMessages.push_back("...");
        stQuest.vecMessages.push_back("�� �ƴ�! ���� ���п����� �����߾�.");
        stQuest.vecMessages.push_back("��? �� ������ �ϴ� �ųİ�?");
        stQuest.vecMessages.push_back("���� ���� ���� ���� ���ð� ������ �ʿ��ϴٴ� �� �����ŵ�.");
        stQuest.vecMessages.push_back("���� ���е� ������ BoB �� �� �����غ���~");
        stQuest.ClearCondition = ST_FILTER(131, 0x000F);
        vecQuest.push_back(stQuest);
    }
}
