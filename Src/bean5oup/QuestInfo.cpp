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
	{
		ST_QUEST_NPC_DATA npc;
		npc.x = 21;
		npc.y = 21;
		npc.z = 2;
		npc.nNpcID = 145;
		npc.strTrack = "������м�Ʈ��";
		npc.strName = "������";
		npc.nAge = 22;
		npc.strMBTI = "�� ���� 7r �� ��";
		npc.cPatch = 'B';
		npc.strMessage = "B0B ���� ����1 7r �� ��\n"
			"�� ���� 7r �� ��\n"
			"7r �� ��\n"
			"��¥�� ����;�� �����ּ�������������������� ���� ��Ż ����!";

		npc.vecBigImage.push_back("...............................................~..,,..");
		npc.vecBigImage.push_back("...............................................~..,!,.");
		npc.vecBigImage.push_back("...................................................,*.");
		npc.vecBigImage.push_back(".............,,,!=*-,,..............................,.");
		npc.vecBigImage.push_back("............,::::::::;~,..,----------~................");
		npc.vecBigImage.push_back("..........,~:::::::::::~.;:;:::::::::!~,............!.");
		npc.vecBigImage.push_back("..........-::::::::::::::;::::::::::::::..........,-,.");
		npc.vecBigImage.push_back(".........,:::::::::::::::=;:::::::::::::$.......,=....");
		npc.vecBigImage.push_back(".........~:::::::::::::::;!:::::::::::::*......~!.....");
		npc.vecBigImage.push_back(".........*::::::::::::::::;;:::::::::**;:~:-...~,.....");
		npc.vecBigImage.push_back(".........;:::;$!::::::::!!=!$::::::::;;:::;:..........");
		npc.vecBigImage.push_back(".........::::::::::::::::::*;::::::::::::::::,........");
		npc.vecBigImage.push_back(".......,;:::::::::!;;;*;::::;::::::::::::::::!........");
		npc.vecBigImage.push_back("......~:!::::::!-,-,,~@#$*$$;:::::::;*::::::::~,......");
		npc.vecBigImage.push_back(".....,:::::::! .     *@@@@@@@,*::;*::;::::::;;!~......");
		npc.vecBigImage.push_back(".....;::::::::-      ~==@@@@@ ,:::::;$@##@@@. -~......");
		npc.vecBigImage.push_back("....-::::::::::-.    .*#@@@@* .~~~~ =@@@@@##.   ......");
		npc.vecBigImage.push_back("....;::::::::::::-,    -~~~~  .     ,@*@@@#!    ......");
		npc.vecBigImage.push_back("...-:::::::::::::::!.        *       *@@@@*   ,-......");
		npc.vecBigImage.push_back("...:::::::::::::::::::;-,,-!;;;              .!~......");
		npc.vecBigImage.push_back("...~:::::::::::::;::::::::;;;::;-,,,,.,,,,,;!!~.......");
		npc.vecBigImage.push_back("..~;:::::::::::::;::::::::;;;:::::;;;:;:::;;;~........");
		npc.vecBigImage.push_back("..-::::::::::::::::::::::;*:::::::::::::::::-.........");
		npc.vecBigImage.push_back("..-:::::::::::::::::;;:::::::;;:$!:~~~~~:::~~=........");
		npc.vecBigImage.push_back("..-:::::::::::::::;;**;;;;;;;!!~~~~~~:;;;;::~,........");
		npc.vecBigImage.push_back("..~::::::::::::::;;~~~~~~~~~;~:~~:!*;;!;;!!-,.........");
		npc.vecBigImage.push_back("..~::::::::::::::;~~~~::!*!~:~:*;;;;;;;~,.,...........");
		npc.vecBigImage.push_back("..-::::::::::::::;;~~~!$:::;#;::::::::;-..............");
		npc.vecBigImage.push_back("..-::::::::::::::::::;**;$*;!::::::-..................");
		npc.vecBigImage.push_back("..-::::::::::::::::::;**;$*;!::::::-..................");
		npc.vecBigImage.push_back("..-::::::::::::::::::;**;$*;!::::::-..................");
		npc.vecBigImage.push_back("...............................................~..,,..");

		npc.vecSmallImage.push_back("            ...          ");
		npc.vecSmallImage.push_back("      .~~~~*==:          ");
		npc.vecSmallImage.push_back("          ,!~;:          ");
		npc.vecSmallImage.push_back("        .:*~ !!,,,.      ");
		npc.vecSmallImage.push_back("      .~;*- .**:::,      ");
		npc.vecSmallImage.push_back("      .;:.   ;:          ");
		npc.vecSmallImage.push_back("             :~          ");
		npc.vecSmallImage.push_back("        ...~!*~          ");
		npc.vecSmallImage.push_back("          ,*@!.          ");
		npc.vecSmallImage.push_back("        -**:-.           ");
		npc.vecSmallImage.push_back("      ,=!;@;             ");
		npc.vecSmallImage.push_back("     ;*.. ..:$~          ");
		npc.vecSmallImage.push_back("                         ");
		npc.vecSmallImage.push_back("   .=@@@@@@@@@@@@:       ");
		npc.vecSmallImage.push_back("                         ");
		npc.vecSmallImage.push_back("            ;:           ");
		npc.vecSmallImage.push_back("        ,,,.;:           ");
		npc.vecSmallImage.push_back("      .:==*:!!,,--       ");
		npc.vecSmallImage.push_back("      -=   ;#*!;!!.      ");
		npc.vecSmallImage.push_back("      ,!-  :!,           ");
		npc.vecSmallImage.push_back("       -:.,-,            ");
		npc.vecSmallImage.push_back("         ..              ");


		npc.strContents1 = "�� ���� 7r �� ��";
		npc.strContents2 = "�� ���� 7r �� ��";
		npc.strContents3 = "�� ���� 7r �� ��";
		npc.strContents4 = "�� ���� 7r �� ��";

		vecNPC.push_back(npc);
	}
}

