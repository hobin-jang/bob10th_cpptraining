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
	npc.x = 19;
	npc.y = 21;
	npc.z = 23;
	npc.nNpcID = 142;
	npc.strTrack = "������м�Ʈ��";
	npc.strName = "������";
	npc.nAge = 23;
	npc.strMBTI = "ISFJ�̰� O���Դϴ�.";
	npc.cPatch = 'J';
	npc.strMessage = "BoB���� ������� ���� �� �ķ� dreamhack���� ��� �ֽ��ϴ�. Dreamhack���� melan�� ���� ģ���߰� �ɾ��ּ��� :)";

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

	npc.strContents1 = "���� BoB�� �հ��ϴٴ�!";

	vecNPC.push_back(npc);
}

void CQuestInfo::QueryQuestObject(std::vector<ST_QUEST_OBJECT>& vecQuestObject) {
	ST_QUEST_OBJECT stObject;
	stObject.nQuestObjectId = 264;
	stObject.strName = "���̹� ����";
	stObject.cPatch = 'C';
	stObject.z = 14;
	stObject.x = 3;
	stObject.y = 16;
	stObject.reserved = 0;

	vecQuestObject.push_back(stObject);
}

void CQuestInfo::QueryQuest(std::vector<ST_QUEST_DATA>& vecQuest)
{
	// ������ 
	{
		ST_QUEST_DATA stQuest;
		stQuest.nNpcId = 142;
		stQuest.StartCondition = ST_FILTER(142, 0x0000, 0x0001);
		stQuest.vecMessages.push_back("��... ���Ϳ��� ���� ���ٴ�...");
		stQuest.vecMessages.push_back("�� �ð��� �ɾ� �����ϱ� �Ӹ����� �߳����� ������ ���� ������");
		stQuest.vecMessages.push_back("�㸮�� ���� ���� ������ �� ����;;");
		stQuest.vecMessages.push_back("14�� ȸ�翡 ���̹� ���ڰ� �ִٰ� �ߴ� �� ������..\n���� �������ָ� �ҿ��� ���ڴ�~~~");
		stQuest.ClearCondition = ST_FILTER(142, 0x0003);
		vecQuest.push_back(stQuest);			
	}

	// ���̹� ����
	{
		ST_QUEST_DATA stQuest;
		stQuest.nNpcId = 264;
		stQuest.StartCondition = ST_FILTER(142, 0x0001, 0x0003);
		stQuest.vecMessages.push_back("14���� �ٸ� ȸ�� �ƴϾ�...? ���� ���͵� �Ǵ� �� �³�;");
		stQuest.vecMessages.push_back("�� ���� �������ϰ� �ִ� �� ������...");
		stQuest.vecMessages.push_back("�ٵ� ���� ���ں��� ���ƺ��̱��ϳ�.");
		stQuest.vecMessages.push_back("[14�� �繫���� ���̹� ����]�� ã�Ҵ�!");
		stQuest.vecMessages.push_back("�����񿡰� ����������.");
		stQuest.ClearCondition = ST_FILTER(142, 0x0007);
	}

	// ������
	{
		ST_QUEST_DATA stQuest;
		stQuest.nNpcId = 142;
		stQuest.StartCondition = ST_FILTER(142, 0x0003, 0x0007);
		stQuest.vecMessages.push_back("��¥ �����Գ�!? ���� :)");
		stQuest.vecMessages.push_back("��!! ����� �Ѿ�� �� �ʹ� ���ƤФ�");
		stQuest.vecMessages.push_back("11�� �������̾�??");
		stQuest.vecMessages.push_back("�׷�����!! �հ��� �� ������! �غ��ϴ��� �������?");
		stQuest.vecMessages.push_back("�ٵ� ���� �����̾ߤ���...");
		stQuest.vecMessages.push_back("���� �����鼭 �� �� Ǯ���� �����ϰų� �ʹ� �������� ��!");
		stQuest.vecMessages.push_back("������ �������� �� �ص� �õ� �غ� �� ��ü�� ������ ���� �Ǵ���");
		stQuest.vecMessages.push_back("�ʵ� ��ó�� �ɾ� �ִ� �ð��� �������ٵ� �ǰ� ì�ܰ��鼭 ��!!");
		stQuest.ClearCondition = ST_FILTER(142, 0x000f);
		vecQuest.push_back(stQuest);
	}
}
