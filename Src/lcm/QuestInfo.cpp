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
    npc.x = 22;
    npc.y = 8;
    npc.z = 5;
    npc.nNpcID = 148;
    npc.strTrack = "���Ȱ���Ʈ��";
    npc.strName = "��â��";
    npc.nAge = 25;
    npc.strMBTI = "ISTJ�̰� B���̿���";
    npc.cPatch = 'L';
    npc.strMessage = "BoB���� ���°Ŵ� �θƻ��̷���.\n"
        "���������� �����ؼ� �پ��� Ʈ�� ������ ģ�����߰ڴ�.";

        
    npc.vecBigImage.push_back("@@@@@@@@@@@@((@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");
    npc.vecBigImage.push_back("@@@@@@@@@@@@((@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");
    npc.vecBigImage.push_back("@@@@@@@@@@@@((@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");
    npc.vecBigImage.push_back("@@@@@@@@(........@@@@@@@@@@@@@@@@@........@@@@@@@@");
    npc.vecBigImage.push_back("@@@@@@@@(........@@@@@@@@@@@@@@@@@........@@@@@@@@");
    npc.vecBigImage.push_back("@@@@@@@@(........@@@@@@@@@@@@@@@@@........@@@@@@@@");
    npc.vecBigImage.push_back("@@@@@@@@...., ((((*..............., ((((.....@@@@@");
    npc.vecBigImage.push_back("@@@@@@@@...., ((((*..............., ((((.....@@@@@");
    npc.vecBigImage.push_back("@@@@@@@@ / ...((.......................((..., @@@@");
    npc.vecBigImage.push_back("@@@@@@@@ / ...((.......................((..., @@@@");
    npc.vecBigImage.push_back("@@@@@@@@ / ...((.......................((..., @@@@");
    npc.vecBigImage.push_back("@@@@@@@@ / ...((.......................((..., @@@@");
    npc.vecBigImage.push_back("@@@@@@@@@@@(............................@@@@@@(@@@");
    npc.vecBigImage.push_back("@@@@@@@@@@@(............................@@@@@@(@@@");
    npc.vecBigImage.push_back("@@@@@@@@@@@(............................@@@@@@(@@@");
    npc.vecBigImage.push_back("@@@@@@@@@@@(............................@@@@@@(@@@");
    npc.vecBigImage.push_back("@@@@@@@@@@@.......               .......@@(@((@@@@");
    npc.vecBigImage.push_back("@@@@@@@@@@@.......               .......@@(@((@@@@");
    npc.vecBigImage.push_back("@@@@@@@@@@@.......               .......@@(@((@@@@");
    npc.vecBigImage.push_back("@@@@@@@@@@@.......               .......@@(@((@@@@");
    npc.vecBigImage.push_back("@@@@@@@@@@@....    @@          @@  .....@@@@(@@@@@");
    npc.vecBigImage.push_back("@@@@@@@@@@@....    @@          @@  .....@@@@(@@@@@");
    npc.vecBigImage.push_back("@@@@@@@@@@@....    @@          @@  .....@@@@(@@@@@");
    npc.vecBigImage.push_back("@@@@@@@@@@@....*, (, (, , ....@@@@@@@@@@@@@)@@@@(@");
    npc.vecBigImage.push_back("@@@@@@@@@@@....*, (, (, , ....@@@@@@@@@@@@@)@@@@(@");
    npc.vecBigImage.push_back("@@@@@@@@@@@....*, (, (, , ....@@@@@@@@@@@@@)@@@@(@");
    npc.vecBigImage.push_back("@@(......@@@(..                     ..(@@@......(@");
    npc.vecBigImage.push_back("@@(......@@@(..                     ..(@@@......(@");
    npc.vecBigImage.push_back("@@(......@@@(..                     ..(@@@......(@");
    npc.vecBigImage.push_back("@@(......@@@(..                     ..(@@@......(@");
    npc.vecBigImage.push_back("@.........(                             (.........");
    npc.vecBigImage.push_back("@.........(                             (.........");
    npc.vecBigImage.push_back("@.........(                             (.........");
    npc.vecBigImage.push_back("@.........(                             (.........");
    npc.vecBigImage.push_back("@.........(                             (.........");
    npc.vecBigImage.push_back("@.........(                             (.........");
    npc.vecBigImage.push_back("@.........(                             (.........");
    npc.vecBigImage.push_back("@.........(                             (.........");
    npc.vecBigImage.push_back("@.........(                             (.........");
    npc.vecBigImage.push_back("@.........(                             (.........");
    npc.vecBigImage.push_back("@.........(                             (.........");
    npc.vecBigImage.push_back("@.........(                             (.........");
    npc.vecBigImage.push_back("@.........*                             ..........");
    npc.vecBigImage.push_back("@.........*                             ..........");
    npc.vecBigImage.push_back("@/..,.,..                                 ..,.*../");
    npc.vecBigImage.push_back("@//                                             //");
    npc.vecBigImage.push_back("@//                                             //");
    npc.vecBigImage.push_back("@//                                             //");
    npc.vecBigImage.push_back("@//                                             //");
    npc.vecBigImage.push_back("@//                                             //");
            
    npc.vecSmallImage.push_back("          ,::.           ");
    npc.vecSmallImage.push_back("         -=$$*!:         ");
    npc.vecSmallImage.push_back("       ~$##$$$=$*,       ");
    npc.vecSmallImage.push_back("      -~##~~$$=$=:       ");
    npc.vecSmallImage.push_back("      !=##=$$==$==:      ");
    npc.vecSmallImage.push_back("     .$$$!-;$$~~~$$.     ");
    npc.vecSmallImage.push_back("     .$$*- ,!$####$.     ");
    npc.vecSmallImage.push_back("     ,##;.  ;#~~~##.     ");
    npc.vecSmallImage.push_back("     .$*;,,.-*=$##$.     ");
    npc.vecSmallImage.push_back("      !:,,~. ,::!=*      ");
    npc.vecSmallImage.push_back("      ,#..:.$.:,-:,      ");
    npc.vecSmallImage.push_back("      .. $.  .#.,-.      ");
    npc.vecSmallImage.push_back("           | |  .,       ");
    npc.vecSmallImage.push_back("       ..  |.|  .,       ");
    npc.vecSmallImage.push_back("        .  |,|..,.       ");
    npc.vecSmallImage.push_back("         ..,,-,,,        ");
    npc.vecSmallImage.push_back("        ,,...-,-,        ");
    npc.vecSmallImage.push_back("        .,....,-,        ");
    npc.vecSmallImage.push_back("        ,.,,.,--,.       ");
    npc.vecSmallImage.push_back("       --..,---,--       ");
    npc.vecSmallImage.push_back("    .....  ..,.,--,,     ");
    npc.vecSmallImage.push_back("  .,,$$...  ...,,,-,,,.  ");
    npc.vecSmallImage.push_back(".....,..,.    .,-,,.,,,, ");
    npc.vecSmallImage.push_back(".....##.,,.....,,,......,");
    npc.vecSmallImage.push_back("...........,.,,,.......,.");

    npc.strContents1 =
        "���� BoB�� �ٴٴ� ���� �Ǳ� �Ǵ±���.\n"
        "�׵��� ������ ������ ������ �ֱ���.\n"
        "BoB �ٴ� ������ ������ ��ƾ���.\n"
        "�翬�� ���ֵ� �ϰ�!\n"
        "8���� �� ���°ž� ������~\n"
        "�׷� BoB ��Ȱ�� �����غ���\n"
        ;
	npc.strContents2 =
		"������ǰ���� Ʈ���� ���� �Ͽ��� �� �� ����.\n"
		"���� ���̿� �� ������ ������ �αٵα�\n"
		"�ٿ�� ������ �ʴ±���.\n"
		"�̴�� 2�� ������Ʈ���� �޷�����.\n"
		;
	npc.strContents3 =
		"4���� �������� �ĵ� ���±���!\n"
		"���� �츮 �������� �����.\n"
		"���� �鿪 �޽��� ���� �ý����� �̷��Գ� �� ����ٴ�.\n"
		"�̷��� �� ���� ������ ���� ����.\n"
		"������ ���̰� �԰� �׾�~!\n"
		;
	npc.strContents4 =
		"���� ���� ����Ʈ�� �������̾�.\n"
		"BoB ������ �������� �־�����.\n"
		"������ ������ �ڽŰ����̾�!.\n"
		"��...\n"
		"��� �����ϱ� ���� ����׿�^^\n"
		"�÷��� �����ϼ̽��ϴ�~\n"
		"BoB ��Ȱ ������ �Ͻñ� �ٶ��ϴ�.\n"
		;

    vecNPC.push_back(npc);
}