void CQuestInfo::QueryQuestObject(std::vector<ST_QUEST_OBJECT>& vecQuestObject)
{
	ST_QUEST_OBJECT stObject;
	stObject.nQuestObjectId = 268;
	stObject.strName = "����";
	stObject.cPatch = 'G';	// ȭ�鿡 �������� �ʰ� ���������� �ʰ� �Ϸ��� 0�� ������ ��
	stObject.x = 19;
	stObject.y = 21;
	stObject.z = 2;
	stObject.reserved = 0;
	vecQuestObject.push_back(stObject);
}

void CQuestInfo::QueryQuest(std::vector<ST_QUEST_DATA>& vecQuest)
{
	// ������
	{
		ST_QUEST_DATA stQuest;
		stQuest.nNpcId = 145;
		stQuest.StartCondition = ST_FILTER(145, 0x0000, 0x0001);
		stQuest.vecMessages.push_back("�� ���� 7r �� ��");
		stQuest.vecMessages.push_back("���� ���� ������ ���� �� ���� �����ְھ�?");
		stQuest.ClearCondition = ST_FILTER(145, 0x0003);
		vecQuest.push_back(stQuest);
	}

	// ����
	{
		ST_QUEST_DATA stQuest;
		stQuest.nNpcId = 268;
		stQuest.StartCondition = ST_FILTER(145, 0x0001, 0x0003);
		stQuest.vecMessages.push_back("�� ���� 7r �� ��");
		stQuest.vecMessages.push_back("�ٽ� �����ƿ��Է� 7r �� ��.");
		stQuest.ClearCondition = ST_FILTER(145, 0x0007);
		vecQuest.push_back(stQuest);
	}

	// ������
	{
		ST_QUEST_DATA stQuest;
		stQuest.nNpcId = 145;
		stQuest.StartCondition = ST_FILTER(145, 0x0003, 0x0007);
		stQuest.vecMessages.push_back("�� 0 �� �� ���� 7r �� ��");
		stQuest.vecMessages.push_back("��¥�� ����;�� �����ּ�������������������� ���� ��Ż ����!");
		stQuest.ClearCondition = ST_FILTER(145, 0x0007);
		vecQuest.push_back(stQuest);
	}
}
