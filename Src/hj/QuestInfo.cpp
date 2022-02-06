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
	npc.x = 12;
	npc.y = 4;
	npc.z = 18;
	npc.nNpcID = 149;
	npc.strTrack = "������ǰ����Ʈ��";
	npc.strName = "�޲ٴ� ����";
	npc.nAge = 27;
	npc.strMBTI = "ENTP, O���Դϴ�";
	npc.cPatch = 'P';
	npc.strMessage = "BoB�� ���� �˾ư��� �ͳ���..?";

	npc.vecBigImage.push_back(",,,,,,..............,,,~*;----");
	npc.vecBigImage.push_back(".....................,-~!*,---");
	npc.vecBigImage.push_back(".........,,~:---,,....,   .---");
	npc.vecBigImage.push_back(".......~!====*=*!*:,..   .,---");
	npc.vecBigImage.push_back("......,*=$$$##*!*=*:-..,,,,---");
	npc.vecBigImage.push_back("......!=*$$=$$$=;$*!:-,,,,,,--");
	npc.vecBigImage.push_back(".....-**=*;=**$===*=:-.,,,,---");
	npc.vecBigImage.push_back(".....$=$$$==*=$$*=*$=!.,,,,,,-");
	npc.vecBigImage.push_back(".....*$=$$$##$$#$**$==,.,,,,,-");
	npc.vecBigImage.push_back(".....=####@##$$$#$$$#$~..,,,,-");
	npc.vecBigImage.push_back("....,$@@@@@@@#@#@#@###;...,,,,");
	npc.vecBigImage.push_back(".....$@@@@@@@#$$@#@@@#;....,,,");
	npc.vecBigImage.push_back(".....$@#@#$##*!=#*$##$-.....,,");
	npc.vecBigImage.push_back(".....,@=*=#*!:-;!!~:*=......,,");
	npc.vecBigImage.push_back("......#-~::~:~,~:*:~--......,,");
	npc.vecBigImage.push_back("......$---~--,.-~~---;......,,");
	npc.vecBigImage.push_back(",,,,,,;-,,,,,..,,---,......,,,");
	npc.vecBigImage.push_back("......-~-,,-,..,-,,,,.. ...,,,");
	npc.vecBigImage.push_back(".......~---~:~---,,-..,,..,,,,");
	npc.vecBigImage.push_back(";......,~-,,~;--,,-,..,,***;;~");
	npc.vecBigImage.push_back(";......,~---~---,--, ...!****~");
	npc.vecBigImage.push_back("-.......~~~~~--~~--..  .:===$~");
	npc.vecBigImage.push_back(",.......-:~~~~----,.   .....,.");
	npc.vecBigImage.push_back("..,.-:;!::~---,,--. ... ......");
	npc.vecBigImage.push_back("----~!;$:~::~~--~-    .    ...");
	npc.vecBigImage.push_back("~-~~:;;=:~~;!:;:--,  ...... ..");
	npc.vecBigImage.push_back("~-~~~;;!:~~~:;:~-~~..... .....");
	npc.vecBigImage.push_back("~~:~~~;;:~~::~--~;~~-.........");
	npc.vecBigImage.push_back("~~:!~~;:~-~:~--:;!!:-,... ....");
	npc.vecBigImage.push_back("~~~:*~::,,--~~~;!*:~::-...   .");
	npc.vecBigImage.push_back("~~--;~~:,,,~;!!**:~~~~-~,..  .");
	npc.vecBigImage.push_back("~~~~~~:::,~==$*!~;!~~--~-,   .");
	npc.vecBigImage.push_back("~~~~;!~~:;***!*=**~~-~----.  .");
	npc.vecBigImage.push_back("~::~:!!~:!;;;!;;;::-~~---~~...");
	npc.vecBigImage.push_back("~:~:~:**~;:;!;~:~;~,~-,-~---. ");
	npc.vecBigImage.push_back("::~:~:;;*;:;;:~~:~--~--~----..");
	npc.vecBigImage.push_back("::::~::~;:;;::::~-~~--~~-----,");
	npc.vecBigImage.push_back("::;:::~:~;:~!::;~~~--:~-~--,~,");
	npc.vecBigImage.push_back(";:::::~~~!~;!:;~~!~~~~~----~,-");
	npc.vecBigImage.push_back(":;:::::~~~:!;;:~!!:-;:--~-~-~-");

	npc.vecSmallImage.push_back(".. .. ..............     ");
	npc.vecSmallImage.push_back("........!~--~; .....     ");
	npc.vecSmallImage.push_back("......!--------!....     ");
	npc.vecSmallImage.push_back(".. ~- ; -- - ::--------. ");
	npc.vecSmallImage.push_back(". .:; -; ******!----:.   ");
	npc.vecSmallImage.push_back(".... - !*; *******-- - ..");
	npc.vecSmallImage.push_back("..., -*~..; *----.       ");
	npc.vecSmallImage.push_back("...!- . .   . ..; --; .  ");
	npc.vecSmallImage.push_back("...; -.. .  ...; --:.    ");
	npc.vecSmallImage.push_back("...!- .!*. ..!.; --:.    ");
	npc.vecSmallImage.push_back("..., -*!..!*; ~--~       ");
	npc.vecSmallImage.push_back(".... - ....~:, ..-- - .. ");
	npc.vecSmallImage.push_back("...., ; ..; , ...~--...  ");
	npc.vecSmallImage.push_back("...... - !- ., * -- - . .");
	npc.vecSmallImage.push_back(".......!------~....      ");
	npc.vecSmallImage.push_back("... ...--...-- - ~....   ");
	npc.vecSmallImage.push_back(".......~- ... - :--....  ");
	npc.vecSmallImage.push_back("........, -..--~, ....   ");
	npc.vecSmallImage.push_back("......... - ~-- - ...... ");
	npc.vecSmallImage.push_back("..........; ~; .......   ");

	npc.strContents1 =
		"�ݰ����� ! ���� BoB 10�� ������ǰ����Ʈ�� �������̶�� �ؿ�. \n"
		"BoB ���忡 ���� ���� ȯ���ؿ�~~ \n"
		"�������� BoB ž�� �����ǵ�, \n"
		"(�츮��~~~) ��������~? \n"
		"�˼��ؿ�..! �ٻ����� �־ ��� ����� ��ȴٿ;� �� �� ���ƿ�..\n"
		"ž�� �����鼭 ����� �κ��� ������ ��޷� �����ּ���!! \n"
		"���� ž�� ���������� ����Ե��� �� �˰� ������~ \n"
		"�׷� �̸�..!!\n"
		;
	npc.strContents2 = "..";
	npc.strContents3 = "..";
	npc.strContents4 = "..";

	vecNPC.push_back(npc);
}

