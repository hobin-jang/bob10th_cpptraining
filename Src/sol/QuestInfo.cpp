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
    npc.x = 4;
    npc.y = 20;
    npc.z = 25;
    npc.nNpcID = 153;
    npc.strTrack = "������������Ʈ��";
    npc.strName = "ä����";
    npc.nAge = 25;
    npc.strMBTI = "INFP�̰� O���̿���";
    npc.cPatch = 'E';
    npc.strMessage = "���װ� �ǰ� ���� ������ ������ ���󰡾� ��.\n" //ĳ���� �Ұ� �� NPC ��
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

    npc.strContents1 = ""; //ĳ���� ���۸�
    npc.strContents2 = ""; //1�ܰ� ���
    npc.strContents3 = ""; //2�ܰ� ���
    npc.strContents4 = ""; //3�ܰ� ���

    vecNPC.push_back(npc);

}

void CQuestInfo::QueryQuestObject(std::vector<ST_QUEST_OBJECT>& vecQuestObject)
{/*
    ST_QUEST_OBJECT stObject;
    stObject.nQuestObjectId = ;
    stObject.strName = "";
    stObject.cPatch = 0;	// ȭ�鿡 �������� �ʰ� ���������� �ʰ� �Ϸ��� 0�� ������ ��
    stObject.x = ;
    stObject.y = ;
    stObject.z = ;
    stObject.reserved = 0;
    vecQuestObject.push_back(stObject);
*/}

void CQuestInfo::QueryQuest(std::vector<ST_QUEST_DATA*>& vecQuest)
{

}
