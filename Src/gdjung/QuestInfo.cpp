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
	npc.strTrack = "보안개발트랙";
	npc.strName = "겨울이지용";
	npc.nAge = 25;
	npc.strMBTI = "ENTJ이고 A형입니다.";
	npc.cPatch = 'G';
	npc.strMessage = "추운게 너무 좋아요. 눈 많이왔으면 좋겠다!";


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
	npc.vecSmallImage.push_back("	 ;-☆    ☆;		");
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
		"겨울은 언제오는거지?\n"
		"아 보드타고 싶다\n"
		"..겨울 너무 짧은거 아니야?\n"
		;

	npc.strContents2 = "작성중...";
	npc.strContents3 = "작성중...";
	npc.strContents4 = "작성중...";	

	vecNPC.push_back(npc);
}

void CQuestInfo::QueryQuestObject(std::vector<ST_QUEST_OBJECT>& vecQuestObject)
{
	ST_QUEST_OBJECT stObject;
	stObject.nQuestObjectId = 281;
	stObject.strName = "스노우보드";
	stObject.cPatch = 0;	// 화면에 보이지도 않고 만져지지도 않게 하려면 0을 넣으면 됨
	stObject.x = 5;
	stObject.y = 10;
	stObject.z = 18;
	stObject.reserved = 0;
	vecQuestObject.push_back(stObject);
}

void CQuestInfo::QueryQuest(std::vector<ST_QUEST_DATA>& vecQuest)
{

	// 겨울이지용
	{
		ST_QUEST_DATA stQuest;
		stQuest.nNpcId = 135;
		stQuest.StartCondition = ST_FILTER(135, 0x0000, 0x0001);
		stQuest.vecMessages.push_back("혹시 활동적인 취미 어때?!");
		stQuest.vecMessages.push_back("추운 겨울에 딱 맞는게 있다고!");
		stQuest.vecMessages.push_back("바로 이거... 어..? 내 스노우보드가 어디갔지?");
		stQuest.vecMessages.push_back("헉 어딘가에 두고 온 것 같은데...");
		stQuest.vecMessages.push_back("18층에 두고온 스노우보드 좀 가져다 줄 수 있어?!!");
		stQuest.ClearCondition = ST_FILTER(135, 0x0003);
		vecQuest.push_back(stQuest);
	}


	// 보드
	{
		ST_QUEST_DATA stQuest;
		stQuest.nNpcId = 281;
		stQuest.StartCondition = ST_FILTER(135, 0x0001, 0x0003);
		stQuest.vecMessages.push_back("찾았다! 스노우보드!");
		stQuest.vecMessages.push_back("생각보다 엄청 크네... 키가 나만한데..?");
		stQuest.vecMessages.push_back("이렇게 큰걸 어떻게 타지..");
		stQuest.vecMessages.push_back("[스노우보드]을 획득했습니다.");
		stQuest.vecMessages.push_back("겨울이지용에게 갖다줘야겠다.");
		stQuest.ClearCondition = ST_FILTER(135, 0x0007);
		vecQuest.push_back(stQuest);
	}

	// 겨울이지용
	{
		ST_QUEST_DATA stQuest;
		stQuest.nNpcId = 135;
		stQuest.StartCondition = ST_FILTER(135, 0x0003, 0x0007);
		stQuest.vecMessages.push_back("안무거웠어? 정말 ..고마워");
		stQuest.vecMessages.push_back("[스노우보드]를 전달했습니다.");
		stQuest.ClearCondition = ST_FILTER(135, 0x000F);
		vecQuest.push_back(stQuest);
	}
}
