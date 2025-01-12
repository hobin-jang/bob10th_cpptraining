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
	npc.x = 20;
	npc.y = 21;
	npc.z = 13;
	npc.nNpcID = 142;
	npc.strTrack = "취약점분석트랙";
	npc.strName = "조준희";
	npc.nAge = 23;
	npc.strMBTI = "ISFJ이고 O형입니다.";
	npc.cPatch = 'J';
	npc.strMessage = "BoB에서 고수들을 보고 난 후로 dreamhack에서 살고 있습니다. Dreamhack에서 melan을 보면 친구추가 걸어주세요 :)";

	npc.vecBigImage.push_back(",,,,,,,,,,,,,,,,,,,,,,,,,,,,,,-,--,,,,,,,-------------------");
	npc.vecBigImage.push_back(",,,,,,,,,,,,,,,,,,,,,,,,,,,,-:;:~----,,,,,,-----------------");
	npc.vecBigImage.push_back(",,,,,,,,,,,,,,,,,,,,,,,,,,-;$##@##=!:--,,,,,----------------");
	npc.vecBigImage.push_back(",,,,,,,,,,,,,,,,,,,,,-::-,:#@@@####$==!,,,,,----------------");
	npc.vecBigImage.push_back(",,,,,,,,,,,,,,,,,,,~=$####$@@@@@#$#$$$$=-,,,,,--------------");
	npc.vecBigImage.push_back(",,,,,,,,,,,,,,,,,,!=$##@@@@@@@@@#$$$$#$$=-,,,,,,------------");
	npc.vecBigImage.push_back(",,,,,,,,,,,,,,,,,===$##@@@#@#@####$$$$$$$=-,,,,,,-----------");
	npc.vecBigImage.push_back(",,,,,,,,,,,,,,,,*$$$##@@@##@#######$$$$$$$;,,,,,,,----------");
	npc.vecBigImage.push_back(",,,,,,,,,,,,,,,;#==#$@#@@##@###$$=$$$$$#$$$-,,,,,,,---------");
	npc.vecBigImage.push_back(",,,,,,,,,,,,,,,#==$$#$@@#$####$=$$=$$$$$##$$,,,,,,,,,-------");
	npc.vecBigImage.push_back(",,,,,,,,,,,,,,~#==$$$#@##$###$=$$$$=#$$$#@##-,,,,,,,,,------");
	npc.vecBigImage.push_back(",,,.,,,,,,,,.,*$$$=$#$$##=###$$$=$$=$###$###;,,,,,,,,,,,----");
	npc.vecBigImage.push_back(".,,,.,.,,,,,,.=$$=#===##$*==$$=$#==$#$#####@#,,,,,,,,,,,----");
	npc.vecBigImage.push_back(",.........,..,=#$$#===$=!;====$$#$$$$########,,,,,,,,,,,,---");
	npc.vecBigImage.push_back(".............,!#$#$$$==;:~===$$$#$$$$##@@@###-,,,,,,,,,,,,--");
	npc.vecBigImage.push_back("..............;####$$=!:~~=$$$$##$##$$##@####-,,,,,,,,,,,,--");
	npc.vecBigImage.push_back("..............;#####$=;~-~$##$#$$$#$$###@####-,,,,,,,,,,,,,-");
	npc.vecBigImage.push_back("..............~#$####*:~--=####$$#$$$#$##@###-,,,,,,,,,,,,,-");
	npc.vecBigImage.push_back("..............-######!:--,!#####$#$$$$#######,,,,,,,,,,,,,,,");
	npc.vecBigImage.push_back("..............,#####$;~-,,-######$$#$#######:,,,,,,,,,,,,,,,");
	npc.vecBigImage.push_back("...............$###$=;~-,.,*####$#$$$$$#####,,,,,,,,,,,,,,,,");
	npc.vecBigImage.push_back("...............-####$!;:---:$$$$$$$$$#$$###*,,,,,,,,,,,,,,,,");
	npc.vecBigImage.push_back("...............,##;#=!!!!;:~:#=###$##$$$###;-,,,,,,,,,,,,,,,");
	npc.vecBigImage.push_back("...............-!#:::~-,,--~~~::!;*=**!*!!#:-,,,,,,,,,,,,,,,");
	npc.vecBigImage.push_back("..............,,-#:--,,-,,,,-,,--------~:;#~~,,,,,,,,,,,,,,,");
	npc.vecBigImage.push_back("..............,,-#~-,~!~$*~,,..,,-=#;*:~~:#-~,,,,,,,,,,,,,,,");
	npc.vecBigImage.push_back("..............,,,$-,.,,.,,,.. .,,~-:-----~=--,,,,,,,,,,,,,,,");
	npc.vecBigImage.push_back("..............,,,!-.   ....    ....,,,.,,~:--,.,,,,,,,,,,,,,");
	npc.vecBigImage.push_back("...............,,--.           .       .,~:--,.,,,,,,,,,,,,,");
	npc.vecBigImage.push_back("...............,,--..          ..     ..,~-~,.,,,,,,,,,,,,,,");
	npc.vecBigImage.push_back("...............,,,-,.          ..     ..-:--...,,,,,,,,,,,,,");
	npc.vecBigImage.push_back(".................,~,..         ...   ..,-:,,....,,.,,,,,,,,,");
	npc.vecBigImage.push_back("..................~,..    .     ..   .,--:......,,..,,,,,,,,");
	npc.vecBigImage.push_back("..................,-,.    .,*,,!,.....,-~,........,,,,,,,,,,");
	npc.vecBigImage.push_back("...................-,..   .,.,,,-....,,-~..........,,,,,,,,,");
	npc.vecBigImage.push_back("...................-,,...............,--~..........,,,,,,,,,");
	npc.vecBigImage.push_back("...................--,..,~,,. .,--:,,,-~~...........,,,,,,,,");
	npc.vecBigImage.push_back("....................-,,.,,~:---:::,.,-~~.............,,,,,,,");
	npc.vecBigImage.push_back("....................~-,,..,.    ,-,,--~-.............,,,,,,,");
	npc.vecBigImage.push_back(".....................-,,...,,,,,-,,--~~..............,,,,,,,");
	npc.vecBigImage.push_back(".....................:-,,....,,,,,,-~~:..............,.,,,,,");
	npc.vecBigImage.push_back(".....................~~-,,.......,,-~::................,,,,,");
	npc.vecBigImage.push_back(".....................~-~-,,.....,,-~:~~................,,,,,");
	npc.vecBigImage.push_back(".....................~--~~-,,,,,--~:~-~.................,,,,");
	npc.vecBigImage.push_back("....................,~---~~----~~~~~---;,................,,,");
	npc.vecBigImage.push_back("....................=-----~-----~~~----~=-...............,,,");
	npc.vecBigImage.push_back("................. ~*$-,,------,--~~--,--**!..............,.,");
	npc.vecBigImage.push_back("................-***~-,,,,----,-----,,,-~***;............,,,");
	npc.vecBigImage.push_back("...............;***!--,,,,,,,,,,---,,,,--!**=*-...........,,");
	npc.vecBigImage.push_back(".............,!!!*!!-,,,,,,,,,,,,,,,,,,,-******;,..........,");
	npc.vecBigImage.push_back("...........-!!!!!**!#-,,,,,,,,,,,,,,,,,,$*****!!!!,.........");
	npc.vecBigImage.push_back("....... .~!!!!!!*!!*##-,,..,,,,,,,,,,,,$#!!****!!!!*-......,");
	npc.vecBigImage.push_back(".......;!!!;!!!!!**!*##*,....,,,,..,,!###**!***!!!!!!!~.....");
	npc.vecBigImage.push_back("....-!!!!;;;;;!!!;**;####=,....,,,-=#####!!*!!*!!!!!!!!!;,..");
	npc.vecBigImage.push_back("..!!!;;;;!;!;!;!!!!;!########$$##########***!!!!!!!!!!!!!!;.");
	npc.vecBigImage.push_back("!!;;;;;;;;;;;!;!;!!*!*###################;!**!*!!!!!!;!!!!!!");
	npc.vecBigImage.push_back(";;!!!!!;;;!;;;;!!!*!;!################$#$!!***!!!!!!!!!!!!!!");
	npc.vecBigImage.push_back("!;;;;;;;;;;;;;;;!;;;!!#$$$##########$$$$=*!***!;;!;;;;;;;!!!");
	npc.vecBigImage.push_back(";;;;;;;;;;;;;;;;!;;!!!#$$$$##########$$$*!!***!!;;!;;;;!;!;!");
	npc.vecBigImage.push_back("!;;;;;;;;;;;;;;;;;!*!!=$$########$##$$$$!!!***;!;;!;;;!!;!;!");
	npc.vecBigImage.push_back(";;;;;;;;;;;;;;;;;!!!!!;#$$$$$####$#$$$$$!!!!!*!!;;;;;;;!!;!!");
	npc.vecBigImage.push_back(";;;;;;;;;;;;;;;!;!!!!!;#$$$$$$##$$$$$$$#!!!!!!!;!;;;;;;!!!!;");
	npc.vecBigImage.push_back(";;;;;;;;;;;;;;;;;!!!;!!$$$$$$##$$$$$$$##*!!!!!!;;;!;;;;!!!!!");

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

	npc.strContents1 = "내가 BoB에 합격하다니!";

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

