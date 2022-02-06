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
	npc.x = 12;
	npc.y = 4;
	npc.z = 18;
	npc.nNpcID = 149;
	npc.strTrack = "보안제품개발트랙";
	npc.strName = "꿈꾸는 현종";
	npc.nAge = 27;
	npc.strMBTI = "ENTP, O형입니다";
	npc.cPatch = 'P';
	npc.strMessage = "BoB에 대해 알아가고 싶나요..?";

	npc.vecBigImage.push_back(",,,,,,..............,,,~*;----");
	npc.vecBigImage.push_back(".....................,-~!*,---");
	npc.vecBigImage.push_back(".........,,~:---,,....,   .---");
	npc.vecBigImage.push_back(".......~!====*=*!*:,..   .,---");
	npc.vecBigImage.push_back("......,*=$$$##*!*=*:-..,,,,---");
	npc.vecBigImage.push_back("......!=*$$=$$$=;$*!:-,,,,,,--");
	npc.vecBigImage.push_back(".....-**=*;=**$===*=:-.,,,,---");
	npc.vecBigImage.push_back(".....$=$$$==*=$$*=*$=!.,,,,,,-");
	npc.vecBigImage.push_back(".....*$=$$$##$$#$**$==,.,,,,,-");
	npc.vecBigImage.push_back(".....=####@##$$$#$$$#$~..,,,,-");
	npc.vecBigImage.push_back("....,$@@@@@@@#@#@#@###;...,,,,");
	npc.vecBigImage.push_back(".....$@@@@@@@#$$@#@@@#;....,,,");
	npc.vecBigImage.push_back(".....$@#@#$##*!=#*$##$-.....,,");
	npc.vecBigImage.push_back(".....,@=*=#*!:-;!!~:*=......,,");
	npc.vecBigImage.push_back("......#-~::~:~,~:*:~--......,,");
	npc.vecBigImage.push_back("......$---~--,.-~~---;......,,");
	npc.vecBigImage.push_back(",,,,,,;-,,,,,..,,---,......,,,");
	npc.vecBigImage.push_back("......-~-,,-,..,-,,,,.. ...,,,");
	npc.vecBigImage.push_back(".......~---~:~---,,-..,,..,,,,");
	npc.vecBigImage.push_back(";......,~-,,~;--,,-,..,,***;;~");
	npc.vecBigImage.push_back(";......,~---~---,--, ...!****~");
	npc.vecBigImage.push_back("-.......~~~~~--~~--..  .:===$~");
	npc.vecBigImage.push_back(",.......-:~~~~----,.   .....,.");
	npc.vecBigImage.push_back("..,.-:;!::~---,,--. ... ......");
	npc.vecBigImage.push_back("----~!;$:~::~~--~-    .    ...");
	npc.vecBigImage.push_back("~-~~:;;=:~~;!:;:--,  ...... ..");
	npc.vecBigImage.push_back("~-~~~;;!:~~~:;:~-~~..... .....");
	npc.vecBigImage.push_back("~~:~~~;;:~~::~--~;~~-.........");
	npc.vecBigImage.push_back("~~:!~~;:~-~:~--:;!!:-,... ....");
	npc.vecBigImage.push_back("~~~:*~::,,--~~~;!*:~::-...   .");
	npc.vecBigImage.push_back("~~--;~~:,,,~;!!**:~~~~-~,..  .");
	npc.vecBigImage.push_back("~~~~~~:::,~==$*!~;!~~--~-,   .");
	npc.vecBigImage.push_back("~~~~;!~~:;***!*=**~~-~----.  .");
	npc.vecBigImage.push_back("~::~:!!~:!;;;!;;;::-~~---~~...");
	npc.vecBigImage.push_back("~:~:~:**~;:;!;~:~;~,~-,-~---. ");
	npc.vecBigImage.push_back("::~:~:;;*;:;;:~~:~--~--~----..");
	npc.vecBigImage.push_back("::::~::~;:;;::::~-~~--~~-----,");
	npc.vecBigImage.push_back("::;:::~:~;:~!::;~~~--:~-~--,~,");
	npc.vecBigImage.push_back(";:::::~~~!~;!:;~~!~~~~~----~,-");
	npc.vecBigImage.push_back(":;:::::~~~:!;;:~!!:-;:--~-~-~-");

	npc.vecSmallImage.push_back(".. .. ..............     ");
	npc.vecSmallImage.push_back("........!~--~; .....     ");
	npc.vecSmallImage.push_back("......!--------!....     ");
	npc.vecSmallImage.push_back(".. ~- ; -- - ::--------. ");
	npc.vecSmallImage.push_back(". .:; -; ******!----:.   ");
	npc.vecSmallImage.push_back(".... - !*; *******-- - ..");
	npc.vecSmallImage.push_back("..., -*~..; *----.       ");
	npc.vecSmallImage.push_back("...!- . .   . ..; --; .  ");
	npc.vecSmallImage.push_back("...; -.. .  ...; --:.    ");
	npc.vecSmallImage.push_back("...!- .!*. ..!.; --:.    ");
	npc.vecSmallImage.push_back("..., -*!..!*; ~--~       ");
	npc.vecSmallImage.push_back(".... - ....~:, ..-- - .. ");
	npc.vecSmallImage.push_back("...., ; ..; , ...~--...  ");
	npc.vecSmallImage.push_back("...... - !- ., * -- - . .");
	npc.vecSmallImage.push_back(".......!------~....      ");
	npc.vecSmallImage.push_back("... ...--...-- - ~....   ");
	npc.vecSmallImage.push_back(".......~- ... - :--....  ");
	npc.vecSmallImage.push_back("........, -..--~, ....   ");
	npc.vecSmallImage.push_back("......... - ~-- - ...... ");
	npc.vecSmallImage.push_back("..........; ~; .......   ");

	npc.strContents1 =
		"반가워요 ! 저는 BoB 10기 보안제품개발트랙 이현종이라고 해요. \n"
		"BoB 광장에 오신 것을 환영해요~~ \n"
		"이제부터 BoB 탑을 오를건데, \n"
		"(띠리링~~~) 여보세요~? \n"
		"죄송해요..! 바쁜일이 있어서 잠깐 어디좀 들렸다와야 할 것 같아요..\n"
		"탑을 오르면서 어려운 부분은 언제든 페메로 연락주세요!! \n"
		"아참 탑을 오르기전에 멘토님들을 꼭 뵙고 가봐요~ \n"
		"그럼 이만..!!\n"
		;
	npc.strContents2 = "..";
	npc.strContents3 = "..";
	npc.strContents4 = "..";

	vecNPC.push_back(npc);
}

