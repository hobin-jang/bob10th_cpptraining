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
	npc.y = 5;
	npc.z = 1;
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
	npc.vecSmallImage.push_back("	  .:$$*:		");
	npc.vecSmallImage.push_back("	  =$$$$$!-		");
	npc.vecSmallImage.push_back("	 :==$$$$==~		");
	npc.vecSmallImage.push_back("	 $=$$$=$=$=		");
	npc.vecSmallImage.push_back("	 $=!,. .~$$		");
	npc.vecSmallImage.push_back("	 $!.    ,!$		");
	npc.vecSmallImage.push_back("	 ;-��    ��;		");
	npc.vecSmallImage.push_back("	 ---~.,~-~~		");
	npc.vecSmallImage.push_back("	 ~,~~..:~-~		");
	npc.vecSmallImage.push_back("	 ,,   ...--		");
	npc.vecSmallImage.push_back("	  ,  ....-		");
	npc.vecSmallImage.push_back("	  .,.,,.,,		");
	npc.vecSmallImage.push_back("	   ,,,,--		");
	npc.vecSmallImage.push_back("	   -...,~		");
	npc.vecSmallImage.push_back("	   --,--~,		");
	npc.vecSmallImage.push_back("	 ~:-------*~	");
	npc.vecSmallImage.push_back("   ~=$!,,----!$$=*	");
	npc.vecSmallImage.push_back(" *$$$$#$-,,-!$$$$$$=");
	npc.vecSmallImage.push_back("$$$$$$$$$$##$$$$$$$$");
	npc.vecSmallImage.push_back("$$$$$$$$$$$$$$$$$$$$");
	npc.vecSmallImage.push_back("$$$$$$$$$$$$$$$$$$$$");
	npc.vecSmallImage.push_back("$$$$$$$$$$$$$$$$$$$$");
	npc.vecSmallImage.push_back("##$$$$$$$$$$$$$$$$$$");
	npc.vecSmallImage.push_back("##$$$$$$$$$$$$$$$$$$");
	
	npc.strContents1 =
		"�ܿ��� �������°���?\n"
		"�� ����Ÿ�� �ʹ�\n"
		"..�ܿ� �ʹ� ª���� �ƴϾ�?\n"
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

	// �ܿ�������
	{
		ST_QUEST_DATA stQuest;
		stQuest.nNpcId = 135;
		stQuest.StartCondition = ST_FILTER(135, 0x0003, 0x0007);
		stQuest.vecMessages.push_back("�ȹ��ſ���? ���� ..����");
		stQuest.vecMessages.push_back("[����캸��]�� �����߽��ϴ�.");
		stQuest.ClearCondition = ST_FILTER(135, 0x000F);
		vecQuest.push_back(stQuest);
	}
}