void CQuestInfo::QueryQuest(std::vector<ST_QUEST_DATA>& vecQuest)
{
	// 조준희 
	{
		ST_QUEST_DATA stQuest;
		stQuest.nNpcId = 142;
		stQuest.StartCondition = ST_FILTER(142, 0x0000, 0x0001);
		stQuest.vecMessages.push_back("와... 센터에서 밤을 새다니...");
		stQuest.vecMessages.push_back("몇 시간을 앉아 있으니까 머리부터 발끝까지 정상인 곳이 없지만");
		stQuest.vecMessages.push_back("허리가 제일 먼저 끊어질 거 같아;;");
		stQuest.vecMessages.push_back("14층 회사에 게이밍 의자가 있다고 했던 거 같은데..\n누가 가져와주면 소원이 없겠다~~~");
		stQuest.ClearCondition = ST_FILTER(142, 0x0003);
		vecQuest.push_back(stQuest);			
	}

	// 게이밍 의자
	{
		ST_QUEST_DATA stQuest;
		stQuest.nNpcId = 264;
		stQuest.StartCondition = ST_FILTER(142, 0x0001, 0x0003);
		stQuest.vecMessages.push_back("14층은 다른 회사 아니야...? 여기 들어와도 되는 거 맞나;");
		stQuest.vecMessages.push_back("나 지금 도둑질하고 있는 거 같은데...");
		stQuest.vecMessages.push_back("근데 센터 의자보다 좋아보이긴하네.");
		stQuest.vecMessages.push_back("[14층 사무실의 게이밍 의자]를 찾았다!");
		stQuest.vecMessages.push_back("조준희에게 가져다주자.");
		stQuest.ClearCondition = ST_FILTER(142, 0x0007);
		vecQuest.push_back(stQuest);
	}

	// 조준희
	{
		ST_QUEST_DATA stQuest;
		stQuest.nNpcId = 142;
		stQuest.StartCondition = ST_FILTER(142, 0x0003, 0x0007);
		stQuest.vecMessages.push_back("진짜 가져왔네!? 고마워 :)");
		stQuest.vecMessages.push_back("엌!! 등받이 넘어가는 거 너무 좋아ㅠㅠ");
		stQuest.vecMessages.push_back("11기 교육생이야??");
		stQuest.vecMessages.push_back("그렇구나!! 합격한 거 축하해! 준비하느라 힘들었지?");
		stQuest.vecMessages.push_back("근데 이제 시작이야ㅋㅋ...");
		stQuest.vecMessages.push_back("교육 받으면서 잘 안 풀려도 포기하거나 너무 슬퍼하지 마!");
		stQuest.vecMessages.push_back("과제는 성공하지 못 해도 시도 해본 것 자체가 도움이 많이 되더라");
		stQuest.vecMessages.push_back("너도 나처럼 앉아 있는 시간이 많아질텐데 건강 챙겨가면서 해!!");
		stQuest.ClearCondition = ST_FILTER(142, 0x000f);
		vecQuest.push_back(stQuest);
	}
}
