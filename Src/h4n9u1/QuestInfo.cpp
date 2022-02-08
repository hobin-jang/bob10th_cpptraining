#include "pch.h"
#include "QuestInfo.h"

static CQuestInfo g_QuestInfo;

CQuestInfo::CQuestInfo()
{
	ExportAPIEntry(this);
}

CQuestInfo::~CQuestInfo()
{
	
}

void CQuestInfo::QueryNpc(std::vector<ST_QUEST_NPC_DATA>& vecNPC)
{
	//ST_QUEST_NPC_DATA npc;
	//strcpy_s(npc.szName, 21, "김훈민 멘티");
	//npc.patch = 'p';
	//strcpy_s(npc.szGreetMessage, 61, "..."); // 자기소개 추가 예정

	//// 사진이 없으므로 닉네임의 아스키코드를 넣음
	//npc.vecBuffer.resize(6);
	//npc.vecBuffer[0] = " _   _    ___  _   _  _____  _   _  __  ";
	//npc.vecBuffer[1] = "| | | |  /   || \\ | ||  _  || | | |/  | ";
	//npc.vecBuffer[2] = "| |_| | / /| ||  \\| || |_| || | | |`| | ";
	//npc.vecBuffer[3] = "|  _  |/ /_| || . ` |\\____ || | | | | | ";
	//npc.vecBuffer[4] = "| | | |\\___  || |\\  |.___/ /| |_| |_| |_";
	//npc.vecBuffer[5] = "\\_| |_/    |_/\\_| \\_/\\____/  \\___/ \\___/";

	//vecNPC.push_back(npc);
}

void CQuestInfo::QueryNpcEx(std::vector<ST_QUEST_NPC_DATA>& vecNPC)
{
	ST_QUEST_NPC_DATA npc;
	npc.x = 2;
	npc.y = 3;
	npc.z = 18;
	npc.nNpcID = 146;
	npc.strTrack = "취약점분석트랙";
	npc.strName = "김훈민(H4N9U1)";
	npc.nAge = 24;
	npc.strMBTI = "INTJ/P";
	npc.cPatch = 'H';
	npc.strMessage = "취약점분석... 프로그래밍 언어... DB... 네트워크.. 임베디드 시스템... 알고리즘... 컴파일러... 배우고 싶은 건 많은데 시간이 없네... 그렇다면 나 자신을 갈아넣어야지...";
	
	npc.strContents1 = ""; //인트로 멘트
	npc.strContents2 = ""; //전직
	npc.strContents3 = ""; //팀 프로젝트 완료
	npc.strContents4 = ""; //BoB 수료

	npc.vecBigImage.resize(6);
	npc.vecBigImage[0] = " _   _    ___  _   _  _____  _   _  __  ";
	npc.vecBigImage[1] = "| | | |  /   || \\ | ||  _  || | | |/  | ";
	npc.vecBigImage[2] = "| |_| | / /| ||  \\| || |_| || | | |`| | ";
	npc.vecBigImage[3] = "|  _  |/ /_| || . ` |\\____ || | | | | | ";
	npc.vecBigImage[4] = "| | | |\\___  || |\\  |.___/ /| |_| |_| |_";
	npc.vecBigImage[5] = "\\_| |_/    |_/\\_| \\_/\\____/  \\___/ \\___/";


	npc.vecSmallImage.resize(12);
	npc.vecSmallImage[0] = "                ";
	npc.vecSmallImage[1] = "        ___ ___ ";
	npc.vecSmallImage[2] = " .-.   |   |   |";
	npc.vecSmallImage[3] = " |E|___| N | D |";
	npc.vecSmallImage[4] = " |x| c | e |   |";
	npc.vecSmallImage[5] = " |p| / | t | B |";
	npc.vecSmallImage[6] = " |l| c | w |   |";
	npc.vecSmallImage[7] = " |o| p | o |   |";
	npc.vecSmallImage[8] = " |i| p | r |   |";
	npc.vecSmallImage[9] = " |t| ! | k |   |";
	npc.vecSmallImage[10] =" ---------------";
	npc.vecSmallImage[11] ="   h4n9u1.xyz  ";
	vecNPC.push_back(npc);
}

