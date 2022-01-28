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
    npc.strTrack = "디지털포렌식트랙";
    npc.strName = "채은솔";
    npc.nAge = 25;
    npc.strMBTI = "INFP이고 O형이에요";
    npc.cPatch = 'E';
    npc.strMessage = "버그가 되고 싶지 않으면 열심히 따라가야 해.\n"
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

    vecNPC.push_back(npc);

}

void CQuestInfo::QueryQuestObject(std::vector<ST_QUEST_OBJECT>& vecQuestObject)
{
}

void CQuestInfo::QueryQuest(std::vector<ST_QUEST_DATA*>& vecQuest)
{
}
