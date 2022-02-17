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

/*
	  .:$$*:
	  =$$$$$!-
	 :==$$$$==~
	 $=$$$=$=$=
	 $=!,. .~$$
	 $!.    ,!$
	 ;-.   .-~;
	 ---~.,~-~~
	 ~,~~..:~-~
	 ,,   ...--
	  ,  ....-
	  .,.,,.,,
	   ,,,,--
	   -...,~
	   --,--~,
	 ~:-------*~
   ~=$!,,----!$$=*
 *$$$$#$-,,-!$$$$$$=
$$$$$$$$$$##$$$$$$$$
$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$
##$$$$$$$$$$$$$$$$$$
##$$$$$$$$$$$$$$$$$$
*/

void CQuestInfo::QueryNpcEx(std::vector<ST_QUEST_NPC_DATA>& vecNPC)
{
	ST_QUEST_NPC_DATA npc;
	npc.x = 13;
	npc.y = 2;
	npc.z = 19;
	npc.nNpcID = 135;
	npc.strTrack = "���Ȱ���Ʈ��";
	npc.strName = "�ܿ�������";
	npc.nAge = 25;
	npc.strMBTI = "ENTJ�̰� A���Դϴ�.";
	npc.cPatch = 'G';
	npc.strMessage = "�߿�� �ʹ� ���ƿ�. �� ���̿����� ���ڴ�!";


	npc.vecBigImage.push_back("                    .-,~                          ");
	npc.vecBigImage.push_back("                 .,:$=$$$$..                      ");
	npc.vecBigImage.push_back("              -:*=$=$=$$$=$=!                     ");
	npc.vecBigImage.push_back("              -=======$$$#$$$*-.                  ");
	npc.vecBigImage.push_back("             .$===$$$$$$$#$$$$==:                 ");
	npc.vecBigImage.push_back("             ~$$$$$$$$$$$=##$$=*=;                ");
	npc.vecBigImage.push_back("            ,$=$$===$=$##$$#$$$*=$*               ");
	npc.vecBigImage.push_back("            =======$$$$$##$$$$$**=$*              ");
	npc.vecBigImage.push_back("            -=$$**=$$$$$$$#$$$$=*=$$$             ");
	npc.vecBigImage.push_back("            :$$=*$####$$$$$$$$$==$$$$,            ");
	npc.vecBigImage.push_back("            :$$=$===$$*;;!;;!*=*$$$$$:            ");
	npc.vecBigImage.push_back("            :$$$$==*;-,,,-,.,-:;=$$$$!            ");
	npc.vecBigImage.push_back("            :$$$==!~,.      ..,-;$$$$:            ");
	npc.vecBigImage.push_back("            :$$$=;-,.        ..,~*$$$~            ");
	npc.vecBigImage.push_back("            ~$$=;~,.         ..,-;=$$.            ");
	npc.vecBigImage.push_back("            .$$*~-.          ..,-:=$$             ");
	npc.vecBigImage.push_back("             $=:-,.          ..,-~!=$             ");
	npc.vecBigImage.push_back("             $!--,-.         .----:=$             ");
	npc.vecBigImage.push_back("             =;--!!!;-.   .,:;*!;-~*=             ");
	npc.vecBigImage.push_back("             ,;------~~...,~~---~~~*.             ");
	npc.vecBigImage.push_back("            .-:--,,-~-,,..,-~;~----;-,            ");
	npc.vecBigImage.push_back("            ,--,,~;**:-. .,~~=!!~--:--            ");
	npc.vecBigImage.push_back("            .,-,.,----,. .,,----,,-:~.            ");
	npc.vecBigImage.push_back("            .-~,.......   ..,,,,.,-:~.            ");
	npc.vecBigImage.push_back("             ,-,.  .. ..  .......,~~-             ");
	npc.vecBigImage.push_back("             ,--,.    ..  ,......,~~-             ");
	npc.vecBigImage.push_back("             .,-,.   ...  .,   .,-~,-             ");
	npc.vecBigImage.push_back("              ,-,.   ... ....  .,-~-              ");
	npc.vecBigImage.push_back("               .-,.   ,-,--,. ..-~.               ");
	npc.vecBigImage.push_back("                -,... .---~, ..,-~                ");
	npc.vecBigImage.push_back("                -,,.....,..,,.,,-~                ");
	npc.vecBigImage.push_back("                ,-,,,~----~~~,,--                 ");
	npc.vecBigImage.push_back("                 -,,..-...,-,.,-~                 ");
	npc.vecBigImage.push_back("                 ,,,.........,---                 ");
	npc.vecBigImage.push_back("                 .-,,.......,,-~-                 ");
	npc.vecBigImage.push_back("                  ~,.......,,,-~~                 ");
	npc.vecBigImage.push_back("                  --,....,,,,-~~:                 ");
	npc.vecBigImage.push_back("                 .--~,,,,,,--~~~~.                ");
	npc.vecBigImage.push_back("                 ,---~~----~~~--~~~               ");
	npc.vecBigImage.push_back("              .- ----~~~~~~~~----~=:--            ");
	npc.vecBigImage.push_back("              !$-----------~------=$=$,           ");
	npc.vecBigImage.push_back("           ,:*$$-,,,,,------------=$$$$!:,        ");
	npc.vecBigImage.push_back("        ..$$$$$$~,,,,,,----------~$$$$$=$==~.     ");
	npc.vecBigImage.push_back("       !$$=$$$$$$;---,,,----,----;$$$$$$=====*!,  ");
	npc.vecBigImage.push_back("    -;$$$$$$$$$$$#;~-,,,,,,,,---:$$$$$$$========;-");
	npc.vecBigImage.push_back("  -=$$$$$$$$$$$$$$#$*~,,--,,,--$$$$$$$$$==$$$$$$$=");
	npc.vecBigImage.push_back(".!$$$$$$$$$$$$$$$$$###*****!*=$$$$$$$$$$$$$$$$$$$$");
	npc.vecBigImage.push_back("$$$$$$$$$$$$$$$$$$$$$#$#$#$#$$#$$$$$$$$$$$$$$$$$$$");
	npc.vecBigImage.push_back("$$$$$$$$$$$$$$$$$$$$#$#$$#$#$##$$$$$$$$$$$$$$$$$$$");
	npc.vecBigImage.push_back("$$$$$$$$$$$$$$$$$$$$$$$$$#$#$$$$$$$$$$$$$$$$$$$$$$");
	npc.vecBigImage.push_back("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$");
	npc.vecBigImage.push_back("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$");
	npc.vecBigImage.push_back("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$");
	npc.vecBigImage.push_back("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$");
	npc.vecBigImage.push_back("#$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$");
	npc.vecBigImage.push_back("#$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$");
	npc.vecBigImage.push_back("#$#$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$");
	npc.vecBigImage.push_back("####$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$");
	npc.vecBigImage.push_back("#####$$$$$$$$$$$$$$$$#$$$$$$$$$$$$$$$$$$$$$$$$$$$$");
	npc.vecBigImage.push_back("####$$$$$$$$$$$$$$$$$##$$$$$$$$$$$$$$$$$$$$$$$$$$$");
	npc.vecBigImage.push_back("####$$$$$$$$$$$$$$$$$###$$$$$$$$$$$$$$$$$$$$$$$$$$");
	npc.vecBigImage.push_back("######$$$$$$$$$$$$$$$$##$$$$$$$$$$$$$$$$$$$$$$$$$$");


	//npc.vecBuffer;
	//npc.vecSmallImage.resize(25);
	npc.vecSmallImage.push_back("	   .:$$*:");
	npc.vecSmallImage.push_back("	  =$$$$$!-");
	npc.vecSmallImage.push_back("	 :==$$$$==~");
	npc.vecSmallImage.push_back("	 $=$$$=$=$=");
	npc.vecSmallImage.push_back("	 $=!,. .~$$");
	npc.vecSmallImage.push_back("	 $!.    ,!$");
	npc.vecSmallImage.push_back("	 ;-��    ��;");
	npc.vecSmallImage.push_back("	 ---~.,~-~~");
	npc.vecSmallImage.push_back("	 ~,~~..:~-~");
	npc.vecSmallImage.push_back("	 ,,   ...--");
	npc.vecSmallImage.push_back("	  ,  ....-");
	npc.vecSmallImage.push_back("	  .,.,,.,,");
	npc.vecSmallImage.push_back("	   ,,,,--");
	npc.vecSmallImage.push_back("	   -...,~");
	npc.vecSmallImage.push_back("	   --,--~,");
	npc.vecSmallImage.push_back("	 ~:-------*~");
	npc.vecSmallImage.push_back("   ~=$!,,----!$$=*");
	npc.vecSmallImage.push_back(" *$$$$#$-,,-!$$$$$$=");
	npc.vecSmallImage.push_back("$$$$$$$$$$##$$$$$$$$");
	npc.vecSmallImage.push_back("$$$$$$$$$$$$$$$$$$$$");
	npc.vecSmallImage.push_back("$$$$$$$$$$$$$$$$$$$$");
	npc.vecSmallImage.push_back("$$$$$$$$$$$$$$$$$$$$");
	npc.vecSmallImage.push_back("##$$$$$$$$$$$$$$$$$$");
	npc.vecSmallImage.push_back("##$$$$$$$$$$$$$$$$$$");
	
	npc.strContents1 =
		"�ȳ� ����� ���迡 �°��� ������ ȯ����\n"
		"���� ����� ��Ȱ�� �ϸ鼭 �ܿ���� ������! �����غ���!\n"
		;

	npc.strContents2 = "�ۼ���...";
	npc.strContents3 = "�ۼ���...";
	npc.strContents4 = "�ۼ���...";	

	vecNPC.push_back(npc);
}

