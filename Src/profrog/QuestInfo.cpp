#include "pch.h"
#include "QuestInfo.h"
#include "MiniGame.h"

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
		npc.x = 12;
		npc.y = 2;
		npc.z = 20;

		npc.nNpcID = 128;
		npc.strTrack = "���Ȱ���Ʈ��";
		npc.strName = "��Ȳ�ϴ»���";
		npc.nAge = 25;
		npc.strMBTI = "UNKNOWN";
		npc.cPatch = 'P';
		npc.strMessage = "����...\n"
			"���� ���� ����������..\n"
			"�ι� �ٽ� ���Ұž�.";

		npc.vecBigImage.push_back("                                                  ");
		npc.vecBigImage.push_back("                                                  ");
		npc.vecBigImage.push_back("                    ........                      ");
		npc.vecBigImage.push_back("                  .,,.-.,.,,,,                    ");
		npc.vecBigImage.push_back("                 -.,. ,...-~~~-,                  ");
		npc.vecBigImage.push_back("                ,-:, .  .,.,..  -,                ");
		npc.vecBigImage.push_back("                ~-.. .... ..,.... .               ");
		npc.vecBigImage.push_back("              ..,,,...,-,-.......-.               ");
		npc.vecBigImage.push_back("             .,: -.   ..,,,..   .-,.              ");
		npc.vecBigImage.push_back("             .~,~.     ..,-,,..    ..             ");
		npc.vecBigImage.push_back("              ,!-~-..  .... :~.-,   .             ");
		npc.vecBigImage.push_back("            -,    . ..   ,, -,.,~..               ");
		npc.vecBigImage.push_back("           .-.   . .,,., ., ,-,.,--..             ");
		npc.vecBigImage.push_back("           ,.    -.,,.-,..,. ~,.,,--,             ");
		npc.vecBigImage.push_back("           ., .  --,~,,,,,,,..,-,~-.-,            ");
		npc.vecBigImage.push_back("           ,,    -~,~...,,.~--~-:.-,,,            ");
		npc.vecBigImage.push_back("            ,  ,.,,,-~~..,,.~;:;~~---,            ");
		npc.vecBigImage.push_back("           ..  ,-.,,,~~-.,-:;:----,,,             ");
		npc.vecBigImage.push_back("           .. .-:-..-:~::-,~~!-.,,,..             ");
		npc.vecBigImage.push_back("              ,-~~,;;;~,--~,.:~...,-.             ");
		npc.vecBigImage.push_back("             ..-,;;,.;!-  --- .   ,.              ");
		npc.vecBigImage.push_back("              .~-~-~;;-..-. -     ~               ");
		npc.vecBigImage.push_back("             ..~.~~~,-..          ~               ");
		npc.vecBigImage.push_back("             .,-, ,,,             ~               ");
		npc.vecBigImage.push_back("   -,         .,...,              .               ");
		npc.vecBigImage.push_back("      ,         ..-:,      ~.    .            .~, ");
		npc.vecBigImage.push_back("       ...         ..         .  !         . ~    ");
		npc.vecBigImage.push_back("         .          ,~   .  .   ,:       ..,      ");
		npc.vecBigImage.push_back("            ,        ~-         ,~      ,.        ");
		npc.vecBigImage.push_back("             .      ,, .       ...    -           ");
		npc.vecBigImage.push_back("              .::      ~,.    ,...   .            ");
		npc.vecBigImage.push_back("                --.      :!-,-~....,~:~:          ");
		npc.vecBigImage.push_back("                 -,      :=*;*;.    ~;:~,.        ");
		npc.vecBigImage.push_back("                 -,.     :*=:*:     .,.~,.        ");
		npc.vecBigImage.push_back("                 -,-.    ~*=**~        -.,.       ");
		npc.vecBigImage.push_back("                 ---  . ,!***!-         .         ");
		npc.vecBigImage.push_back("                 ..,    -!***!-  .      -         ");
		npc.vecBigImage.push_back("                  ..    -!!*!;-         . .       ");
		npc.vecBigImage.push_back("                        ,;;~;:,                   ");
		npc.vecBigImage.push_back("               . .-     ,:; :~,          .        ");
		npc.vecBigImage.push_back("                 ,      ,::.~-.          . ,      ");
		npc.vecBigImage.push_back("                .       .~:---.            .      ");
		npc.vecBigImage.push_back("               ..       .,-~,,.          ..       ");
		npc.vecBigImage.push_back("                         ..-..           .        ");
		npc.vecBigImage.push_back("                                                  ");

		npc.vecSmallImage.push_back("            ......            ");
		npc.vecSmallImage.push_back("          ,,.-..-~.           ");
		npc.vecSmallImage.push_back("         .-,  . ,, ,.         ");
		npc.vecSmallImage.push_back("         ., .,,~....,         ");
		npc.vecSmallImage.push_back("        -~,    ..  ...        ");
		npc.vecSmallImage.push_back("       ..~-.. .-.~ -..        ");
		npc.vecSmallImage.push_back("       -  . ,. , -.,-.        ");
		npc.vecSmallImage.push_back("       .  -,~-,.,-,,-,.       ");
		npc.vecSmallImage.push_back("       , .-,~,,.,-::--,       ");
		npc.vecSmallImage.push_back("       . -..,~,,:;---~        ");
		npc.vecSmallImage.push_back("       ..~~-:~~,,;,,,,        ");
		npc.vecSmallImage.push_back("        .~:,::.,,   -         ");
		npc.vecSmallImage.push_back("        ,~~~..      ~         ");
		npc.vecSmallImage.push_back("  ,     ., ,        ,         ");
		npc.vecSmallImage.push_back("    .     .-    ,   .      ., ");
		npc.vecSmallImage.push_back("     .      -  , . ,.    .    ");
		npc.vecSmallImage.push_back("       ,.   ,,     .          ");
		npc.vecSmallImage.push_back("         -,   .-  -. ,--      ");
		npc.vecSmallImage.push_back("          -    =**:   ;~,     ");
		npc.vecSmallImage.push_back("          --   *=*.    -.     ");
		npc.vecSmallImage.push_back("          ,~ . **!.     .     ");
		npc.vecSmallImage.push_back("           .   !*;      ..    ");
		npc.vecSmallImage.push_back("          .    ;.~      .     ");
		npc.vecSmallImage.push_back("          .    :,-      .     ");
		npc.vecSmallImage.push_back("         .     -~.       .    ");

		npc.strContents1 =
			"����...\n"
			"���̰�.. �ƾ�...\n"
			"...\n"
			"��.. ����?\n"
			"Ÿ�Ӹӽ��� �����Ѱǰ�?\n"
			"������ �����ϱ�...\n"
			"...\n"
			"......\n"
			"(�ٱ� ��ġ�� �ٶ󺻴�.)\n"
			"���� 2004�� �´°���?\n"
			"���� ������.\n"
			"���� ����?\n"
			"����� �������� Ư���ϰ�...\n"
			"(�� �ָ� ������ �ð谡 ������)\n"
			"?!?! 2022�⵵?\n"
			"����...\n"
			"�� ���Ű� �ƴ϶� �̷��� �°ǰ�?\n"
			"��---��!!\n"
			"��--------��!!!!\n"
			"��--------------��!!!!!!!!\n"
			"2022���̶��!!!\n"
			"���� Ÿ�Ӹӽ��� �ҿ����Ѱǰ�!! 2004������ ���� �߾��µ�...\n"
			"...\n"
			"... ���ߴ� �Ф�\n"
			"���� ��Ե� �������.\n"
			;

		npc.strContents2 = "�ۼ���...";
		npc.strContents3 = "�ۼ���...";
		npc.strContents4 = "�ۼ���...";
		vecNPC.push_back(npc);
	}
}

