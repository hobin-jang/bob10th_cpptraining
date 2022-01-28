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
}

void CQuestInfo::QueryNpcEx(std::vector<ST_QUEST_NPC_DATA>& vecNPC)
{
	{
		ST_QUEST_NPC_DATA npc;
		npc.x = 72;
		npc.y = 20;
		npc.z = 0;
		npc.nNpcID = 4;
		npc.strTrack = "���Ȱ���Ʈ��";
		npc.strName = "[����]������";
		npc.nAge = 40;
		npc.strMBTI = "ENFJ�̰� B���̿���";
		npc.cPatch = 'J';
		npc.strMessage = 
			"���� ������ �غ��� �ʹٸ� �� ã�ƿ�.\n�ٵ� C++�� ��ƴٰ�?\n�� �� �𸣴±���.\n������ 21���̸� ������ �� �� ����.\n�ϴ��� �����а� �������� ���� ������ڲٳ�.";

		npc.strContents1 = "";

		vecNPC.push_back(npc);
	}

	{
		ST_QUEST_NPC_DATA npc;
		npc.x = 11;
		npc.y = 2;
		npc.z = 1;
		npc.nNpcID = 128;
		npc.strTrack = "���Ȱ���Ʈ��";
		npc.strName = "��Ȳ�ϴ�������";
		npc.nAge = 25;
		npc.strMBTI = "INFP �ҽɼҽ�";
		npc.cPatch = 'P';
		npc.strMessage = "����...\n"
			"���� ���� ����������..\n"
			"�ι� �ٽ� ���Ұž�.";

		npc.vecBigImage.push_back("                   .~:;;!!;:~.                    ");
		npc.vecBigImage.push_back("                .~*==$$$$$$$$*!;~-.               ");
		npc.vecBigImage.push_back("               ~=$$$$$$#$#$$$$$$==*~              ");
		npc.vecBigImage.push_back("             ,!$$$$##########$$$$$$$!.            ");
		npc.vecBigImage.push_back("            -*$$$#################$$$=,           ");
		npc.vecBigImage.push_back("           -==$$$$$$###############$$$$~          ");
		npc.vecBigImage.push_back("          ,*==$$$$$$#################$$=-         ");
		npc.vecBigImage.push_back("          !=$$$$$$$$$$$$#$############$$$,        ");
		npc.vecBigImage.push_back("         ~$$$$$$$$$$$$$$$======$#######$$!        ");
		npc.vecBigImage.push_back("        .=$$$$$$$$=******!!!:!*=$$$$##$$$=,       ");
		npc.vecBigImage.push_back("        :$$$$$$$*!:~::~~~~~--~:;*==$$$$$$$;       ");
		npc.vecBigImage.push_back("        *$###$*;~,......,,...,--:;!=$$###$*       ");
		npc.vecBigImage.push_back("       .=###$!~,.       ......,,-~~:*$$$$$=.      ");
		npc.vecBigImage.push_back("       -$#$$!-.              ...,,--:=$$$$$,      ");
		npc.vecBigImage.push_back("       ~$#$=:,.              .....,,-!$$$$$,      ");
		npc.vecBigImage.push_back("       ~$#$=~..               .....,,~=$$$$,      ");
		npc.vecBigImage.push_back("       ~$$$=-..               .....,,-!$#$$,      ");
		npc.vecBigImage.push_back("       ~$#$!.....             ...,,,,,~=##=.      ");
		npc.vecBigImage.push_back("       -$#$:...--,,,.       ...,-~-,,,,!##*       ");
		npc.vecBigImage.push_back("       .$#=,..-,-~:~:-.   .,~:::~~~-,,,:$#;       ");
		npc.vecBigImage.push_back("        !#!,.,,....,~~-...,-~~~------,,~$$~       ");
		npc.vecBigImage.push_back("        ~#;.....,,,,,--,..---,,,--,,,,,:$=.       ");
		npc.vecBigImage.push_back("        .$;,,..,-~~--~~. .,~~~----,,,-,:$;        ");
		npc.vecBigImage.push_back("         ~:;:,-:;*=;-,-;--;~-~!=*;~--:::!-        ");
		npc.vecBigImage.push_back("         ,;;:---,~:~~,,-.,:--::!::;~::;:~.        ");
		npc.vecBigImage.push_back("        .,~~~-,,,---,.~~ .:~,------~~~-~--.       ");
		npc.vecBigImage.push_back("        ~--,..,...,...,, .,,,.,,,,,,,,,-,-.       ");
		npc.vecBigImage.push_back("        -,-...........,   .,..........,-.,        ");
		npc.vecBigImage.push_back("        ..,.     ......   .............-,,        ");
		npc.vecBigImage.push_back("         .,..        .    ...      ....-,.        ");
		npc.vecBigImage.push_back("         .-..        ..   .,,.     ....,.         ");
		npc.vecBigImage.push_back("          ,,..      ..    ..,,.   ....,,,         ");
		npc.vecBigImage.push_back("         .,,,..    .,.,-,,-,,,.......,,,.         ");
		npc.vecBigImage.push_back("          ,,,...   ..,;!:~;:,,.......,,,          ");
		npc.vecBigImage.push_back("          .,,,...    .-,,,,-,.....,,,,,.          ");
		npc.vecBigImage.push_back("           ,,,...    .....,,,,...,,,,,,           ");
		npc.vecBigImage.push_back("            -,,........ ...,,,,,,,,,,,.           ");
		npc.vecBigImage.push_back("            -,,....,,..,..,,,--,,,,,,,.           ");
		npc.vecBigImage.push_back("            ,,,,.,,,--~~~~~:~~-,,,,,,,            ");
		npc.vecBigImage.push_back("            ,-,,,,---,....,,-~--,,,,,-            ");
		npc.vecBigImage.push_back("            .-,,,,,.... ...,,,,,,,,,-,            ");
		npc.vecBigImage.push_back("             --,,,,..,-~~~~,,.,,,,,--             ");
		npc.vecBigImage.push_back("             .~-,,,,,..,--,,,,,,,,,-,             ");
		npc.vecBigImage.push_back("              ,--,,,,,..,,,,,,,,,,-~~             ");
		npc.vecBigImage.push_back("               ~-,,........,,,,,,-~~!,            ");
		npc.vecBigImage.push_back("              :~~~,,..,,,,,,,,,--~~-:*.           ");
		npc.vecBigImage.push_back("             :=-~:~-,,,--------~~~---#:           ");
		npc.vecBigImage.push_back("            ~$*,-~;:~~~~~~~~~~::~---,=$~          ");
		npc.vecBigImage.push_back("           -$#!,--~;;!!!!;;;;;::~-,,,*$=.         ");
		npc.vecBigImage.push_back("          ,=##;.---~:;!***!;:~~--,-,,!#$*.        ");
		npc.vecBigImage.push_back("       -;=$$##;.,---~~:;;;:-----,-,..!###=;.      ");
		npc.vecBigImage.push_back("    .:*$$$####!..,--~~~~~~-,------..,*####$=;,    ");
		npc.vecBigImage.push_back("  -;$$$$######*...---~~~--,------,..,=######$$*:, ");
		npc.vecBigImage.push_back(";*$$$##$######$,...,---~~~-----~,...,#########$$$=");
		npc.vecBigImage.push_back("$$$$##$$#######:....,--~~~~--~-,....-#############");
		npc.vecBigImage.push_back("$$$$##$$#######*.  ..,---~---~,.....:#############");
		npc.vecBigImage.push_back("$$$############$-    ..,-----.......!#############");
		npc.vecBigImage.push_back("$$$#############:      .,--,.......,=#############");
		npc.vecBigImage.push_back("$###############*.      ,~..    ...-$#############");
		npc.vecBigImage.push_back("$###############$-.    .:!~.   ....;##############");

		npc.vecSmallImage.push_back("      ,..            ");
		npc.vecSmallImage.push_back("    ..,...           ");
		npc.vecSmallImage.push_back("  ,..,,.,.   .       ");
		npc.vecSmallImage.push_back("  -.,..... . .       ");
		npc.vecSmallImage.push_back(" ,~.,,,,,,.,  .      ");
		npc.vecSmallImage.push_back(" .-.#*-.,.-#- .      ");
		npc.vecSmallImage.push_back(" .-,--,... -         ");
		npc.vecSmallImage.push_back(" .-...,=$-.          ");
		npc.vecSmallImage.push_back("  .....$$=.  .       ");
		npc.vecSmallImage.push_back("   ,...,!..          ");
		npc.vecSmallImage.push_back("   .....:..   .      ");
		npc.vecSmallImage.push_back("   ...... .          ");
		npc.vecSmallImage.push_back("   ....  .....       ");
		npc.vecSmallImage.push_back("   .....,  . .       ");
		npc.vecSmallImage.push_back("   ..... .  ...      ");
		npc.vecSmallImage.push_back("   ....  ....    .   ");
		npc.vecSmallImage.push_back("   ...,  .....  .    ");
		npc.vecSmallImage.push_back("   ..,.. . .,.  ..   ");
		npc.vecSmallImage.push_back("   .,.-,..,,..  ..   ");
		npc.vecSmallImage.push_back("   ...,.,,. ..  ,.   ");
		npc.vecSmallImage.push_back("   ,...-,,  ..  ..   ");
		npc.vecSmallImage.push_back("   ,,-,,..  ..  ...  ");
		npc.vecSmallImage.push_back("   ..,.-.   ..  -,,  ");
		npc.vecSmallImage.push_back("  ,-,,,.   ,...      ");
		npc.vecSmallImage.push_back("  -....   .,..,      ");

		npc.strContents1 =
			"����...\n"
			"���̰�.. �ƾ�...\n"
			"...\n"
			"��.. ����?\n"
			"Ÿ�Ӹӽ��� �����Ѱǰ�?\n"
			"������ �����ϱ�...\n"
			"...\n"
			"......\n"
			"���� 2004�� �´°���?\n"
			"���� ������.\n"
			"��???????????????????\n"
			"BoB ����?���� ����?\n"
			"����� �������� Ư���ϰ�...\n"
			"����...\n"
			"�� ���Ű� �ƴ϶� �̷��� �°ǰ�?\n"
			"��--------��!!!!!!!!\n"
			"2022���̶��!!!\n"
			"���� Ÿ�Ӹӽ��� �ҿ����Ѱǰ�!! 2004������ ���� �߾��µ�...\n"
			"...\n"
			"...\n"
			"���� ��Ե� �������.\n"
			;

		vecNPC.push_back(npc);
	}
}

