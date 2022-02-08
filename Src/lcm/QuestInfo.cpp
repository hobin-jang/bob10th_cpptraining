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
    npc.strTrack = "보안개발트랙";
    npc.strName = "이창모";
    npc.nAge = 25;
    npc.strMBTI = "ISTJ이고 B형이에요";
    npc.cPatch = 'L';
    npc.strMessage = "BoB에서 남는거는 인맥뿐이랬어.\n"
        "적극적으로 참여해서 다양한 트랙 사람들과 친해져야겠다.";

        
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
        "내가 BoB에 붙다니 뭐가 되긴 되는구나.\n"
        "그동안 열심히 공부한 보람이 있구나.\n"
        "BoB 다닐 동안은 열심히 살아야지.\n"
        "당연히 금주도 하고!\n"
        "8개월 술 끊는거야 껌이지~\n"
        "그럼 BoB 생활을 시작해볼까\n"
        ;
	npc.strContents2 =
		"보안제품개발 트랙의 정식 일원이 된 것 같아.\n"
		"과제 더미에 깔릴 생각에 심장이 두근두근\n"
		"바운스를 멈추지 않는구만.\n"
		"이대로 2차 프로젝트까지 달려야지.\n"
		;
	npc.strContents3 =
		"4개월 생각보다 후딱 가는구만!\n"
		"역시 우리 깨비팀은 대단해.\n"
		"전자 면역 메시지 보안 시스템을 이렇게나 잘 만들다니.\n"
		"이러면 또 술을 빼놓을 수가 없지.\n"
		"깨비팀 손이강 먹고 죽어~!\n"
		;
	npc.strContents4 =
		"이제 남은 퀘스트는 취직뿐이야.\n"
		"BoB 전에는 걱정만이 있었지만.\n"
		"이제는 걱정반 자신감반이야!.\n"
		"하...\n"
		"대사 생각하기 정말 힘드네요^^\n"
		"플레이 수고하셨습니다~\n"
		"BoB 생활 파이팅 하시기 바랍니다.\n"
		;

    vecNPC.push_back(npc);
}

void CQuestInfo::QueryQuestObject(std::vector<ST_QUEST_OBJECT>& vecQuestObject)
{
	{
		ST_QUEST_OBJECT stObject;
		stObject.nQuestObjectId = 261;
		stObject.strName = "진로이즈백";
		stObject.cPatch = 0;	// 화면에 보이지도 않고 만져지지도 않게 하려면 0을 넣으면 됨
		stObject.x = 23;
		stObject.y = 2;
		stObject.z = 1;
		stObject.reserved = 0;
		vecQuestObject.push_back(stObject);
	}

	{
		ST_QUEST_OBJECT stObject;
		stObject.nQuestObjectId = 269;
		stObject.strName = "프링글스";
		stObject.cPatch = 0;	// 화면에 보이지도 않고 만져지지도 않게 하려면 0을 넣으면 됨
		stObject.x = 23;
		stObject.y = 3;
		stObject.z = 1;
		stObject.reserved = 0;
		vecQuestObject.push_back(stObject);
	}
}

