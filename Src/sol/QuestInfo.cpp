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
	strcpy_s(npc.szName, 21, "채은솔");
	npc.patch = 'p';
	strcpy_s(npc.szGreetMessage, 61, "C++을 배워봅시다~");

	npc.vecBuffer.resize(50);

    npc.vecBuffer[0]  = "                     -!**!:;;.                    ";
    npc.vecBuffer[1]  = "                  .;$######$##=!                  ";
    npc.vecBuffer[2]  = "                 !*=$###@#=$$###=.                ";
    npc.vecBuffer[3]  = "                ==!!=#####*$######.               ";
    npc.vecBuffer[4]  = "               $$$**=##@##*#$###@@$               ";
    npc.vecBuffer[5]  = "              @@###*=$#@#$;$$#@@####              ";
    npc.vecBuffer[6]  = "             ##@@#$=$$#@#*~*########=             ";
    npc.vecBuffer[7]  = "             @##@@##=$$#=!-:*$$######             ";
    npc.vecBuffer[8]  = "            @@@@@@$##=;--,.,-;$######             ";
    npc.vecBuffer[9]  = "            @@@@@##*-.     ..,~=#@####            ";
    npc.vecBuffer[10] = "            @@@@##:.       . ,-:*$##@@            ";
    npc.vecBuffer[11] = "           -@@@#$~..       ...,-:*###@            ";
    npc.vecBuffer[12] = "           #@@@$-..       ....,,-:=##@            ";
    npc.vecBuffer[13] = "           $@@#~.       .......,,~;##@-           ";
    npc.vecBuffer[14] = "           #@@=,.,,..........,,--~~$##$           ";
    npc.vecBuffer[15] = "           $@@~.-~~:;;,....,~::::;~;@@$           ";
    npc.vecBuffer[16] = "           $@#,......--...,~~-,,-~~~@#$           ";
    npc.vecBuffer[17] = "            ##,.,,~;~,,...,,,~!:~~~~##!           ";
    npc.vecBuffer[18] = "           ~#$..,::==:,. .,,;#;;!~-~$#-           ";
    npc.vecBuffer[19] = "           -,:.. ..,,,..  ,.,,---,-~*:;           ";
    npc.vecBuffer[20] = "           -,-.   .....   ...,,,,,,~!:$           ";
    npc.vecBuffer[21] = "            ..,.          ........,~!;=           ";
    npc.vecBuffer[22] = "            ; -.          ..   ..,-~:**           ";
    npc.vecBuffer[23] = "           .=,-,.     .   .,.  ..,-:;#*           ";
    npc.vecBuffer[24] = "            =;-,..   ..   .,. ..,-~:=#=           ";
    npc.vecBuffer[25] = "            $$*-,...  .~,,~-,..,--~#@#~           ";
    npc.vecBuffer[26] = "            $$#-,,..   ,-~~-,..,--~#@#;           ";
    npc.vecBuffer[27] = "            $##~,,,...   .,,,,,--~:@@#            ";
    npc.vecBuffer[28] = "            ####-,,,,-....,---,--~$@@#,           ";
    npc.vecBuffer[29] = "            #@@#:,,,-~,,----~~---~@@@#!           ";
    npc.vecBuffer[30] = "            ##@#$~,,,.,...,-----~#@@@#~           ";
    npc.vecBuffer[31] = "           .##@#$$-,...,-~~----~=@@@@#*           ";
    npc.vecBuffer[32] = "           .#@@@#$:~,... ..,,-~!@@@@@#:           ";
    npc.vecBuffer[33] = "           ~#@@@@$-;:,....,,-~~*@@@@@#$           ";
    npc.vecBuffer[34] = "           *#@@@@$,-:;~~----~~~=@@@@@#$.          ";
    npc.vecBuffer[35] = "           *#@@@@$,,-:;;:~~~~~~$@@@@##*!          ";
    npc.vecBuffer[36] = "          ,*#@@@@$,.,-~::~~~~~~$@@#@@*.           ";
    npc.vecBuffer[37] = "          ,~#$###$,..,-~~~~~~~~=@@@@@#~.          ";
    npc.vecBuffer[38] = "          .*,*##@$,...,-~~-~-~~!#@#@@@#:          ";
    npc.vecBuffer[39] = "           .,#$#@*.....,----~~~~####@@@#.         ";
    npc.vecBuffer[40] = "     ...=$#######.......,,-----~=###@###$#=..     ";
    npc.vecBuffer[41] = "   ..*##########*........,,----~;####@@@@######!, ";
    npc.vecBuffer[42] = " .!$######@####@:..    ...,,,,,--=##@#@@@@@######*";
    npc.vecBuffer[43] = " $$#######@@@@@##=-        ....,,*@@#@@@@#########";
    npc.vecBuffer[44] = "!$########@@@@#@###$~,        -:#@#@@@@@@#########";
    npc.vecBuffer[45] = "###########@@@#########$:~~:$####@@@@@@@@#########";
    npc.vecBuffer[46] = "###$#######@@@##############@######@@@@@@#########";
    npc.vecBuffer[47] = "###########@@#############@#########@@@@########@@";
    npc.vecBuffer[48] = "#############@############@######@@@#@@##########@";
    npc.vecBuffer[49] = "@###########@##@#####@#####@####@#############@##@";

	vecNPC.push_back(npc);
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
    npc.strMessage = "버그가 되고 싶지 않으면 열심히 따라가야 해, 여기까지 따라온 나는 뭐냐고? 그래도 버그야";

    npc.vecBuffer.resize(25);             
                         
    npc.vecBuffer[0]  = "         .:$#$=~         ";
    npc.vecBuffer[1]  = "        ~=#@#$##:        ";
    npc.vecBuffer[2]  = "       ~$==#==##@:       ";
    npc.vecBuffer[3]  = "      -@@$=#**$###-      ";
    npc.vecBuffer[4]  = "      :@@$**:-;$##:      ";
    npc.vecBuffer[5]  = "     ,@@$;.   ,:=##,     ";
    npc.vecBuffer[6]  = "     ,@$:    ..,:$@,     ";
    npc.vecBuffer[7]  = "     ,#;,,,..,--~*#,     ";
    npc.vecBuffer[8]  = "     ,=-~;:,.-::~:$,     ";
    npc.vecBuffer[9]  = "     .;.,--..,-~~~!.     ";
    npc.vecBuffer[10] = "      ..  ......,-~.     ";
    npc.vecBuffer[11] = "     .~,.    ...,~!.     ";
    npc.vecBuffer[12] = "     ,=;.  ..,..,!#,     ";
    npc.vecBuffer[13] = "     ,#=,. .,,,,-=#,     ";
    npc.vecBuffer[14] = "     ,#=-,,-----~=#,     ";
    npc.vecBuffer[15] = "     ,##;-,-~~--!##,     ";
    npc.vecBuffer[16] = "     ,#@=~-.,,-!#@@-     ";
    npc.vecBuffer[17] = "     ,#@=-~~~-~=#@#!.    ";
    npc.vecBuffer[18] = "     ;##*,-~~~~*#@#*.    ";
    npc.vecBuffer[19] = "     ,;#*..,--~;$@##.    ";
    npc.vecBuffer[20] = "    .=$#*...,--~=@##$==  ";
    npc.vecBuffer[21] = "  =$$@@#*   ..,,:$#@@##$=";
    npc.vecBuffer[22] = "$$###@@##$$:  ;##@@@#####";
    npc.vecBuffer[23] = "#$$####@########@@@@#####";
    npc.vecBuffer[24] = "@########@###@@##@@######";

    vecNPC.push_back(npc);

}

void CQuestInfo::QueryQuest(std::vector<ST_QUEST_DATA*>& vecQuest)
{
}