void CQuestInfo::QueryQuestObject(std::vector<ST_QUEST_OBJECT>& vecQuestObject)
{
	ST_QUEST_OBJECT stObject;
	stObject.nQuestObjectId = 281;
	stObject.strName = "����캸��";
	stObject.cPatch = 0;	// ȭ�鿡 �������� �ʰ� ���������� �ʰ� �Ϸ��� 0�� ������ ��
	stObject.x = 5;
	stObject.y = 10;
	stObject.z = 18;
	stObject.reserved = 0;
	vecQuestObject.push_back(stObject);
}



void CQuestInfo::QueryQuestItem(std::vector<ST_QUEST_ITEM_DATA>& vecQuestItem)
{
	{
		ST_QUEST_ITEM_DATA item;
		item.btId = 137;
		item.strName = "������ ����캸��";
		item.strDesc = "�������� CTF �Ϸ����ٰ� ���ѱ�� ���� �ϴ�.";
		item.nHP = 0;
		item.nMP = 0;
		vecQuestItem.push_back(item);

	}

	{
		ST_QUEST_ITEM_DATA item;
		item.btId = 138;
		item.strName = "��ȭĮ�� ����";
		item.strDesc = "��û�� ������ ���Կ� �Բ� �� �� ���� �ڽŰ��� �ſ� ����Ѵ�.";
		item.nHP = 0;
		item.nMP = 110;
		vecQuestItem.push_back(item);

	}
}

