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
	strcpy_s(npc.szName, 21, "������ ��Ƽ");
	npc.patch = 'p';
	strcpy_s(npc.szGreetMessage, 61,"BoB ����Ʈ���� ���Ű� ȯ���մϴ�.^^");

	npc.vecBuffer.resize(40);

	npc.vecBuffer[0] = ",,,,,,..............,,,~*;----";
	npc.vecBuffer[1] = ".....................,-~!*,---";
	npc.vecBuffer[2] = ".........,,~:---,,....,   .---";
	npc.vecBuffer[3] = ".......~!====*=*!*:,..   .,---";
	npc.vecBuffer[4] = "......,*=$$$##*!*=*:-..,,,,---";
	npc.vecBuffer[5] = "......!=*$$=$$$=;$*!:-,,,,,,--";
	npc.vecBuffer[6] = ".....-**=*;=**$===*=:-.,,,,---";
	npc.vecBuffer[7] = ".....$=$$$==*=$$*=*$=!.,,,,,,-";
	npc.vecBuffer[8] = ".....*$=$$$##$$#$**$==,.,,,,,-";
	npc.vecBuffer[9] = ".....=####@##$$$#$$$#$~..,,,,-";
	npc.vecBuffer[10] = "....,$@@@@@@@#@#@#@###;...,,,,";
	npc.vecBuffer[11] = ".....$@@@@@@@#$$@#@@@#;....,,,";
	npc.vecBuffer[12] = ".....$@#@#$##*!=#*$##$-.....,,";
	npc.vecBuffer[13] = ".....,@=*=#*!:-;!!~:*=......,,";
	npc.vecBuffer[14] = "......#-~::~:~,~:*:~--......,,";
	npc.vecBuffer[15] = "......$---~--,.-~~---;......,,";
	npc.vecBuffer[16] = ",,,,,,;-,,,,,..,,---,......,,,";
	npc.vecBuffer[17] = "......-~-,,-,..,-,,,,.. ...,,,";
	npc.vecBuffer[18] = ".......~---~:~---,,-..,,..,,,,";
	npc.vecBuffer[19] = ";......,~-,,~;--,,-,..,,***;;~";
	npc.vecBuffer[20] = ";......,~---~---,--, ...!****~";
	npc.vecBuffer[21] = "-.......~~~~~--~~--..  .:===$~";
	npc.vecBuffer[22] = ",.......-:~~~~----,.   .....,.";
	npc.vecBuffer[23] = "..,.-:;!::~---,,--. ... ......";
	npc.vecBuffer[24] = "----~!;$:~::~~--~-    .    ...";
	npc.vecBuffer[25] = "~-~~:;;=:~~;!:;:--,  ...... ..";
	npc.vecBuffer[26] = "~-~~~;;!:~~~:;:~-~~..... .....";
	npc.vecBuffer[27] = "~~:~~~;;:~~::~--~;~~-.........";
	npc.vecBuffer[28] = "~~:!~~;:~-~:~--:;!!:-,... ....";
	npc.vecBuffer[29] = "~~~:*~::,,--~~~;!*:~::-...   .";
	npc.vecBuffer[30] = "~~--;~~:,,,~;!!**:~~~~-~,..  .";
	npc.vecBuffer[31] = "~~~~~~:::,~==$*!~;!~~--~-,   .";
	npc.vecBuffer[32] = "~~~~;!~~:;***!*=**~~-~----.  .";
	npc.vecBuffer[33] = "~::~:!!~:!;;;!;;;::-~~---~~...";
	npc.vecBuffer[34] = "~:~:~:**~;:;!;~:~;~,~-,-~---. ";
	npc.vecBuffer[35] = "::~:~:;;*;:;;:~~:~--~--~----..";
	npc.vecBuffer[36] = "::::~::~;:;;::::~-~~--~~-----,";
	npc.vecBuffer[37] = "::;:::~:~;:~!::;~~~--:~-~--,~,";
	npc.vecBuffer[38] = ";:::::~~~!~;!:;~~!~~~~~----~,-";
	npc.vecBuffer[39] = ":;:::::~~~:!;;:~!!:-;:--~-~-~-";

	vecNPC.push_back(npc);
}

void CQuestInfo::QueryNpcEx(std::vector<ST_QUEST_NPC_DATA>& vecNPC)
{
	ST_QUEST_NPC_DATA npc;
	npc.Pos.x = 10;
	npc.Pos.y = 6;
	npc.Pos.z = 23;
	npc.nNpcID = 149;
	npc.strTrack = "������ǰ����Ʈ��";
	npc.strName = "������";
	npc.nAge = 27;
	npc.strMBTI = "ENTP�̰� O���Դϴ�";
	npc.cPatch = 'P';
	npc.strMessage = "���� �� ����Ե�� ���� �߾� �������� ����ϸ�, ��� ��� ª���� ª�� ������Ʈ�� �� ������ �� �� �����ſ���.";
	npc.vecBuffer;
	vecNPC.push_back(npc);
}

void CQuestInfo::QueryQuest(std::vector<ST_QUEST_DATA*>& vecQuest)
{
}