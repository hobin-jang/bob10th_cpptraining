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
	strcpy_s(npc.szName, 21, "조준희 멘티");
	npc.patch = 'p';
	strcpy_s(npc.szGreetMessage, 61, "취약점 분석 트랙 조준희입니다!");

	npc.vecBuffer.resize(64);
	npc.vecBuffer[0] =	",,,,,,,,,,,,,,,,,,,,,,,,,,,,,,-,--,,,,,,,-------------------";
	npc.vecBuffer[1] =	",,,,,,,,,,,,,,,,,,,,,,,,,,,,-:;:~----,,,,,,-----------------";
	npc.vecBuffer[2] =	",,,,,,,,,,,,,,,,,,,,,,,,,,-;$##@##=!:--,,,,,----------------";
	npc.vecBuffer[3] =	",,,,,,,,,,,,,,,,,,,,,-::-,:#@@@####$==!,,,,,----------------";
	npc.vecBuffer[4] =	",,,,,,,,,,,,,,,,,,,~=$####$@@@@@#$#$$$$=-,,,,,--------------";
	npc.vecBuffer[5] =	",,,,,,,,,,,,,,,,,,!=$##@@@@@@@@@#$$$$#$$=-,,,,,,------------";
	npc.vecBuffer[6] =	",,,,,,,,,,,,,,,,,===$##@@@#@#@####$$$$$$$=-,,,,,,-----------";
	npc.vecBuffer[7] =	",,,,,,,,,,,,,,,,*$$$##@@@##@#######$$$$$$$;,,,,,,,----------";
	npc.vecBuffer[8] =	",,,,,,,,,,,,,,,;#==#$@#@@##@###$$=$$$$$#$$$-,,,,,,,---------";
	npc.vecBuffer[9] =	",,,,,,,,,,,,,,,#==$$#$@@#$####$=$$=$$$$$##$$,,,,,,,,,-------";
	npc.vecBuffer[10] = ",,,,,,,,,,,,,,~#==$$$#@##$###$=$$$$=#$$$#@##-,,,,,,,,,------";
	npc.vecBuffer[11] = ",,,.,,,,,,,,.,*$$$=$#$$##=###$$$=$$=$###$###;,,,,,,,,,,,----";
	npc.vecBuffer[12] = ".,,,.,.,,,,,,.=$$=#===##$*==$$=$#==$#$#####@#,,,,,,,,,,,----";
	npc.vecBuffer[13] = ",.........,..,=#$$#===$=!;====$$#$$$$########,,,,,,,,,,,,---";
	npc.vecBuffer[14] = ".............,!#$#$$$==;:~===$$$#$$$$##@@@###-,,,,,,,,,,,,--";
	npc.vecBuffer[15] = "..............;####$$=!:~~=$$$$##$##$$##@####-,,,,,,,,,,,,--";
	npc.vecBuffer[16] = "..............;#####$=;~-~$##$#$$$#$$###@####-,,,,,,,,,,,,,-";
	npc.vecBuffer[17] = "..............~#$####*:~--=####$$#$$$#$##@###-,,,,,,,,,,,,,-";
	npc.vecBuffer[18] = "..............-######!:--,!#####$#$$$$#######,,,,,,,,,,,,,,,";
	npc.vecBuffer[19] = "..............,#####$;~-,,-######$$#$#######:,,,,,,,,,,,,,,,";
	npc.vecBuffer[20] = "...............$###$=;~-,.,*####$#$$$$$#####,,,,,,,,,,,,,,,,";
	npc.vecBuffer[21] = "...............-####$!;:---:$$$$$$$$$#$$###*,,,,,,,,,,,,,,,,";
	npc.vecBuffer[22] = "...............,##;#=!!!!;:~:#=###$##$$$###;-,,,,,,,,,,,,,,,";
	npc.vecBuffer[23] = "...............-!#:::~-,,--~~~::!;*=**!*!!#:-,,,,,,,,,,,,,,,";
	npc.vecBuffer[24] = "..............,,-#:--,,-,,,,-,,--------~:;#~~,,,,,,,,,,,,,,,";
	npc.vecBuffer[25] = "..............,,-#~-,~!~$*~,,..,,-=#;*:~~:#-~,,,,,,,,,,,,,,,";
	npc.vecBuffer[26] = "..............,,,$-,.,,.,,,.. .,,~-:-----~=--,,,,,,,,,,,,,,,";
	npc.vecBuffer[27] = "..............,,,!-.   ....    ....,,,.,,~:--,.,,,,,,,,,,,,,";
	npc.vecBuffer[28] = "...............,,--.           .       .,~:--,.,,,,,,,,,,,,,";
	npc.vecBuffer[29] = "...............,,--..          ..     ..,~-~,.,,,,,,,,,,,,,,";
	npc.vecBuffer[30] = "...............,,,-,.          ..     ..-:--...,,,,,,,,,,,,,";
	npc.vecBuffer[31] = ".................,~,..         ...   ..,-:,,....,,.,,,,,,,,,";
	npc.vecBuffer[32] = "..................~,..    .     ..   .,--:......,,..,,,,,,,,";
	npc.vecBuffer[33] = "..................,-,.    .,*,,!,.....,-~,........,,,,,,,,,,";
	npc.vecBuffer[34] = "...................-,..   .,.,,,-....,,-~..........,,,,,,,,,";
	npc.vecBuffer[35] = "...................-,,...............,--~..........,,,,,,,,,";
	npc.vecBuffer[36] = "...................--,..,~,,. .,--:,,,-~~...........,,,,,,,,";
	npc.vecBuffer[37] = "....................-,,.,,~:---:::,.,-~~.............,,,,,,,";
	npc.vecBuffer[38] = "....................~-,,..,.    ,-,,--~-.............,,,,,,,";
	npc.vecBuffer[39] = ".....................-,,...,,,,,-,,--~~..............,,,,,,,";
	npc.vecBuffer[40] = ".....................:-,,....,,,,,,-~~:..............,.,,,,,";
	npc.vecBuffer[41] = ".....................~~-,,.......,,-~::................,,,,,";
	npc.vecBuffer[42] = ".....................~-~-,,.....,,-~:~~................,,,,,";
	npc.vecBuffer[43] = ".....................~--~~-,,,,,--~:~-~.................,,,,";
	npc.vecBuffer[44] = "....................,~---~~----~~~~~---;,................,,,";
	npc.vecBuffer[45] = "....................=-----~-----~~~----~=-...............,,,";
	npc.vecBuffer[46] = "................. ~*$-,,------,--~~--,--**!..............,.,";
	npc.vecBuffer[47] = "................-***~-,,,,----,-----,,,-~***;............,,,";
	npc.vecBuffer[48] = "...............;***!--,,,,,,,,,,---,,,,--!**=*-...........,,";
	npc.vecBuffer[49] = ".............,!!!*!!-,,,,,,,,,,,,,,,,,,,-******;,..........,";
	npc.vecBuffer[50] = "...........-!!!!!**!#-,,,,,,,,,,,,,,,,,,$*****!!!!,.........";
	npc.vecBuffer[51] = "....... .~!!!!!!*!!*##-,,..,,,,,,,,,,,,$#!!****!!!!*-......,";
	npc.vecBuffer[52] = ".......;!!!;!!!!!**!*##*,....,,,,..,,!###**!***!!!!!!!~.....";
	npc.vecBuffer[53] = "....-!!!!;;;;;!!!;**;####=,....,,,-=#####!!*!!*!!!!!!!!!;,..";
	npc.vecBuffer[54] = "..!!!;;;;!;!;!;!!!!;!########$$##########***!!!!!!!!!!!!!!;.";
	npc.vecBuffer[55] = "!!;;;;;;;;;;;!;!;!!*!*###################;!**!*!!!!!!;!!!!!!";
	npc.vecBuffer[56] = ";;!!!!!;;;!;;;;!!!*!;!################$#$!!***!!!!!!!!!!!!!!";
	npc.vecBuffer[57] = "!;;;;;;;;;;;;;;;!;;;!!#$$$##########$$$$=*!***!;;!;;;;;;;!!!";
	npc.vecBuffer[58] = ";;;;;;;;;;;;;;;;!;;!!!#$$$$##########$$$*!!***!!;;!;;;;!;!;!";
	npc.vecBuffer[59] = "!;;;;;;;;;;;;;;;;;!*!!=$$########$##$$$$!!!***;!;;!;;;!!;!;!";
	npc.vecBuffer[60] = ";;;;;;;;;;;;;;;;;!!!!!;#$$$$$####$#$$$$$!!!!!*!!;;;;;;;!!;!!";
	npc.vecBuffer[61] = ";;;;;;;;;;;;;;;!;!!!!!;#$$$$$$##$$$$$$$#!!!!!!!;!;;;;;;!!!!;";
	npc.vecBuffer[62] = ";;;;;;;;;;;;;;;;;!!!;!!$$$$$$##$$$$$$$##*!!!!!!;;;!;;;;!!!!!";
	vecNPC.push_back(npc);
}