void CQuestInfo::QueryQuestObject(std::vector<ST_QUEST_OBJECT>& vecQuestObject)
{
	ST_QUEST_OBJECT stObject;
	stObject.nQuestObjectId = 275;
	stObject.strName = "주제 선정 자료";
	stObject.cPatch = 0;
	stObject.x = 12;
	stObject.y = 17;
	stObject.z = 17;
	stObject.reserved = 0;
	vecQuestObject.push_back(stObject);
}

void CQuestInfo::QueryQuest(std::vector<ST_QUEST_DATA>& vecQuest)
{
	// 꿈꾸는 현종
	{
		ST_QUEST_DATA stQuest;
		stQuest.StartCondition = ST_FILTER(149, 0x0000, 0x0001);
		stQuest.vecMessages.push_back("안녕 ? 여기가 프로젝트 단계 층인건 알고있지 ?");
		stQuest.vecMessages.push_back("프로젝트 단계에서 큰 성장을 이룬 친구들이 많아서 BoB의 꽃으로 불린다고 해..!");
		stQuest.vecMessages.push_back("아 참.. 17층 마을에 메모장을 두고 왔네..");
		stQuest.vecMessages.push_back("마을에 가서 혹시 가져다줄 수 있어 ?");
		stQuest.vecMessages.push_back("가져다준다면 내가 프로젝트 하는데 중요하다고 느꼈던 부분 3가지를 알려줄게 !");
		stQuest.vecMessages.push_back("그럼 기다릴게..!");
		stQuest.ClearCondition = ST_FILTER(149, 0x0003);
		vecQuest.push_back(stQuest);
	}

	// 꿈꾸는 현종의 메모장
	{
		ST_QUEST_DATA stQuest;
		stQuest.StartCondition = ST_FILTER(275, 0x0001, 0x0003);
		stQuest.vecMessages.push_back("찾았다.. 꿈꾸는 현종의 메모장..!");
		stQuest.vecMessages.push_back("얼른 꿈꾸는 현종에게 가져다 주자 !");
		stQuest.vecMessages.push_back("[메모장]을 획득했습니다.");
		stQuest.ClearCondition = ST_FILTER(275, 0x0007);
		vecQuest.push_back(stQuest);
	}

	// 꿈꾸는 현종 엔딩
	{
		ST_QUEST_DATA stQuest;
		stQuest.StartCondition = ST_FILTER(149, 0x0003, 0x0007);
		stQuest.vecMessages.push_back("오.. 빨리 가져다 줬는걸? 덕분에 일을 잘 마무리할 수 있겠어 고마워 !");
		stQuest.vecMessages.push_back("아 맞다 3가지 알려주기로 했지.");
		stQuest.vecMessages.push_back("난 이 프로젝트 층을 진행하면서");
		stQuest.vecMessages.push_back("[팀원들의 열정], [내가 하고싶은 주제], [주제에 맞는 PL 선정]");
		stQuest.vecMessages.push_back("이 3가지가 중요하다고 생각했어 !");
		stQuest.vecMessages.push_back("이 3가지를 만족시킬 수 있도록 노력해봐 그럼 이만..!");
		stQuest.ClearCondition = ST_FILTER(149, 0x000F);
		vecQuest.push_back(stQuest);
	}
}