void CQuestInfo::QueryQuestObject(std::vector<ST_QUEST_OBJECT>& vecQuestObject)
{
	ST_QUEST_OBJECT stObject;
	stObject.nQuestObjectId = 265;
	stObject.strName = "포장되어 있는 램";
	stObject.cPatch = 0;
	stObject.x = 6;
	stObject.y = 3;
	stObject.z = 0;
	stObject.reserved = 0;
	vecQuestObject.push_back(stObject);
}


void CQuestInfo::QueryQuest(std::vector<ST_QUEST_DATA>& vecQuest)
{
	{
		ST_QUEST_DATA stQuest;
		stQuest.nNpcId = 146;
		stQuest.StartCondition = ST_FILTER(146, 0x0000, 0x0001);
		stQuest.vecMessages.push_back("원하는 대로 다 해줬잖아 대체 나한테 왜 그러는 거야!!");
		stQuest.vecMessages.push_back("이정도 했으면 좀 돌아가라고!!!!");
		stQuest.vecMessages.push_back("하... 이제는 블루스크린까지...?");
		stQuest.vecMessages.push_back("뭐가 문제지...? 오버한게 뻑난건 아닐테고... 램이 부족하나...?");
		stQuest.vecMessages.push_back("램을 또 언제 사오지...");
		stQuest.vecMessages.push_back("아! 후배 교육생님! 저 좀 한번만 도와주시겠어요?");
		stQuest.vecMessages.push_back("광장의 컴퓨터 상점에 가면 제가 주문 해놓은 램이 있을꺼에요.");
		stQuest.vecMessages.push_back("그것 좀 가져다 주시면 좋겠는데 부탁 한번만 들어주시겠어요?");
		stQuest.ClearCondition = ST_FILTER(146, 0x0003);
		vecQuest.push_back(stQuest);
	}

	{
		ST_QUEST_DATA stQuest;
		stQuest.nNpcId = 265;
		stQuest.StartCondition = ST_FILTER(146, 0x0001, 0x0003);
		stQuest.vecMessages.push_back("포장되어 있는 램이다.");
		stQuest.vecMessages.push_back("시금치램이라고 불리는 삼성 램에 용량은 32기가라고 적혀 있으며 2장이 들어있다.");
		stQuest.vecMessages.push_back("도대체 무엇을 하길래 이렇게 많은 램이 필요한거지...?");
		stQuest.vecMessages.push_back("일단 들고가자.");
		stQuest.vecMessages.push_back("[포장되어 있는 램]을 얻었다!");
		stQuest.ClearCondition = ST_FILTER(146, 0x0007);
	}

	{
		ST_QUEST_DATA stQuest;
		stQuest.nNpcId = 146;
		stQuest.StartCondition = ST_FILTER(146, 0x0003, 0x0007);
		stQuest.vecMessages.push_back("오 가져다 줘서 고마워요.");
		stQuest.vecMessages.push_back("이제 제대로 된 작업이 가능하겠네요.");
		stQuest.vecMessages.push_back("왜 이렇게 많은 램이 필요하냐고요? 흠...");
		stQuest.vecMessages.push_back("프로젝트마다 다르긴 하겠지만 프로젝트에 따라서 어머어마한 램을 요구하는 경우도 있어서");
		stQuest.vecMessages.push_back("물론 AWS 같은 걸 사용하면 좋겠지만 요금이 장난아니라서...");
		stQuest.vecMessages.push_back("뭐 아무튼 램은 크면 클수록 좋으니까 여유가 된다면 램을 확장해놓는게 좋아요.");
		stQuest.vecMessages.push_back("아 그리고 오버클럭을 하지 않거나 적당히 하는게 좋아요. 프로젝트 하다가 오버 뻑나서 꺼지기라도 하면...");
		stQuest.vecMessages.push_back("어떻게 아냐고요? ... 묻지 마세요.");
		stQuest.vecMessages.push_back("(그렇게 침울하게 변했다. 말걸기 무안하니 그냥 지니가자)");
		stQuest.ClearCondition = ST_FILTER(128, 0x000F);
		vecQuest.push_back(stQuest);
	}
}



