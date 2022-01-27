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
		npc.strMessage = "���� ������ �غ��� �ʹٸ� �� ã�ƿ�.\n�ٵ� C++�� ��ƴٰ�?\n�� �� �𸣴±���.\n������ 21���̸� ������ �� �� ����.\n�ϴ��� �����а� �������� ���� ������ڲٳ�.";

		npc.strContents1 = "";

		// 25x25
		npc.vecBuffer.push_back("                   .~:;;!!;:~.                    ");
		npc.vecBuffer.push_back("                .~*==$$$$$$$$*!;~-.               ");
		npc.vecBuffer.push_back("               ~=$$$$$$#$#$$$$$$==*~              ");
		npc.vecBuffer.push_back("             ,!$$$$##########$$$$$$$!.            ");
		npc.vecBuffer.push_back("            -*$$$#################$$$=,           ");
		npc.vecBuffer.push_back("           -==$$$$$$###############$$$$~          ");
		npc.vecBuffer.push_back("          ,*==$$$$$$#################$$=-         ");
		npc.vecBuffer.push_back("          !=$$$$$$$$$$$$#$############$$$,        ");
		npc.vecBuffer.push_back("         ~$$$$$$$$$$$$$$$======$#######$$!        ");
		npc.vecBuffer.push_back("        .=$$$$$$$$=******!!!:!*=$$$$##$$$=,       ");
		npc.vecBuffer.push_back("        :$$$$$$$*!:~::~~~~~--~:;*==$$$$$$$;       ");
		npc.vecBuffer.push_back("        *$###$*;~,......,,...,--:;!=$$###$*       ");
		npc.vecBuffer.push_back("       .=###$!~,.       ......,,-~~:*$$$$$=.      ");
		npc.vecBuffer.push_back("       -$#$$!-.              ...,,--:=$$$$$,      ");
		npc.vecBuffer.push_back("       ~$#$=:,.              .....,,-!$$$$$,      ");
		npc.vecBuffer.push_back("       ~$#$=~..               .....,,~=$$$$,      ");
		npc.vecBuffer.push_back("       ~$$$=-..               .....,,-!$#$$,      ");
		npc.vecBuffer.push_back("       ~$#$!.....             ...,,,,,~=##=.      ");
		npc.vecBuffer.push_back("       -$#$:...--,,,.       ...,-~-,,,,!##*       ");
		npc.vecBuffer.push_back("       .$#=,..-,-~:~:-.   .,~:::~~~-,,,:$#;       ");
		npc.vecBuffer.push_back("        !#!,.,,....,~~-...,-~~~------,,~$$~       ");
		npc.vecBuffer.push_back("        ~#;.....,,,,,--,..---,,,--,,,,,:$=.       ");
		npc.vecBuffer.push_back("        .$;,,..,-~~--~~. .,~~~----,,,-,:$;        ");
		npc.vecBuffer.push_back("         ~:;:,-:;*=;-,-;--;~-~!=*;~--:::!-        ");
		npc.vecBuffer.push_back("         ,;;:---,~:~~,,-.,:--::!::;~::;:~.        ");
		npc.vecBuffer.push_back("        .,~~~-,,,---,.~~ .:~,------~~~-~--.       ");
		npc.vecBuffer.push_back("        ~--,..,...,...,, .,,,.,,,,,,,,,-,-.       ");
		npc.vecBuffer.push_back("        -,-...........,   .,..........,-.,        ");
		npc.vecBuffer.push_back("        ..,.     ......   .............-,,        ");
		npc.vecBuffer.push_back("         .,..        .    ...      ....-,.        ");
		npc.vecBuffer.push_back("         .-..        ..   .,,.     ....,.         ");
		npc.vecBuffer.push_back("          ,,..      ..    ..,,.   ....,,,         ");
		npc.vecBuffer.push_back("         .,,,..    .,.,-,,-,,,.......,,,.         ");
		npc.vecBuffer.push_back("          ,,,...   ..,;!:~;:,,.......,,,          ");
		npc.vecBuffer.push_back("          .,,,...    .-,,,,-,.....,,,,,.          ");
		npc.vecBuffer.push_back("           ,,,...    .....,,,,...,,,,,,           ");
		npc.vecBuffer.push_back("            -,,........ ...,,,,,,,,,,,.           ");
		npc.vecBuffer.push_back("            -,,....,,..,..,,,--,,,,,,,.           ");
		npc.vecBuffer.push_back("            ,,,,.,,,--~~~~~:~~-,,,,,,,            ");
		npc.vecBuffer.push_back("            ,-,,,,---,....,,-~--,,,,,-            ");
		npc.vecBuffer.push_back("            .-,,,,,.... ...,,,,,,,,,-,            ");
		npc.vecBuffer.push_back("             --,,,,..,-~~~~,,.,,,,,--             ");
		npc.vecBuffer.push_back("             .~-,,,,,..,--,,,,,,,,,-,             ");
		npc.vecBuffer.push_back("              ,--,,,,,..,,,,,,,,,,-~~             ");
		npc.vecBuffer.push_back("               ~-,,........,,,,,,-~~!,            ");
		npc.vecBuffer.push_back("              :~~~,,..,,,,,,,,,--~~-:*.           ");
		npc.vecBuffer.push_back("             :=-~:~-,,,--------~~~---#:           ");
		npc.vecBuffer.push_back("            ~$*,-~;:~~~~~~~~~~::~---,=$~          ");
		npc.vecBuffer.push_back("           -$#!,--~;;!!!!;;;;;::~-,,,*$=.         ");
		npc.vecBuffer.push_back("          ,=##;.---~:;!***!;:~~--,-,,!#$*.        ");
		npc.vecBuffer.push_back("       -;=$$##;.,---~~:;;;:-----,-,..!###=;.      ");
		npc.vecBuffer.push_back("    .:*$$$####!..,--~~~~~~-,------..,*####$=;,    ");
		npc.vecBuffer.push_back("  -;$$$$######*...---~~~--,------,..,=######$$*:, ");
		npc.vecBuffer.push_back(";*$$$##$######$,...,---~~~-----~,...,#########$$$=");
		npc.vecBuffer.push_back("$$$$##$$#######:....,--~~~~--~-,....-#############");
		npc.vecBuffer.push_back("$$$$##$$#######*.  ..,---~---~,.....:#############");
		npc.vecBuffer.push_back("$$$############$-    ..,-----.......!#############");
		npc.vecBuffer.push_back("$$$#############:      .,--,.......,=#############");
		npc.vecBuffer.push_back("$###############*.      ,~..    ...-$#############");
		npc.vecBuffer.push_back("$###############$-.    .:!~.   ....;##############");
		vecNPC.push_back(npc);
	}

	{
		ST_QUEST_NPC_DATA npc;
		npc.x = 40;
		npc.y = 15;
		npc.z = 0;
		//npc.x = 4;
		//npc.y = 21;
		//npc.z = 1;
		npc.nNpcID = 128;
		npc.strTrack = "���Ȱ���Ʈ��";
		npc.strName = "��Ȳ�ϴ�������";
		npc.nAge = 25;
		npc.strMBTI = "INFP �ҽɼҽ�";
		npc.cPatch = 'P';
		npc.strMessage = "����...\n"
			"���� ���� ����������..\n"
			"�ι� �ٽ� ���Ұž�.";

		npc.strContents1 = "";

		// 25x25
		npc.vecBuffer.push_back("      ,..            ");
		npc.vecBuffer.push_back("    ..,...           ");
		npc.vecBuffer.push_back("  ,..,,.,.   .       ");
		npc.vecBuffer.push_back("  -.,..... . .       ");
		npc.vecBuffer.push_back(" ,~.,,,,,,.,  .      ");
		npc.vecBuffer.push_back(" .-.#*-.,.-#- .      ");
		npc.vecBuffer.push_back(" .-,--,... -         ");
		npc.vecBuffer.push_back(" .-...,=$-.          ");
		npc.vecBuffer.push_back("  .....$$=.  .       ");
		npc.vecBuffer.push_back("   ,...,!..          ");
		npc.vecBuffer.push_back("   .....:..   .      ");
		npc.vecBuffer.push_back("   ...... .          ");
		npc.vecBuffer.push_back("   ....  .....       ");
		npc.vecBuffer.push_back("   .....,  . .       ");
		npc.vecBuffer.push_back("   ..... .  ...      ");
		npc.vecBuffer.push_back("   ....  ....    .   ");
		npc.vecBuffer.push_back("   ...,  .....  .    ");
		npc.vecBuffer.push_back("   ..,.. . .,.  ..   ");
		npc.vecBuffer.push_back("   .,.-,..,,..  ..   ");
		npc.vecBuffer.push_back("   ...,.,,. ..  ,.   ");
		npc.vecBuffer.push_back("   ,...-,,  ..  ..   ");
		npc.vecBuffer.push_back("   ,,-,,..  ..  ...  ");
		npc.vecBuffer.push_back("   ..,.-.   ..  -,,  ");
		npc.vecBuffer.push_back("  ,-,,,.   ,...      ");
		npc.vecBuffer.push_back("  -....   .,..,      ");
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
		stQuest.ClearCondition = ST_FILTER(128, 0x0003, 0x0007);
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
		stQuest.ClearCondition = ST_FILTER(128, 0x0003, 0);
		vecQuest.push_back(stQuest);
	}
	

	//// � ������
	//stQuest.nNpcId = 128;
	//stQuest.Sequence.clear();
	//stQuest.Sequence.push_back(QUEST_SEQ_CONDITION("��? ���� ���°ž�?", ST_FILTER(128, 0xFFFF, 0x0003), 0x0007));
	//stQuest.Sequence.push_back(QUEST_SEQ_MESSAGE("[�м����� �ÿ��� ��]�� �����߽��ϴ�."));
	//stQuest.Sequence.push_back(QUEST_SEQ_MESSAGE("���� ���� �� ���ǰ�."));
	//stQuest.Sequence.push_back(QUEST_SEQ_MESSAGE("�ܲ� �ܲ� �ܲ�"));
	//stQuest.Sequence.push_back(QUEST_SEQ_MESSAGE("�ܲ� �ܲ� �ܲ� �ܲ� �ܲ� �ܲ�"));
	//stQuest.Sequence.push_back(QUEST_SEQ_MESSAGE("�ܲ� �ܲ� �ܲ� �ܲ� �ܲ� �ܲ� �ܲ� �ܲ� �ܲ�"));
	//stQuest.Sequence.push_back(QUEST_SEQ_MESSAGE("..."));
	//stQuest.Sequence.push_back(QUEST_SEQ_MESSAGE("Ǫ��~ ��� ����. �� ��� ���� �� �߾���."));
	//stQuest.Sequence.push_back(QUEST_SEQ_MESSAGE("��?"));
	//stQuest.Sequence.push_back(QUEST_SEQ_MESSAGE("����ü �� �������� �� ������ �ڵ��߳İ�?"));
	//stQuest.Sequence.push_back(QUEST_SEQ_CONDITION("�װ�... ������ ����Բ� �����.", ST_FILTER(128, 0xFFFF, 0x000F), 0));
	//vecQuest.push_back(stQuest);

	//// ������ ����
	//stQuest.nNpcId = 4;
	//stQuest.Sequence.clear();
	//stQuest.Sequence.push_back(QUEST_SEQ_CONDITION("����? C++ �����Ϸ� �°ž�?", ST_FILTER(128, 0xFFFF, 0x0007)));;
	//stQuest.Sequence.push_back(QUEST_SEQ_MESSAGE("..."));
	//stQuest.Sequence.push_back(QUEST_SEQ_MESSAGE("... �ƴ� �׷��Ա��� �Ӹ��� ��ĥ�� ��� �ʿ�� ���ݾ�."));
	//stQuest.Sequence.push_back(QUEST_SEQ_MESSAGE("��? ���� ������ ������ �ߴٰ�?"));
	//stQuest.Sequence.push_back(QUEST_SEQ_MESSAGE("�װ� �Ǵٸ� �������̶��?"));
	//stQuest.Sequence.push_back(QUEST_SEQ_MESSAGE("��������"));
	//stQuest.Sequence.push_back(QUEST_SEQ_MESSAGE("����������������"));
	//stQuest.Sequence.push_back(QUEST_SEQ_MESSAGE("��������������������������������"));
	//stQuest.Sequence.push_back(QUEST_SEQ_MESSAGE("�� ������ �Ҹ�. �ڳ״� �ƹ����� ������� ��ȭ�� �ʹ� ���� ���� ����."));
	//stQuest.Sequence.push_back(QUEST_SEQ_REWARD("Ȥ�� ���� � ���Ű� ������ ���� ��������.", 0x000F));
	//vecQuest.push_back(stQuest);

	//// � ������
	//stQuest.nNpcId = 128;
	//stQuest.Sequence.clear();
	//stQuest.Sequence.push_back(QUEST_SEQ_CONDITION("������ �� ���þ�?", ST_FILTER(128, 0xFFFF, 0x000F)));
	//stQuest.Sequence.push_back(QUEST_SEQ_MESSAGE("������ ������� �� �� �ϴ´ٰ�?"));
	//stQuest.Sequence.push_back(QUEST_SEQ_MESSAGE("���� �̷����� �����а� �������� ���� �ߴ����� �����ž�?"));
	//stQuest.Sequence.push_back(QUEST_SEQ_MESSAGE("2022���� �Ǹ� �󸶵��� �ð����� ��������� �ٴ� �� �־�� �ϴ°� �ƴϴ���."));
	//stQuest.Sequence.push_back(QUEST_SEQ_MESSAGE("�۰ԼҸ��İ�?"));
	//stQuest.Sequence.push_back(QUEST_SEQ_MESSAGE("�� ��� ���ſ��� �Ծ�."));
	//stQuest.Sequence.push_back(QUEST_SEQ_MESSAGE("�� ������ ������ ������ ����Բ� ����."));
	//stQuest.Sequence.push_back(QUEST_SEQ_MESSAGE("[� �������� ����]�� ȹ���ߴ�."));
	//stQuest.Sequence.push_back(QUEST_SEQ_REWARD("��ٸ��� ������.", 0x001F));
	//vecQuest.push_back(stQuest);

	//// ������ ����
	//stQuest.nNpcId = 4;
	//stQuest.Sequence.clear();
	//stQuest.Sequence.push_back(QUEST_SEQ_CONDITION("�� �Գ�?", ST_FILTER(128, 0xFFFF, 0x001F)));
	//stQuest.Sequence.push_back(QUEST_SEQ_MESSAGE("�̹��� ���Ÿ� ��� �Դٰ�?"));
	//stQuest.Sequence.push_back(QUEST_SEQ_MESSAGE("[� �������� ����]�� �ǳ��ش�."));
	//stQuest.Sequence.push_back(QUEST_SEQ_MESSAGE("�� �̰�..."));
	//stQuest.Sequence.push_back(QUEST_SEQ_MESSAGE("��... �����̰� ���� ����"));
	//stQuest.Sequence.push_back(QUEST_SEQ_MESSAGE("������� �� �ؾ�..."));
	//stQuest.Sequence.push_back(QUEST_SEQ_MESSAGE("�и� ���� �±�. ���� ���� ������ ����̾�..!!"));
	//stQuest.Sequence.push_back(QUEST_SEQ_MESSAGE("��? �׷��� �� ģ���� �� 48�ð����� �ڵ��ϴ� �Գİ� ������ �ߴٰ�?"));
	//stQuest.Sequence.push_back(QUEST_SEQ_MESSAGE("�� �� �����ΰ�."));
	//stQuest.Sequence.push_back(QUEST_SEQ_MESSAGE("���� �� 25���� �Ǵ� �� ���� ���߷� ���Ӱ����� �߾���."));
	//stQuest.Sequence.push_back(QUEST_SEQ_MESSAGE("������ �����̳� ����� ���װ� ��ǵ���ؼ� ������ ������ ���� ������."));
	//stQuest.Sequence.push_back(QUEST_SEQ_MESSAGE("�׷�.. ������."));
	//stQuest.Sequence.push_back(QUEST_SEQ_MESSAGE("�׷��� �� �������� �����ΰž�."));
	//stQuest.Sequence.push_back(QUEST_SEQ_MESSAGE("�˰��� �츮�� �þҴ� ������Ʈ�� �������� ������ �������� ���̾���."));
	//stQuest.Sequence.push_back(QUEST_SEQ_MESSAGE("�Ƹ� �״�ô� 48�ð� ���� �׵��� �ڵ��ϰ� ������ Ż���ؿ� �� ������ �� ����."));
	//stQuest.Sequence.push_back(QUEST_SEQ_MESSAGE("�Ƹ��� Ÿ�Ӹӽ� ����� �ҿ����ؼ� ���Ű� �ƴ϶� �̷��� �͹��ȳ�����."));
	//stQuest.Sequence.push_back(QUEST_SEQ_MESSAGE("���� ȸ�������ְ� ���� �����غ�."));
	//stQuest.Sequence.push_back(QUEST_SEQ_MESSAGE("����������..?"));
	//stQuest.Sequence.push_back(QUEST_SEQ_REWARD("�����ص� ����Ĵϱ�.", 0x003F));
	//vecQuest.push_back(stQuest);

	//// � ������
	//stQuest.nNpcId = 128;
	//stQuest.Sequence.clear();
	//stQuest.Sequence.push_back(QUEST_SEQ_CONDITION("���� �� ��� ǥ���� ���� �� Ȯ���ϰ� �Գ�����.", ST_FILTER(128, 0xFFFF, 0x003F)));
	//stQuest.Sequence.push_back(QUEST_SEQ_MESSAGE("��¥ � �������� �´ٱ�."));
	//stQuest.Sequence.push_back(QUEST_SEQ_MESSAGE("�� 25���̾�."));
	//stQuest.Sequence.push_back(QUEST_SEQ_MESSAGE("����� ���� �Ƿ���."));
	//stQuest.Sequence.push_back(QUEST_SEQ_MESSAGE("�� BoB ���������� ��Ƽ�μ� ���� ���� �� �ִٴ� ���̾�."));
	//stQuest.Sequence.push_back(QUEST_SEQ_MESSAGE("���� ������. C++ ������ Ȯ���� ����Ʈ ���ٰ�."));
	//stQuest.Sequence.push_back(QUEST_SEQ_REWARD("���� ĳ���ͷ� �����ϸ� ���� �Բ� BoB�� ������ �� �־�.", 0xFFFF));
	//vecQuest.push_back(stQuest);
}