void CQuestInfo::QueryQuest(std::vector<ST_QUEST_DATA>& vecQuest)
{
	// 이창모
	{
		ST_QUEST_DATA stQuest;
		stQuest.nNpcId = 148;
		stQuest.StartCondition = ST_FILTER(148, 0x0000, 0x0001);
		stQuest.vecMessages.push_back("지친다 지쳐...");
		stQuest.vecMessages.push_back("아직도 7월이라고? 난 1년이나 보낸거 같은데");
		stQuest.vecMessages.push_back("이봐, 잘생긴 친구. 내 부탁을 들어줘.");
		stQuest.vecMessages.push_back("센터 1층에 맛있는 술이 있는데 가져다주지 않을래?");
		stQuest.vecMessages.push_back("그거라도 마시지 않으면 이 험한 세상에서 제정신을 붙잡지 못하겠어.");
		stQuest.vecMessages.push_back("고마워.기다릴게.");
		stQuest.vecMessages.push_back("아 참. 위치는 x: 23, y:2야. 왼쪽에서 말을 걸면 될거야.");
		stQuest.ClearCondition = ST_FILTER(148, 0x0003);
		vecQuest.push_back(stQuest);
	}

	// 진로이즈백
	{
		ST_QUEST_DATA stQuest;
		stQuest.nNpcId = 261;
		stQuest.StartCondition = ST_FILTER(148, 0x0001, 0x0003);
		stQuest.vecMessages.push_back("귀여운 두꺼비가 붙은 소주병을 발견했다.");
		stQuest.vecMessages.push_back("술은 누가 뭐래도 참이슬인데 이걸 찾다니 취향도 이상하군.");
		stQuest.vecMessages.push_back("어쨌든 원하는 걸 찾은 거 같으니 이창모에게 돌아가야겠어.");
		stQuest.ClearCondition = ST_FILTER(148, 0x0007);
		vecQuest.push_back(stQuest);
	}

	// 이창모
	{
		ST_QUEST_DATA stQuest;
		stQuest.nNpcId = 148;
		stQuest.StartCondition = ST_FILTER(148, 0x0003, 0x0007);
		stQuest.vecMessages.push_back("내 부탁을 들어주다니 정말 고마워.");
		stQuest.vecMessages.push_back("[진로이즈백]을 [이창모]에게 전달했습니다.");
		stQuest.vecMessages.push_back("(꿀꺽꿀꺽)");
		stQuest.vecMessages.push_back("근데 이걸 마시다 보니까 안주가 좀 땡기네.");
		stQuest.vecMessages.push_back("이왕 마실 거 제대로 마셔야되지 않겠어?");
		stQuest.vecMessages.push_back("아까 소주를 찾은 위치에 내가 정말 좋아하는 안주가 하나 있어.");
		stQuest.vecMessages.push_back("위치는 x: 23, y:3야. 고마워.");
		stQuest.vecMessages.push_back("그것도 하나만 더 갖다주지 않을래?");
		stQuest.vecMessages.push_back("(정말 술 주정뱅이구만)");
		stQuest.vecMessages.push_back("(그래도 불쌍하니 갖다주자)");
		stQuest.ClearCondition = ST_FILTER(148, 0x000F);
		vecQuest.push_back(stQuest);
	}

	// 프링글스
	{
		ST_QUEST_DATA stQuest;
		stQuest.nNpcId = 269;
		stQuest.StartCondition = ST_FILTER(148, 0x0007, 0x000F);
		stQuest.vecMessages.push_back("수염난 아저씨가 달린 프링글스를 발견했다.");
		stQuest.vecMessages.push_back("양파맛인거 보니 짭쪼름하게 술안주로 적당할 것 같다.");
		stQuest.vecMessages.push_back("이걸 갖고 이창모에게 다시 돌아가야겠다.");
		stQuest.ClearCondition = ST_FILTER(148, 0x001F);
		vecQuest.push_back(stQuest);
	}

	// 이창모
	{
		ST_QUEST_DATA stQuest;
		stQuest.nNpcId = 148;
		stQuest.StartCondition = ST_FILTER(148, 0x000F, 0x001F);
		stQuest.vecMessages.push_back("어~ 왔어? 냬가 먈이야~");
		stQuest.vecMessages.push_back("처음에 BoB 왔을 떄 말이야~.");
		stQuest.vecMessages.push_back("알코올을 끊곘댜교 먈이야~.");
		stQuest.vecMessages.push_back("댜짐을 했댜 말이야~.");
		stQuest.vecMessages.push_back("(누가 봐도 취했군 어휴)");
		stQuest.vecMessages.push_back("근데 갸끔은 먈이야~");
		stQuest.vecMessages.push_back("슐슐슐~이 필요할 때가 있는 거 걑야~");
		stQuest.vecMessages.push_back("(갑자기 세수하는 이창모)");
		stQuest.vecMessages.push_back("고마워. 너 정말 착한 아이구나. 다시 제정신을 차린 것 같아.");
		stQuest.vecMessages.push_back("덕분에 다시 달릴 수 있겠어.");
		stQuest.vecMessages.push_back("나중에 도움이 필요할 때 찾아와.");
		stQuest.vecMessages.push_back("내가 꿀팁들 많이 방출해줄게.");
		stQuest.vecMessages.push_back("(퀘스트를 완료했습니다.)");
		stQuest.ClearCondition = ST_FILTER(148, 0x003F);
		vecQuest.push_back(stQuest);
	}
}