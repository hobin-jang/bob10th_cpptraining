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
	npc.vecSmallImage.push_back("	   .:$$*:");
	npc.vecSmallImage.push_back("	  =$$$$$!-");
	npc.vecSmallImage.push_back("	 :==$$$$==~");
	npc.vecSmallImage.push_back("	 $=$$$=$=$=");
	npc.vecSmallImage.push_back("	 $=!,. .~$$");
	npc.vecSmallImage.push_back("	 $!.    ,!$");
	npc.vecSmallImage.push_back("	 ;-☆    ☆;");
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
		"안녕 비오비 세계에 온것을 정말로 환영해\n"
		"알찬 비오비 생활을 하면서 겨울까지 알차게! 도달해보자!\n"
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



void CQuestInfo::QueryQuestItem(std::vector<ST_QUEST_ITEM_DATA>& vecQuestItem)
{
	{
		ST_QUEST_ITEM_DATA item;
		item.btId = 137;
		item.strName = "버려진 스노우보드";
		item.strDesc = "누군가가 CTF 하러간다고 떠넘기고 간듯 하다.";
		item.nHP = 0;
		item.nMP = 0;
		vecQuestItem.push_back(item);

	}

	{
		ST_QUEST_ITEM_DATA item;
		item.btId = 138;
		item.strName = "염화칼슘 포대";
		item.strDesc = "엄청난 포대의 무게와 함께 알 수 없는 자신감이 매우 상승한다.";
		item.nHP = 0;
		item.nMP = 110;
		vecQuestItem.push_back(item);

	}
}

//퀘스트 몬스터
void CQuestInfo::QueryQuestMonster(std::vector<ST_QUEST_MONSTER_DATA>& vecQuestMonster)
{
	{
		ST_QUEST_MONSTER_DATA monster;
		monster.dwMonsterId = 20010;
		monster.strName = "제설";
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

	//제설 이벤트
	{
		ST_QUEST_DATA stQuest;
		stQuest.nNpcId = 135;
		stQuest.StartCondition = ST_FILTER(135, 0x0003, 0x0007);
		stQuest.vecMessages.push_back("안무거웠어? 정말 ..고마워");
		stQuest.vecMessages.push_back("(정말 무거웠다.. 빨리 치워버리고 싶다.)");
		stQuest.vecMessages.push_back("[스노우보드]를 전달했습니다.");
		stQuest.vecMessages.push_back("아 그리고 요즈음 눈이 정말 많이와서 말이야..");
		stQuest.vecMessages.push_back("눈이 많이 오면 좋은거 아니야?");
		stQuest.vecMessages.push_back("좋긴한데.. 눈이 많이오면 도로가 얼어서 너무 걱정이야");
		stQuest.vecMessages.push_back("아.... 그래서..?");
		stQuest.vecMessages.push_back("예전에 운전하다가 블랙아이스에 차가 돈 기억이 있거든.. 정말 무섭더라고");
		stQuest.vecMessages.push_back("그거 참 안됐구나.");
		stQuest.vecMessages.push_back("겨울철 제설은... 피할 수 없어!");
		stQuest.vecMessages.push_back("갑자기? 제설? 누가? 내가?!");
		stQuest.ClearBattle.btMinPlayerCount = 1;
		stQuest.ClearBattle.vecMonster.push_back(20010);
		stQuest.ClearCondition = ST_FILTER(135, 0x000F);
		vecQuest.push_back(stQuest);

		
	}


	// 겨울이지용 한번더 부탁..
	{
		ST_QUEST_DATA stQuest;
		stQuest.nNpcId = 135;
		stQuest.StartCondition = ST_FILTER(135, 0x0007, 0x000F);
		stQuest.vecMessages.push_back("잠깐.. 마지막으로 보드타기 전에 중요한 CTF가 있는데.. ");
		stQuest.vecMessages.push_back("하.. 또 뭐가 문제인거야..");
		stQuest.vecMessages.push_back("정리해뒀던 Write up 모음집을 밥먹다가 두고왔나봐..");
		stQuest.vecMessages.push_back("이번엔.. 직접 가져오면 안되는거야? 나 제설까지 했는데..");
		stQuest.vecMessages.push_back("정말 중요한건데.. 어떻게.. 안될까?! 왜인지 모르겠지만 내가 다리가 아파!");
		stQuest.vecMessages.push_back("(착한 내가 갔다오자..) 하.. 알았다...");
		stQuest.vecMessages.push_back("정말 고마워! 덕분에 CTF 열심히 준비해볼게! ");
		stQuest.ClearCondition = ST_FILTER(135, 0x001F);
		vecQuest.push_back(stQuest);
	}
	//식당에서 Write up 찾기
	{
		ST_QUEST_DATA stQuest;
		stQuest.nNpcId = 10021;
		stQuest.StartCondition = ST_FILTER(135, 0x001F, 0x003F);
		stQuest.vecMessages.push_back("혹시 여기 누가 Write-up 두고 간 거 보신분 있나요?!");
		stQuest.vecMessages.push_back("??? : 저..쪽에...");
		stQuest.vecMessages.push_back("(앗 저쪽은.. 잔반을 버리는 곳인데..)");
		stQuest.vecMessages.push_back("(하.. 그래 중요한 CTF라니까 코 딱 막고 꺼내오자..)");
		stQuest.vecMessages.push_back("(흡.. 으 냄새... 조금만 참자..)");
		stQuest.vecMessages.push_back("(건졌다!)");
		stQuest.ClearCondition = ST_FILTER(135, 0x007F);
		vecQuest.push_back(stQuest);
	}


	// 마무리
	{
		ST_QUEST_DATA stQuest;
		stQuest.nNpcId = 135;
		stQuest.StartCondition = ST_FILTER(135, 0x003F, 0x007F);
		stQuest.vecMessages.push_back("자.. 여기 Write up 이거 맞지?");
		stQuest.vecMessages.push_back("오 맞아맞아 근데 왜 Write up에서 맛있는 냄새가 나지?!");
		stQuest.vecMessages.push_back("음 글쎄.. 맛있는 지식이 담겨져 있으니까..?");
		stQuest.vecMessages.push_back("오 그치그치 맞는말인데..?");
		stQuest.vecMessages.push_back("아무튼! 너도 Write up 잘 정리해둬! 나처럼 잃어버리지 말고!\n Github나 Ctftime에 꼬박꼬박 업로드를 해두자구");
		stQuest.vecMessages.push_back("덕분에 CTF 열심히 준비하고 잘되면 보드도 타러 가야겠다!\n CTF 팀원을 구하거나 겨울감성이 그리우면 언제든 나를 찾아와! 언제든 환영이야!");
		stQuest.vecRewardItems.push_back(137);
		stQuest.ClearCondition = ST_FILTER(135, 0xFFFF);
		vecQuest.push_back(stQuest);
	}
}
