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
	npc.id = 1;
	strcpy_s(npc.szName, 21, "전상현 멘토");
	npc.x = 75;
	npc.y = 23;
	npc.w = 0.5;
	npc.h = 0.5;
	npc.patch = 'p';
	strcpy_s(npc.szGreetMessage, 61, "안녕? C++ 지옥에 온것을 환영한다.");

	npc.vecBuffer.resize(60);

	npc.vecBuffer[0]  = "                   .~:;;!!;:~.                    ";
	npc.vecBuffer[1]  = "                .~*==$$$$$$$$*!;~-.               ";
	npc.vecBuffer[2]  = "               ~=$$$$$$#$#$$$$$$==*~              ";
	npc.vecBuffer[3]  = "             ,!$$$$##########$$$$$$$!.            ";
	npc.vecBuffer[4]  = "            -*$$$#################$$$=,           ";
	npc.vecBuffer[5]  = "           -==$$$$$$###############$$$$~          ";
	npc.vecBuffer[6]  = "          ,*==$$$$$$#################$$=-         ";
	npc.vecBuffer[7]  = "          !=$$$$$$$$$$$$#$############$$$,        ";
	npc.vecBuffer[8]  = "         ~$$$$$$$$$$$$$$$======$#######$$!        ";
	npc.vecBuffer[9]  = "        .=$$$$$$$$=******!!!:!*=$$$$##$$$=,       ";
	npc.vecBuffer[10] = "        :$$$$$$$*!:~::~~~~~--~:;*==$$$$$$$;       ";
	npc.vecBuffer[11] = "        *$###$*;~,......,,...,--:;!=$$###$*       ";
	npc.vecBuffer[12] = "       .=###$!~,.       ......,,-~~:*$$$$$=.      ";
	npc.vecBuffer[13] = "       -$#$$!-.              ...,,--:=$$$$$,      ";
	npc.vecBuffer[14] = "       ~$#$=:,.              .....,,-!$$$$$,      ";
	npc.vecBuffer[15] = "       ~$#$=~..               .....,,~=$$$$,      ";
	npc.vecBuffer[16] = "       ~$$$=-..               .....,,-!$#$$,      ";
	npc.vecBuffer[17] = "       ~$#$!.....             ...,,,,,~=##=.      ";
	npc.vecBuffer[18] = "       -$#$:...--,,,.       ...,-~-,,,,!##*       ";
	npc.vecBuffer[19] = "       .$#=,..-,-~:~:-.   .,~:::~~~-,,,:$#;       ";
	npc.vecBuffer[20] = "        !#!,.,,....,~~-...,-~~~------,,~$$~       ";
	npc.vecBuffer[21] = "        ~#;.....,,,,,--,..---,,,--,,,,,:$=.       ";
	npc.vecBuffer[22] = "        .$;,,..,-~~--~~. .,~~~----,,,-,:$;        ";
	npc.vecBuffer[23] = "         ~:;:,-:;*=;-,-;--;~-~!=*;~--:::!-        ";
	npc.vecBuffer[24] = "         ,;;:---,~:~~,,-.,:--::!::;~::;:~.        ";
	npc.vecBuffer[25] = "        .,~~~-,,,---,.~~ .:~,------~~~-~--.       ";
	npc.vecBuffer[26] = "        ~--,..,...,...,, .,,,.,,,,,,,,,-,-.       ";
	npc.vecBuffer[27] = "        -,-...........,   .,..........,-.,        ";
	npc.vecBuffer[28] = "        ..,.     ......   .............-,,        ";
	npc.vecBuffer[29] = "         .,..        .    ...      ....-,.        ";
	npc.vecBuffer[30] = "         .-..        ..   .,,.     ....,.         ";
	npc.vecBuffer[31] = "          ,,..      ..    ..,,.   ....,,,         ";
	npc.vecBuffer[32] = "         .,,,..    .,.,-,,-,,,.......,,,.         ";
	npc.vecBuffer[33] = "          ,,,...   ..,;!:~;:,,.......,,,          ";
	npc.vecBuffer[34] = "          .,,,...    .-,,,,-,.....,,,,,.          ";
	npc.vecBuffer[35] = "           ,,,...    .....,,,,...,,,,,,           ";
	npc.vecBuffer[36] = "            -,,........ ...,,,,,,,,,,,.           ";
	npc.vecBuffer[37] = "            -,,....,,..,..,,,--,,,,,,,.           ";
	npc.vecBuffer[38] = "            ,,,,.,,,--~~~~~:~~-,,,,,,,            ";
	npc.vecBuffer[39] = "            ,-,,,,---,....,,-~--,,,,,-            ";
	npc.vecBuffer[40] = "            .-,,,,,.... ...,,,,,,,,,-,            ";
	npc.vecBuffer[41] = "             --,,,,..,-~~~~,,.,,,,,--             ";
	npc.vecBuffer[42] = "             .~-,,,,,..,--,,,,,,,,,-,             ";
	npc.vecBuffer[43] = "              ,--,,,,,..,,,,,,,,,,-~~             ";
	npc.vecBuffer[44] = "               ~-,,........,,,,,,-~~!,            ";
	npc.vecBuffer[45] = "              :~~~,,..,,,,,,,,,--~~-:*.           ";
	npc.vecBuffer[46] = "             :=-~:~-,,,--------~~~---#:           ";
	npc.vecBuffer[47] = "            ~$*,-~;:~~~~~~~~~~::~---,=$~          ";
	npc.vecBuffer[48] = "           -$#!,--~;;!!!!;;;;;::~-,,,*$=.         ";
	npc.vecBuffer[49] = "          ,=##;.---~:;!***!;:~~--,-,,!#$*.        ";
	npc.vecBuffer[50] = "       -;=$$##;.,---~~:;;;:-----,-,..!###=;.      ";
	npc.vecBuffer[51] = "    .:*$$$####!..,--~~~~~~-,------..,*####$=;,    ";
	npc.vecBuffer[52] = "  -;$$$$######*...---~~~--,------,..,=######$$*:, ";
	npc.vecBuffer[53] = ";*$$$##$######$,...,---~~~-----~,...,#########$$$=";
	npc.vecBuffer[54] = "$$$$##$$#######:....,--~~~~--~-,....-#############";
	npc.vecBuffer[55] = "$$$$##$$#######*.  ..,---~---~,.....:#############";
	npc.vecBuffer[56] = "$$$############$-    ..,-----.......!#############";
	npc.vecBuffer[57] = "$$$#############:      .,--,.......,=#############";
	npc.vecBuffer[58] = "$###############*.      ,~..    ...-$#############";
	npc.vecBuffer[59] = "$###############$-.    .:!~.   ....;##############";

	vecNPC.push_back(npc);
}

void CQuestInfo::QueryNpcEx(std::vector<ST_QUEST_NPC_DATA>& vecNPC)
{
	ST_QUEST_NPC_DATA npc;
	npc.Pos.x = 4;
	npc.Pos.y = 21;
	npc.Pos.z = 1;
	npc.nNpcID = 128;
	npc.strTrack = "보안개발트랙";
	npc.strName = "어린 전상현";
	npc.nAge = 28;
	npc.strMBTI = "ENFJ이고 B형이에요";
	npc.cPatch = 'P';
	npc.strMessage = "게임 보안을 해보고 싶다면 날 찾아와. 근데 C++이 어렵다고? 뭘 잘 모르는구만. 누구든 21일이면 마스터 할 수 있지. 일단은 물리학과 생물학을 먼저 배워보자꾸나.";
	npc.vecBuffer;	// 위엣것 참조.
	vecNPC.push_back(npc);
}

void CQuestInfo::QueryQuest(std::vector<ST_QUEST_DATA*>& vecQuest)
{
}
