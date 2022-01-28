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
}

void CQuestInfo::QueryNpcEx(std::vector<ST_QUEST_NPC_DATA>& vecNPC)
{
    ST_QUEST_NPC_DATA npc;
    npc.x = 4;
    npc.y = 20;
    npc.z = 25;
    npc.nNpcID = 153;
    npc.strTrack = "������������Ʈ��";
    npc.strName = "ä����";
    npc.nAge = 25;
    npc.strMBTI = "INFP�̰� O���̿���";
    npc.cPatch = 'E';
    npc.strMessage = "���װ� �ǰ� ���� ������ ������ ���󰡾� ��.\n"
        "������� ����� ���� ���İ�?\n"
        "�׷��� ���׾�..";

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

    vecNPC.push_back(npc);

}

void CQuestInfo::QueryQuestObject(std::vector<ST_QUEST_OBJECT>& vecQuestObject)
{
}

void CQuestInfo::QueryQuest(std::vector<ST_QUEST_DATA*>& vecQuest)
{
}