//����Ʈ ����
void CQuestInfo::QueryQuestMonster(std::vector<ST_QUEST_MONSTER_DATA>& vecQuestMonster)
{
	{
		ST_QUEST_MONSTER_DATA monster;
		monster.dwMonsterId = 20010;
		monster.strName = "����";
		monster.btLevel = 49;
		monster.nHP = 777;
		monster.btAttack = 22;
		monster.btDex = 3;
		monster.btVulnerability = JOB_TYPE_NOVICE;
		monster.nRewardMoney = 432;
		monster.nRewardExp = 303;
		monster.vecRewardItems.push_back(138);
		vecQuestMonster.push_back(monster);
	}
}

void CQuestInfo::QueryQuest(std::vector<ST_QUEST_DATA>& vecQuest)
{

	// �ܿ�������
	{
		ST_QUEST_DATA stQuest;
		stQuest.nNpcId = 135;
		stQuest.StartCondition = ST_FILTER(135, 0x0000, 0x0001);
		stQuest.vecMessages.push_back("Ȥ�� Ȱ������ ��� �?!");
		stQuest.vecMessages.push_back("�߿� �ܿ￡ �� �´°� �ִٰ�!");
		stQuest.vecMessages.push_back("�ٷ� �̰�... ��..? �� ����캸�尡 �����?");
		stQuest.vecMessages.push_back("�� ��򰡿� �ΰ� �� �� ������...");
		stQuest.vecMessages.push_back("18���� �ΰ�� ����캸�� �� ������ �� �� �־�?!!");
		stQuest.ClearCondition = ST_FILTER(135, 0x0003);
		vecQuest.push_back(stQuest);
	}


	// ����
	{
		ST_QUEST_DATA stQuest;
		stQuest.nNpcId = 281;
		stQuest.StartCondition = ST_FILTER(135, 0x0001, 0x0003);
		stQuest.vecMessages.push_back("ã�Ҵ�! ����캸��!");
		stQuest.vecMessages.push_back("�������� ��û ũ��... Ű�� �����ѵ�..?");
		stQuest.vecMessages.push_back("�̷��� ū�� ��� Ÿ��..");
		stQuest.vecMessages.push_back("[����캸��]�� ȹ���߽��ϴ�.");
		stQuest.vecMessages.push_back("�ܿ������뿡�� ������߰ڴ�.");
		stQuest.ClearCondition = ST_FILTER(135, 0x0007);
		vecQuest.push_back(stQuest);
	}

	//���� �̺�Ʈ
	{
		ST_QUEST_DATA stQuest;
		stQuest.nNpcId = 135;
		stQuest.StartCondition = ST_FILTER(135, 0x0003, 0x0007);
		stQuest.vecMessages.push_back("�ȹ��ſ���? ���� ..����");
		stQuest.vecMessages.push_back("(���� ���ſ���.. ���� ġ�������� �ʹ�.)");
		stQuest.vecMessages.push_back("[����캸��]�� �����߽��ϴ�.");
		stQuest.vecMessages.push_back("�� �׸��� ������ ���� ���� ���̿ͼ� ���̾�..");
		stQuest.vecMessages.push_back("���� ���� ���� ������ �ƴϾ�?");
		stQuest.vecMessages.push_back("�����ѵ�.. ���� ���̿��� ���ΰ� �� �ʹ� �����̾�");
		stQuest.vecMessages.push_back("��.... �׷���..?");
		stQuest.vecMessages.push_back("������ �����ϴٰ� �����̽��� ���� �� ����� �ְŵ�.. ���� ���������");
		stQuest.vecMessages.push_back("�װ� �� �ȵƱ���.");
		stQuest.vecMessages.push_back("�ܿ�ö ������... ���� �� ����!");
		stQuest.vecMessages.push_back("���ڱ�? ����? ����? ����?!");
		stQuest.ClearBattle.btMinPlayerCount = 1;
		stQuest.ClearBattle.vecMonster.push_back(20010);
		stQuest.ClearCondition = ST_FILTER(135, 0x000F);
		vecQuest.push_back(stQuest);

		
	}


	// �ܿ������� �ѹ��� ��Ź..
	{
		ST_QUEST_DATA stQuest;
		stQuest.nNpcId = 135;
		stQuest.StartCondition = ST_FILTER(135, 0x0007, 0x000F);
		stQuest.vecMessages.push_back("���.. ���������� ����Ÿ�� ���� �߿��� CTF�� �ִµ�.. ");
		stQuest.vecMessages.push_back("��.. �� ���� �����ΰž�..");
		stQuest.vecMessages.push_back("�����ص״� Write up �������� ��Դٰ� �ΰ�Գ���..");
		stQuest.vecMessages.push_back("�̹���.. ���� �������� �ȵǴ°ž�? �� �������� �ߴµ�..");
		stQuest.vecMessages.push_back("���� �߿��Ѱǵ�.. ���.. �ȵɱ�?! ������ �𸣰����� ���� �ٸ��� ����!");
		stQuest.vecMessages.push_back("(���� ���� ���ٿ���..) ��.. �˾Ҵ�...");
		stQuest.vecMessages.push_back("���� ����! ���п� CTF ������ �غ��غ���! ");
		stQuest.ClearCondition = ST_FILTER(135, 0x001F);
		vecQuest.push_back(stQuest);
	}
	//�Ĵ翡�� Write up ã��
	{
		ST_QUEST_DATA stQuest;
		stQuest.nNpcId = 10021;
		stQuest.StartCondition = ST_FILTER(135, 0x001F, 0x003F);
		stQuest.vecMessages.push_back("Ȥ�� ���� ���� Write-up �ΰ� �� �� ���ź� �ֳ���?!");
		stQuest.vecMessages.push_back("??? : ��..�ʿ�...");
		stQuest.vecMessages.push_back("(�� ������.. �ܹ��� ������ ���ε�..)");
		stQuest.vecMessages.push_back("(��.. �׷� �߿��� CTF��ϱ� �� �� ���� ��������..)");
		stQuest.vecMessages.push_back("(��.. �� ����... ���ݸ� ����..)");
		stQuest.vecMessages.push_back("(������!)");
		stQuest.ClearCondition = ST_FILTER(135, 0x007F);
		vecQuest.push_back(stQuest);
	}


	// ������
	{
		ST_QUEST_DATA stQuest;
		stQuest.nNpcId = 135;
		stQuest.StartCondition = ST_FILTER(135, 0x003F, 0x007F);
		stQuest.vecMessages.push_back("��.. ���� Write up �̰� ����?");
		stQuest.vecMessages.push_back("�� �¾Ƹ¾� �ٵ� �� Write up���� ���ִ� ������ ����?!");
		stQuest.vecMessages.push_back("�� �۽�.. ���ִ� ������ ����� �����ϱ�..?");
		stQuest.vecMessages.push_back("�� ��ġ��ġ �´¸��ε�..?");
		stQuest.vecMessages.push_back("�ƹ�ư! �ʵ� Write up �� �����ص�! ��ó�� �Ҿ������ ����!\n Github�� Ctftime�� ���ڲ��� ���ε带 �ص��ڱ�");
		stQuest.vecMessages.push_back("���п� CTF ������ �غ��ϰ� �ߵǸ� ���嵵 Ÿ�� ���߰ڴ�!\n CTF ������ ���ϰų� �ܿﰨ���� �׸���� ������ ���� ã�ƿ�! ������ ȯ���̾�!");
		stQuest.vecRewardItems.push_back(137);
		stQuest.ClearCondition = ST_FILTER(135, 0xFFFF);
		vecQuest.push_back(stQuest);
	}
}