void CQuestInfo::QueryQuestObject(std::vector<ST_QUEST_OBJECT>& vecQuestObject)
{
	ST_QUEST_OBJECT stObject;
	stObject.nQuestObjectId = 275;
	stObject.strName = "���� ���� �ڷ�";
	stObject.cPatch = 0;
	stObject.x = 12;
	stObject.y = 17;
	stObject.z = 17;
	stObject.reserved = 0;
	vecQuestObject.push_back(stObject);
}

void CQuestInfo::QueryQuest(std::vector<ST_QUEST_DATA>& vecQuest)
{
	// �޲ٴ� ����
	{
		ST_QUEST_DATA stQuest;
		stQuest.StartCondition = ST_FILTER(149, 0x0000, 0x0001);
		stQuest.vecMessages.push_back("�ȳ� ? ���Ⱑ ������Ʈ �ܰ� ���ΰ� �˰����� ?");
		stQuest.vecMessages.push_back("������Ʈ �ܰ迡�� ū ������ �̷� ģ������ ���Ƽ� BoB�� ������ �Ҹ��ٰ� ��..!");
		stQuest.vecMessages.push_back("�� ��.. 17�� ������ �޸����� �ΰ� �Գ�..");
		stQuest.vecMessages.push_back("������ ���� Ȥ�� �������� �� �־� ?");
		stQuest.vecMessages.push_back("�������شٸ� ���� ������Ʈ �ϴµ� �߿��ϴٰ� ������ �κ� 3������ �˷��ٰ� !");
		stQuest.vecMessages.push_back("�׷� ��ٸ���..!");
		stQuest.ClearCondition = ST_FILTER(149, 0x0003);
		vecQuest.push_back(stQuest);
	}

	// �޲ٴ� ������ �޸���
	{
		ST_QUEST_DATA stQuest;
		stQuest.StartCondition = ST_FILTER(275, 0x0001, 0x0003);
		stQuest.vecMessages.push_back("ã�Ҵ�.. �޲ٴ� ������ �޸���..!");
		stQuest.vecMessages.push_back("�� �޲ٴ� �������� ������ ���� !");
		stQuest.vecMessages.push_back("[�޸���]�� ȹ���߽��ϴ�.");
		stQuest.ClearCondition = ST_FILTER(275, 0x0007);
		vecQuest.push_back(stQuest);
	}

	// �޲ٴ� ���� ����
	{
		ST_QUEST_DATA stQuest;
		stQuest.StartCondition = ST_FILTER(149, 0x0003, 0x0007);
		stQuest.vecMessages.push_back("��.. ���� ������ ��°�? ���п� ���� �� �������� �� �ְھ� ���� !");
		stQuest.vecMessages.push_back("�� �´� 3���� �˷��ֱ�� ����.");
		stQuest.vecMessages.push_back("�� �� ������Ʈ ���� �����ϸ鼭");
		stQuest.vecMessages.push_back("[�������� ����], [���� �ϰ���� ����], [������ �´� PL ����]");
		stQuest.vecMessages.push_back("�� 3������ �߿��ϴٰ� �����߾� !");
		stQuest.vecMessages.push_back("�� 3������ ������ų �� �ֵ��� ����غ� �׷� �̸�..!");
		stQuest.ClearCondition = ST_FILTER(149, 0x000F);
		vecQuest.push_back(stQuest);
	}
}