void CQuestInfo::QueryQuestObject(std::vector<ST_QUEST_OBJECT>& vecQuestObject)
{
	{
		ST_QUEST_OBJECT stObject;
		stObject.nQuestObjectId = 261;
		stObject.strName = "���������";
		stObject.cPatch = 0;	// ȭ�鿡 �������� �ʰ� ���������� �ʰ� �Ϸ��� 0�� ������ ��
		stObject.x = 23;
		stObject.y = 2;
		stObject.z = 1;
		stObject.reserved = 0;
		vecQuestObject.push_back(stObject);
	}

	{
		ST_QUEST_OBJECT stObject;
		stObject.nQuestObjectId = 269;
		stObject.strName = "�����۽�";
		stObject.cPatch = 0;	// ȭ�鿡 �������� �ʰ� ���������� �ʰ� �Ϸ��� 0�� ������ ��
		stObject.x = 23;
		stObject.y = 3;
		stObject.z = 1;
		stObject.reserved = 0;
		vecQuestObject.push_back(stObject);
	}
}

void CQuestInfo::QueryQuest(std::vector<ST_QUEST_DATA>& vecQuest)
{
	// ��â��
	{
		ST_QUEST_DATA stQuest;
		stQuest.nNpcId = 148;
		stQuest.StartCondition = ST_FILTER(148, 0x0000, 0x0001);
		stQuest.vecMessages.push_back("��ģ�� ����...");
		stQuest.vecMessages.push_back("������ 7���̶��? �� 1���̳� ������ ������");
		stQuest.vecMessages.push_back("�̺�, �߻��� ģ��. �� ��Ź�� �����.");
		stQuest.vecMessages.push_back("���� 1���� ���ִ� ���� �ִµ� ���������� ������?");
		stQuest.vecMessages.push_back("�װŶ� ������ ������ �� ���� ���󿡼� �������� ������ ���ϰھ�.");
		stQuest.vecMessages.push_back("����.��ٸ���.");
		stQuest.vecMessages.push_back("�� ��. ��ġ�� x: 23, y:2��. ���ʿ��� ���� �ɸ� �ɰž�.");
		stQuest.ClearCondition = ST_FILTER(148, 0x0003);
		vecQuest.push_back(stQuest);
	}

	// ���������
	{
		ST_QUEST_DATA stQuest;
		stQuest.nNpcId = 261;
		stQuest.StartCondition = ST_FILTER(148, 0x0001, 0x0003);
		stQuest.vecMessages.push_back("�Ϳ��� �β��� ���� ���ֺ��� �߰��ߴ�.");
		stQuest.vecMessages.push_back("���� ���� ������ ���̽��ε� �̰� ã�ٴ� ���⵵ �̻��ϱ�.");
		stQuest.vecMessages.push_back("��·�� ���ϴ� �� ã�� �� ������ ��â�𿡰� ���ư��߰ھ�.");
		stQuest.ClearCondition = ST_FILTER(148, 0x0007);
		vecQuest.push_back(stQuest);
	}

	// ��â��
	{
		ST_QUEST_DATA stQuest;
		stQuest.nNpcId = 148;
		stQuest.StartCondition = ST_FILTER(148, 0x0003, 0x0007);
		stQuest.vecMessages.push_back("�� ��Ź�� ����ִٴ� ���� ����.");
		stQuest.vecMessages.push_back("[���������]�� [��â��]���� �����߽��ϴ�.");
		stQuest.vecMessages.push_back("(�ܲ��ܲ�)");
		stQuest.vecMessages.push_back("�ٵ� �̰� ���ô� ���ϱ� ���ְ� �� �����.");
		stQuest.vecMessages.push_back("�̿� ���� �� ����� ���žߵ��� �ʰھ�?");
		stQuest.vecMessages.push_back("�Ʊ� ���ָ� ã�� ��ġ�� ���� ���� �����ϴ� ���ְ� �ϳ� �־�.");
		stQuest.vecMessages.push_back("��ġ�� x: 23, y:3��. ����.");
		stQuest.vecMessages.push_back("�װ͵� �ϳ��� �� �������� ������?");
		stQuest.vecMessages.push_back("(���� �� �������̱���)");
		stQuest.vecMessages.push_back("(�׷��� �ҽ��ϴ� ��������)");
		stQuest.ClearCondition = ST_FILTER(148, 0x000F);
		vecQuest.push_back(stQuest);
	}

	// �����۽�
	{
		ST_QUEST_DATA stQuest;
		stQuest.nNpcId = 269;
		stQuest.StartCondition = ST_FILTER(148, 0x0007, 0x000F);
		stQuest.vecMessages.push_back("������ �������� �޸� �����۽��� �߰��ߴ�.");
		stQuest.vecMessages.push_back("���ĸ��ΰ� ���� ¬�ɸ��ϰ� �����ַ� ������ �� ����.");
		stQuest.vecMessages.push_back("�̰� ���� ��â�𿡰� �ٽ� ���ư��߰ڴ�.");
		stQuest.ClearCondition = ST_FILTER(148, 0x001F);
		vecQuest.push_back(stQuest);
	}

	// ��â��
	{
		ST_QUEST_DATA stQuest;
		stQuest.nNpcId = 148;
		stQuest.StartCondition = ST_FILTER(148, 0x000F, 0x001F);
		stQuest.vecMessages.push_back("��~ �Ծ�? �v�� ���̾�~");
		stQuest.vecMessages.push_back("ó���� BoB ���� �� ���̾�~.");
		stQuest.vecMessages.push_back("���ڿ��� ���ٴ��� ���̾�~.");
		stQuest.vecMessages.push_back("������ �ߴ� ���̾�~.");
		stQuest.vecMessages.push_back("(���� ���� ���߱� ����)");
		stQuest.vecMessages.push_back("�ٵ� ������ ���̾�~");
		stQuest.vecMessages.push_back("������~�� �ʿ��� ���� �ִ� �� �w��~");
		stQuest.vecMessages.push_back("(���ڱ� �����ϴ� ��â��)");
		stQuest.vecMessages.push_back("����. �� ���� ���� ���̱���. �ٽ� �������� ���� �� ����.");
		stQuest.vecMessages.push_back("���п� �ٽ� �޸� �� �ְھ�.");
		stQuest.vecMessages.push_back("���߿� ������ �ʿ��� �� ã�ƿ�.");
		stQuest.vecMessages.push_back("���� ������ ���� �������ٰ�.");
		stQuest.vecMessages.push_back("(����Ʈ�� �Ϸ��߽��ϴ�.)");
		stQuest.ClearCondition = ST_FILTER(148, 0x003F);
		vecQuest.push_back(stQuest);
	}
}