void CQuestInfo::QueryQuestObject(std::vector<ST_QUEST_OBJECT>& vecQuestObject)
{
	ST_QUEST_OBJECT stObject;
	stObject.nQuestObjectId = 256;
	stObject.strName = "�м����� �ÿ��� ��";
	stObject.cPatch = 0;	// ȭ�鿡 �������� �ʰ� ���������� �ʰ� �Ϸ��� 0�� ������ ��
	stObject.x = 35;
	stObject.y = 13;
	stObject.z = 0;
	stObject.reserved = 0;
	vecQuestObject.push_back(stObject);
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
		stQuest.vecMessages.push_back("���� ���� ���� �м��뿡�� �� �� ���� �����ְھ�?");
		stQuest.ClearCondition = ST_FILTER(128, 0x0003);
		vecQuest.push_back(stQuest);
	}

	// �м���
	{
		ST_QUEST_DATA stQuest;
		stQuest.nNpcId = 256;
		stQuest.StartCondition = ST_FILTER(128, 0x0001, 0x0003);
		stQuest.vecMessages.push_back("�ÿ��ϰ� �м��� ����� ������ �ִ�.");
		stQuest.vecMessages.push_back("�̰� ���ϴ°ǰ�?");
		stQuest.vecMessages.push_back("�ٵ� �� ���� �м��� ���� ������..? ;;");
		stQuest.vecMessages.push_back("��ħ ������ �������� ���� �ֱ�.");
		stQuest.vecMessages.push_back("[�м����� �ÿ��� ��]�� ȹ���߽��ϴ�.");
		stQuest.vecMessages.push_back("�ٽ� ��Ȳ�ϴ����������Է� ���ư���.");
		stQuest.ClearCondition = ST_FILTER(128, 0x0007);
		vecQuest.push_back(stQuest);
	}
	

	// � ������
	{
		ST_QUEST_DATA stQuest;
		stQuest.nNpcId = 128;
		stQuest.StartCondition = ST_FILTER(128, 0x0003, 0x0007);
		stQuest.vecMessages.push_back("��? ���� ���°ž�?");
		stQuest.vecMessages.push_back("[�м����� �ÿ��� ��]�� �����߽��ϴ�.");
		stQuest.vecMessages.push_back("���� ���� �� ���ǰ�.");
		stQuest.vecMessages.push_back("�ܲ� �ܲ� �ܲ�");
		stQuest.vecMessages.push_back("�ܲ� �ܲ� �ܲ� �ܲ� �ܲ� �ܲ�");
		stQuest.vecMessages.push_back("�ܲ� �ܲ� �ܲ� �ܲ� �ܲ� �ܲ� �ܲ� �ܲ� �ܲ�");
		stQuest.vecMessages.push_back("...");
		stQuest.vecMessages.push_back("Ǫ��~ ��� ����. �� ��� ���� �� �߾���.");
		stQuest.vecMessages.push_back("��?");
		stQuest.vecMessages.push_back("����ü �� �������� �� ������ �ڵ��߳İ�?");
		stQuest.vecMessages.push_back("�װ�... ������ ����Բ� �����.");
		stQuest.ClearCondition = ST_FILTER(128, 0x000F);
		vecQuest.push_back(stQuest);
	}
	

	// ������ ����
	{
		ST_QUEST_DATA stQuest;
		stQuest.nNpcId = 4;
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
		stQuest.vecMessages.push_back("�� ������ ������ ������ ����Բ� ����.");
		stQuest.vecMessages.push_back("[� �������� ����]�� ȹ���ߴ�.");
		stQuest.vecMessages.push_back("��ٸ��� ������.");
		stQuest.ClearCondition = ST_FILTER(128, 0x003F);
		vecQuest.push_back(stQuest);
	}

	// ������ ����
	{
		ST_QUEST_DATA stQuest;
		stQuest.nNpcId = 4;
		stQuest.StartCondition = ST_FILTER(128, 0x001F, 0x003F);
		stQuest.vecMessages.push_back("�� �Գ�?");
		stQuest.vecMessages.push_back("�̹��� ���Ÿ� ��� �Դٰ�?");
		stQuest.vecMessages.push_back("[� �������� ����]�� �ǳ��ش�.");
		stQuest.vecMessages.push_back("�� �̰�...");
		stQuest.vecMessages.push_back("��... �����̰� ���� ����");
		stQuest.vecMessages.push_back("������� �� �ؾ�...");
		stQuest.vecMessages.push_back("�и� ���� �±�. ���� ���� ������ ����̾�..!!");
		stQuest.vecMessages.push_back("��? �׷��� �� ģ���� �� 48�ð����� �ڵ��ϴ� �Գİ� ������ �ߴٰ�?");
		stQuest.vecMessages.push_back("�� �� �����ΰ�.");
		stQuest.vecMessages.push_back("���� �� 25���� �Ǵ� �� ���� ���߷� ���Ӱ����� �߾���.");
		stQuest.vecMessages.push_back("������ �����̳� ����� ���װ� ��ǵ���ؼ� ������ ������ ���� ������.");
		stQuest.vecMessages.push_back("�׷�.. ������.");
		stQuest.vecMessages.push_back("�׷��� �� �������� �����ΰž�.");
		stQuest.vecMessages.push_back("�˰��� �츮�� �þҴ� ������Ʈ�� �������� ������ �������� ���̾���.");
		stQuest.vecMessages.push_back("�Ƹ� �״�ô� 48�ð� ���� �׵��� �ڵ��ϰ� ������ Ż���ؿ� �� ������ �� ����.");
		stQuest.vecMessages.push_back("�Ƹ��� Ÿ�Ӹӽ� ����� �ҿ����ؼ� ���Ű� �ƴ϶� �̷��� �͹��ȳ�����.");
		stQuest.vecMessages.push_back("���� ȸ�������ְ� ���� �����غ�.");
		stQuest.vecMessages.push_back("����������..?");
		stQuest.vecMessages.push_back("�����ص� ����Ĵϱ�.");
		stQuest.ClearCondition = ST_FILTER(128, 0x007F);
		vecQuest.push_back(stQuest);
	}

	// � ������
	{
		ST_QUEST_DATA stQuest;
		stQuest.nNpcId = 128;
		stQuest.StartCondition = ST_FILTER(128, 0x003F, 0x007F);
		stQuest.vecMessages.push_back("���� �� ��� ǥ���� ���� �� Ȯ���ϰ� �Գ�����.");
		stQuest.vecMessages.push_back("��¥ � �������� �´ٱ�.");
		stQuest.vecMessages.push_back("�� 25���̾�.");
		stQuest.vecMessages.push_back("����� ���� �Ƿ���.");
		stQuest.vecMessages.push_back("�� BoB ���������� ��Ƽ�μ� ���� ���� �� �ִٴ� ���̾�.");
		stQuest.vecMessages.push_back("���� ������. C++ ������ Ȯ���� ����Ʈ ���ٰ�.");
		stQuest.vecMessages.push_back("���� ĳ���ͷ� �����ϸ� ���� �Բ� BoB�� ������ �� �־�.");
		stQuest.ClearCondition = ST_FILTER(128, 0x00FF);
		vecQuest.push_back(stQuest);
	}
}