void CQuestInfo::QueryNpcEx(std::vector<ST_QUEST_NPC_DATA>& vecNPC)
{
	ST_QUEST_NPC_DATA npc;
	npc.x = 19;
	npc.y = 21;
	npc.z = 23;
	npc.nNpcID = 142;
	npc.strTrack = "취약점분석트랙";
	npc.strName = "조준희";
	npc.nAge = 23;
	npc.strMBTI = "ISFJ이고 O형입니다.";
	npc.cPatch = 'J';
	npc.strMessage = "BoB에서 고수들을 보고 난 후로 dreamhack에서 살고 있습니다. Dreamhack에서 melan을 보면 친구추가 걸어주세요 :)";

	npc.vecSmallImage.resize(25);
	npc.vecSmallImage[0]  =	",,,,,,,,,,,,---,,,-------";
	npc.vecSmallImage[1]  = ",,,,,,,,,*~$@#$*~,-------";
	npc.vecSmallImage[2]  = ",,,,,,,;$@@@@#$$$:,,-----";
	npc.vecSmallImage[3]  = ",,,,,,;=#@#@#$$$$$-,,----";
	npc.vecSmallImage[4]  = ",,..,,#$####$#=###~,,,,--";
	npc.vecSmallImage[5]  = ",,,,,.$$=$*==$$###$,,,,--";
	npc.vecSmallImage[6]  = "......##$;:$$$$$###,,,,,-";
	npc.vecSmallImage[7]  = "......###~-$#$$####,,,,,,";
	npc.vecSmallImage[8]  = "......=#=~,*$$$$$#~,,,,,,";
	npc.vecSmallImage[9]  = "......-$!;:~#$#$$$~,,,,,,";
	npc.vecSmallImage[10] = "......,;-~*,.,*:~!~,,,,,,";
	npc.vecSmallImage[11] = "......,~.    ...,;-,,,,,,";
	npc.vecSmallImage[12] = ".......~.    .  .:,,,,,,,";
	npc.vecSmallImage[13] = "........,    . .-....,,,,";
	npc.vecSmallImage[14] = "........,....,.,-....,,,,";
	npc.vecSmallImage[15] = "........-,,-~-,--.....,,,";
	npc.vecSmallImage[16] = ".........-...,,~.......,,";
	npc.vecSmallImage[17] = ".........-,,.,-~.......,,";
	npc.vecSmallImage[18] = "........-----~~-~.......,";
	npc.vecSmallImage[19] = ".......!:,,-,--,-!,.....,";
	npc.vecSmallImage[20] = ".....-!*~,,,,,,,-**!-...,";
	npc.vecSmallImage[21] = ".. ~;!!!$!,,,,,~*!*!!!~..";
	npc.vecSmallImage[22] = "-:!;;!!;!##*~:$##!*!!;*!-";
	npc.vecSmallImage[23] = "!;;;;;;!;$$#####$**!!;!!!";
	npc.vecSmallImage[24] = ";;;;;;;;!=$###$$$!*!;!!!!";


	vecNPC.push_back(npc);
}

void CQuestInfo::QueryQuestObject(std::vector<ST_QUEST_OBJECT>& vecQuestObject) {
	ST_QUEST_OBJECT stObject;
	stObject.nQuestObjectId = 264;
	stObject.strName = "게이밍 의자";
	stObject.cPatch = 'C';
	stObject.z = 14;
	stObject.x = 3;
	stObject.y = 16;
	stObject.reserved = 0;

	vecQuestObject.push_back(stObject);
}

void CQuestInfo::QueryQuest(std::vector<ST_QUEST_DATA*>& vecQuest)
{
}