void CQuestInfo::QueryQuestObject(std::vector<ST_QUEST_OBJECT>& vecQuestObject)
{
	ST_QUEST_OBJECT stObject;
	stObject.nQuestObjectId = 256;
	stObject.strName = "������ ���� ����";
	stObject.cPatch = '+';	// ȭ�鿡 �������� �ʰ� ���������� �ʰ� �Ϸ��� 0�� ������ ��
	stObject.x = 24;
	stObject.y = 3;
	stObject.z = 20;
	stObject.reserved = 0;
	vecQuestObject.push_back(stObject);
}

void CQuestInfo::QueryQuestItem(std::vector<ST_QUEST_ITEM_DATA>& vecQuestItem)
{
	ST_QUEST_ITEM_DATA item;
	item.btId = 135;
	item.nHP = 0;
	item.nMP = 0;
	item.strName = "���������";
	item.strDesc = "2005�� �� ���� ��︸ ���ø��� ������ �ηƴ�.. �̷��� ���� �� ������ �ִ�?";
	vecQuestItem.push_back(item);
}

void CQuestInfo::QueryQuestMonster(std::vector<ST_QUEST_MONSTER_DATA>& vecQuestMonster)
{
}

void CQuestInfo::QueryQuest(std::vector<ST_QUEST_DATA>& vecQuest)
{
	// � ������
	{
		ST_QUEST_DATA stQuest;
		stQuest.nNpcId = 128;
		stQuest.StartCondition = ST_FILTER(128, 0x0000, 0x0001);
		stQuest.vecMessages.push_back("���... ��ģ�� ����...");
		stQuest.vecMessages.push_back("���� ���� ���� ����������");
		stQuest.vecMessages.push_back("48�ð� ���� ��¦�� ���ϰ� �ڵ��� �ߴٱ�");
		stQuest.vecMessages.push_back("���� ���� ���� �ϳ��� ����ְھ�?");
		stQuest.vecMessages.push_back("�� �� Ŀ�Ǹ� ���Ծ �ٸ��ɷ�...");
		stQuest.ClearCondition = ST_FILTER(128, 0x0003);
		vecQuest.push_back(stQuest);
	}

	// �м���
	{
		ST_QUEST_DATA stQuest;
		stQuest.nNpcId = 10011;
		stQuest.StartCondition = ST_FILTER(128, 0x0001, 0x0003);
		stQuest.vecMessages.push_back("��ɼ�!");
		stQuest.vecMessages.push_back("� Ŀ�� ��ǰǰ���?");
		stQuest.vecMessages.push_back("(Ŀ�Ǵ� ���Դ´ٴµ���?)");
		stQuest.vecMessages.push_back("���ڱ��? �ٵ� ���� Ŀ�Ǽ��ε���?");
		stQuest.vecMessages.push_back("(Ŀ�� ���� �ƹ��ų� �ÿ��Ѱ� �ּ���)");
		stQuest.vecMessages.push_back("��.��.��.�� �˰ڽ��ϴ�.");
		stQuest.vecMessages.push_back("�ҵ�");
		stQuest.vecMessages.push_back("�ҵ��ҵ�");
		stQuest.vecMessages.push_back("�ҵ��ҵ��ҵ��ҵ�");
		stQuest.vecMessages.push_back("�ڿ�!");
		stQuest.vecMessages.push_back("[���� ���� ������� ����]�� �޾Ҵ�.");
		stQuest.vecMessages.push_back("���� �ٽ� ��Ȳ�ϴ»������Է� ���ư���.");
		stQuest.ClearCondition = ST_FILTER(128, 0x0007);
		vecQuest.push_back(stQuest);
	}
	

	// � ������
	{
		ST_QUEST_DATA stQuest;
		stQuest.nNpcId = 128;
		stQuest.StartCondition = ST_FILTER(128, 0x0003, 0x0007);
		stQuest.vecMessages.push_back("��? ���� ��°ž�");
		stQuest.vecMessages.push_back("[���� ���� ������� ����]�� �����߽��ϴ�.");
		stQuest.vecMessages.push_back("���� ���� �� ���ǰ�.");
		stQuest.vecMessages.push_back("�ܲ� �ܲ� �ܲ�");
		stQuest.vecMessages.push_back("�ܲ� �ܲ� �ܲ� �ܲ� �ܲ� �ܲ�");
		stQuest.vecMessages.push_back("�ܲ� �ܲ� �ܲ� �ܲ� �ܲ� �ܲ� �ܲ� �ܲ� �ܲ�");
		stQuest.vecMessages.push_back("...");
		stQuest.vecMessages.push_back("Ǫ��~ ��� ����. �� ��� ���� �� �߾���.");
		stQuest.vecMessages.push_back("���� �� �̻��ϱ� ������.. �̷��� ���ΰ� ����.");
		stQuest.vecMessages.push_back("��?");
		stQuest.vecMessages.push_back("����ü �� �������� �� ������ �ڵ��߳İ�?");
		stQuest.vecMessages.push_back("�װ�... ������ ����Բ� �����.");
		stQuest.ClearCondition = ST_FILTER(128, 0x000F);
		vecQuest.push_back(stQuest);
	}

	// ������ ����
	{
		ST_QUEST_DATA stQuest;
		stQuest.nNpcId = 27;
		stQuest.StartCondition = ST_FILTER(128, 0x0007, 0x000F);
		stQuest.vecMessages.push_back("����? C++ �����Ϸ� �°ž�?");;
		stQuest.vecMessages.push_back("...");
		stQuest.vecMessages.push_back("... �ƴ� �׷��Ա��� �Ӹ��� ��ĥ�� ��� �ʿ�� ���ݾ�.");
		stQuest.vecMessages.push_back("��? ���� ������ ������ �ߴٰ�?");
		stQuest.vecMessages.push_back("�װ� �Ǵٸ� �������̶��?");
		stQuest.vecMessages.push_back("��������");
		stQuest.vecMessages.push_back("����������������");
		stQuest.vecMessages.push_back("��������������������������������");
		stQuest.vecMessages.push_back("�� ������ �Ҹ�. �ڳ״� �ƹ����� ������� ��ȭ�� �ʹ� ���� ���� ����.");
		stQuest.vecMessages.push_back("Ȥ�� ���� � ���Ű� ������ ���� ��������.");
		stQuest.ClearCondition = ST_FILTER(128, 0x001F);
		vecQuest.push_back(stQuest);
	}

	// � ������
	{
		ST_QUEST_DATA stQuest;
		stQuest.nNpcId = 128;
		stQuest.StartCondition = ST_FILTER(128, 0x000F, 0x001F);
		stQuest.vecMessages.push_back("������ �� ���þ�?");
		stQuest.vecMessages.push_back("������ ������� �� �� �ϴ´ٰ�?");
		stQuest.vecMessages.push_back("���� �̷����� �����а� �������� ���� �ߴ����� �����ž�?");
		stQuest.vecMessages.push_back("2022���� �Ǹ� �󸶵��� �ð����� ��������� �ٴ� �� �־�� �ϴ°� �ƴϴ���.");
		stQuest.vecMessages.push_back("�۰ԼҸ��İ�?");
		stQuest.vecMessages.push_back("�� ��� ���ſ��� �Ծ�.");
		stQuest.vecMessages.push_back("�� ������ ������ ������ ������ ����Բ� ����.");
		stQuest.vecMessages.push_back("20���� (24, 3) ������ �����غ���.");
		stQuest.ClearCondition = ST_FILTER(128, 0x003F);
		vecQuest.push_back(stQuest);
	}
	// ����
	{
		ST_QUEST_DATA stQuest;
		stQuest.nNpcId = 256;
		stQuest.StartCondition = ST_FILTER(128, 0x001F, 0x003F);
		stQuest.vecMessages.push_back("��!?");
		stQuest.vecMessages.push_back("���� �ٴڿ� ������ �־�!!");
		stQuest.vecMessages.push_back("�̰� �� �����ΰ�����.");
		stQuest.vecRewardItems.push_back(135);
		stQuest.ClearCondition = ST_FILTER(128, 0x003F);
		vecQuest.push_back(stQuest);
	}
	// ������ ����
	{
		ST_QUEST_DATA stQuest;
		stQuest.nNpcId = 27;
		stQuest.StartCondition = ST_FILTER(128, 0x003F, 0x007F);
		stQuest.vecMessages.push_back("�� �Գ�?");
		stQuest.vecMessages.push_back("�̹��� ���Ÿ� ��� �Դٰ�?");
		stQuest.vecMessages.push_back("�Ʊ� �ֿ� ������ �ǳ��ش�.");
		stQuest.vecMessages.push_back("�� �̰�...");
		stQuest.vecMessages.push_back("��... �����̰� ���� ����");
		stQuest.vecMessages.push_back("������� �� �ؾ�...");
		stQuest.vecMessages.push_back("�и� ���� �±�. ���� ���� ������ ����̾�..!!");
		stQuest.vecMessages.push_back("��? �׷��� �� ģ���� �� 48�ð����� �ڵ��ϴ� �Գİ� ������ �ߴٰ�?");
		stQuest.vecMessages.push_back("�� �� �����ΰ�.");
		stQuest.vecMessages.push_back("���� �� 25���� �Ǵ� �� ���� ���߷� ������ �������.");
		stQuest.vecMessages.push_back("������ �����̳� �������� ���װ� ��ǵ���ؼ� ������ ������ ���� ������.");
		stQuest.vecMessages.push_back("�׷�.. ������.");
		stQuest.vecMessages.push_back("�׷��� �� �������� �����ΰž�.");
		stQuest.vecMessages.push_back("�˰��� �츮�� �þҴ� ������Ʈ�� �������� ������ �������� ���̾���.");
		stQuest.vecMessages.push_back("�Ƹ� �״�ô� 48�ð� ���� �׵��� �ڵ��ϰ� ������ Ż���ؿ� �� ������ �� ����.");
		stQuest.vecMessages.push_back("�Ƹ��� Ÿ�Ӹӽ� ����� �ҿ����ؼ� ���Ű� �ƴ϶� �̷��� �͹��ȳ�����.");
		stQuest.vecMessages.push_back("�� �� ���ķ� ���� ��Ȳ�� �� �������� �𸥴ٴ� ������ ������ ��ƿԴٱ�.");
		stQuest.vecMessages.push_back("���ݵ� �׶��� �����ϸ� ����...");
		stQuest.vecMessages.push_back("�ʵ� �ڵ����� ���ص״ٰ� ������ � ���� ������ �𸥴ٱ�.");
		stQuest.vecMessages.push_back("�׳����� �� �༮�� ���� �����غ�.");
		stQuest.vecMessages.push_back("����������..?");
		stQuest.vecMessages.push_back("�����ص� ����Ĵϱ�.");
		stQuest.ClearCondition = ST_FILTER(128, 0x00FF);
		vecQuest.push_back(stQuest);
	}

	// � ������
	{
		ST_QUEST_DATA stQuest;
		stQuest.nNpcId = 128;
		stQuest.StartCondition = ST_FILTER(128, 0x007F, 0x00FF);
		stQuest.vecMessages.push_back("���� �� ��� ǥ���� ���� �� Ȯ���ϰ� �Գ�����.");
		stQuest.vecMessages.push_back("��¥ � �������� �´ٱ�.");
		stQuest.vecMessages.push_back("�� 25���̾�.");
		stQuest.vecMessages.push_back("����� ���� �Ƿ���.");
		stQuest.vecMessages.push_back("�� BoB ���������� ��Ƽ�μ� ���� ���� �� �ִٴ� ���̾�.");
		stQuest.vecMessages.push_back("���� ������. C++ ������ Ȯ���� ����Ʈ ���ٰ�.");
		stQuest.vecMessages.push_back("�� �ϰڴٰ�? ���� Helloworld�� �޾ƶ�(ESC�� â�� �ݾƺ���.)");
		stQuest.pClearGame = new CMiniGame();
		stQuest.ClearCondition = ST_FILTER(128, 0x01FF);
		vecQuest.push_back(stQuest);
	}

	// � ������
	{
		ST_QUEST_DATA stQuest;
		stQuest.nNpcId = 128;
		stQuest.StartCondition = ST_FILTER(128, 0x01FF, 0xFFFF);
		stQuest.vecMessages.push_back("��, �������� ��");
		stQuest.vecMessages.push_back("���� ĳ���ͷ� �����ϸ� ���� �Բ� BoB�� ������ �� �־�.");
		stQuest.vecMessages.push_back("�������� [��Ȳ�ϴ»���] ĳ������ �����غ���.");
		stQuest.ClearCondition = ST_FILTER(128, 0xFFFF);
		vecQuest.push_back(stQuest);
	}
}
