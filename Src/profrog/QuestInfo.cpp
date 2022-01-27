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
		npc.strTrack = "보안개발트랙";
		npc.strName = "[멘토]전상현";
		npc.nAge = 40;
		npc.strMBTI = "ENFJ이고 B형이에요";
		npc.cPatch = 'J';
		npc.strMessage = "게임 보안을 해보고 싶다면 날 찾아와.\n근데 C++이 어렵다고?\n뭘 잘 모르는구만.\n누구든 21일이면 마스터 할 수 있지.\n일단은 물리학과 생물학을 먼저 배워보자꾸나.";

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
		npc.strTrack = "보안개발트랙";
		npc.strName = "방황하는전상현";
		npc.nAge = 25;
		npc.strMBTI = "INFP 소심소심";
		npc.cPatch = 'P';
		npc.strMessage = "으으...\n"
			"게임 개발 지긋지긋해..\n"
			"두번 다시 안할거야.";

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
	stObject.strName = "분수대의 시원한 물";
	stObject.cPatch = 0;	// 화면에 보이지도 않고 만져지지도 않게 하려면 0을 넣으면 됨
	stObject.x = 35;
	stObject.y = 13;
	stObject.z = 0;
	stObject.reserved = 0;
	vecQuestObject.push_back(stObject);
}

void CQuestInfo::QueryQuest(std::vector<ST_QUEST_DATA>& vecQuest)
{
	// 어린 전상현
	{
		ST_QUEST_DATA stQuest;
		stQuest.nNpcId = 128;
		stQuest.StartCondition = ST_FILTER(128, 0x0000, 0x0001);
		stQuest.vecMessages.push_back("우우... 지친다 지쳐...");
		stQuest.vecMessages.push_back("게임 개발 정말 지긋지긋해");
		stQuest.vecMessages.push_back("48시간 동안 꼼짝도 못하고 코딩만 했다구");
		stQuest.vecMessages.push_back("나를 위해 광장 분수대에서 물 좀 한잔 떠다주겠어?");
		stQuest.ClearCondition = ST_FILTER(128, 0x0003, 0x0007);
		vecQuest.push_back(stQuest);
	}

	// 분수대
	{
		ST_QUEST_DATA stQuest;
		stQuest.nNpcId = 256;
		stQuest.StartCondition = ST_FILTER(128, 0x0001, 0x0003);
		stQuest.vecMessages.push_back("시원하게 분수가 쏟아져 나오고 있다.");
		stQuest.vecMessages.push_back("이걸 말하는건가?");
		stQuest.vecMessages.push_back("근데 왜 하필 분수대 물을 마시지..? ;;");
		stQuest.vecMessages.push_back("마침 버려진 종이컵이 여기 있군.");
		stQuest.vecMessages.push_back("[분수대의 시원한 물]을 획득했습니다.");
		stQuest.vecMessages.push_back("다시 방황하는전상현에게로 돌아가자.");
		stQuest.ClearCondition = ST_FILTER(128, 0x0003, 0);
		vecQuest.push_back(stQuest);
	}
	

	//// 어린 전상현
	//stQuest.nNpcId = 128;
	//stQuest.Sequence.clear();
	//stQuest.Sequence.push_back(QUEST_SEQ_CONDITION("엇? 정말 떠온거야?", ST_FILTER(128, 0xFFFF, 0x0003), 0x0007));
	//stQuest.Sequence.push_back(QUEST_SEQ_MESSAGE("[분수대의 시원한 물]을 전달했습니다."));
	//stQuest.Sequence.push_back(QUEST_SEQ_MESSAGE("정말 고마워 잘 마실게."));
	//stQuest.Sequence.push_back(QUEST_SEQ_MESSAGE("꿀꺽 꿀꺽 꿀꺽"));
	//stQuest.Sequence.push_back(QUEST_SEQ_MESSAGE("꿀꺽 꿀꺽 꿀꺽 꿀꺽 꿀꺽 꿀꺽"));
	//stQuest.Sequence.push_back(QUEST_SEQ_MESSAGE("꿀꺽 꿀꺽 꿀꺽 꿀꺽 꿀꺽 꿀꺽 꿀꺽 꿀꺽 꿀꺽"));
	//stQuest.Sequence.push_back(QUEST_SEQ_MESSAGE("..."));
	//stQuest.Sequence.push_back(QUEST_SEQ_MESSAGE("푸핫~ 살것 같다. 나 방금 죽을 뻔 했었어."));
	//stQuest.Sequence.push_back(QUEST_SEQ_MESSAGE("응?"));
	//stQuest.Sequence.push_back(QUEST_SEQ_MESSAGE("도대체 왜 그지경이 될 때까지 코딩했냐고?"));
	//stQuest.Sequence.push_back(QUEST_SEQ_CONDITION("그건... 전상현 멘토님께 여쭤봐.", ST_FILTER(128, 0xFFFF, 0x000F), 0));
	//vecQuest.push_back(stQuest);

	//// 전상현 멘토
	//stQuest.nNpcId = 4;
	//stQuest.Sequence.clear();
	//stQuest.Sequence.push_back(QUEST_SEQ_CONDITION("뭐야? C++ 공부하러 온거야?", ST_FILTER(128, 0xFFFF, 0x0007)));;
	//stQuest.Sequence.push_back(QUEST_SEQ_MESSAGE("..."));
	//stQuest.Sequence.push_back(QUEST_SEQ_MESSAGE("... 아니 그렇게까지 머리를 거칠게 흔들 필요는 없잖아."));
	//stQuest.Sequence.push_back(QUEST_SEQ_MESSAGE("뭐? 누가 나한테 물어보라고 했다고?"));
	//stQuest.Sequence.push_back(QUEST_SEQ_MESSAGE("그게 또다른 전상현이라고?"));
	//stQuest.Sequence.push_back(QUEST_SEQ_MESSAGE("하하하하"));
	//stQuest.Sequence.push_back(QUEST_SEQ_MESSAGE("하하하하하하하하"));
	//stQuest.Sequence.push_back(QUEST_SEQ_MESSAGE("하하하하하하하하하하하하하하하하"));
	//stQuest.Sequence.push_back(QUEST_SEQ_MESSAGE("말 같잖은 소리. 자네는 아무래도 공상과학 영화를 너무 많이 본것 같네."));
	//stQuest.Sequence.push_back(QUEST_SEQ_REWARD("혹시 모르지 어떤 증거가 있으면 내가 믿을지도.", 0x000F));
	//vecQuest.push_back(stQuest);

	//// 어린 전상현
	//stQuest.nNpcId = 128;
	//stQuest.Sequence.clear();
	//stQuest.Sequence.push_back(QUEST_SEQ_CONDITION("사정은 잘 들어봤어?", ST_FILTER(128, 0xFFFF, 0x000F)));
	//stQuest.Sequence.push_back(QUEST_SEQ_MESSAGE("전상현 멘토님이 날 안 믿는다고?"));
	//stQuest.Sequence.push_back(QUEST_SEQ_MESSAGE("뭐야 미래에는 물리학과 생물학이 아직 발달하지 않은거야?"));
	//stQuest.Sequence.push_back(QUEST_SEQ_MESSAGE("2022년쯤 되면 얼마든지 시공간을 자유자재로 다닐 수 있어야 하는것 아니던가."));
	//stQuest.Sequence.push_back(QUEST_SEQ_MESSAGE("멍게소리냐고?"));
	//stQuest.Sequence.push_back(QUEST_SEQ_MESSAGE("난 사실 과거에서 왔어."));
	//stQuest.Sequence.push_back(QUEST_SEQ_MESSAGE("이 쪽지를 가지고 전상현 멘토님께 가봐."));
	//stQuest.Sequence.push_back(QUEST_SEQ_MESSAGE("[어린 전상현의 쪽지]를 획득했다."));
	//stQuest.Sequence.push_back(QUEST_SEQ_REWARD("기다리고 있을게.", 0x001F));
	//vecQuest.push_back(stQuest);

	//// 전상현 멘토
	//stQuest.nNpcId = 4;
	//stQuest.Sequence.clear();
	//stQuest.Sequence.push_back(QUEST_SEQ_CONDITION("또 왔네?", ST_FILTER(128, 0xFFFF, 0x001F)));
	//stQuest.Sequence.push_back(QUEST_SEQ_MESSAGE("이번엔 증거를 들고 왔다고?"));
	//stQuest.Sequence.push_back(QUEST_SEQ_MESSAGE("[어린 전상현의 쪽지]를 건네준다."));
	//stQuest.Sequence.push_back(QUEST_SEQ_MESSAGE("앗 이건..."));
	//stQuest.Sequence.push_back(QUEST_SEQ_MESSAGE("이... 지렁이가 기어가는 악필"));
	//stQuest.Sequence.push_back(QUEST_SEQ_MESSAGE("형편없는 글 솜씨..."));
	//stQuest.Sequence.push_back(QUEST_SEQ_MESSAGE("분명 내가 맞군. 믿을 수가 없지만 사실이야..!!"));
	//stQuest.Sequence.push_back(QUEST_SEQ_MESSAGE("응? 그래서 그 친구가 왜 48시간동안 코딩하다 왔냐고 대답들어보라 했다고?"));
	//stQuest.Sequence.push_back(QUEST_SEQ_MESSAGE("아 그 시절인가."));
	//stQuest.Sequence.push_back(QUEST_SEQ_MESSAGE("내가 갓 25살이 되던 때 외주 개발로 게임개발을 했었지."));
	//stQuest.Sequence.push_back(QUEST_SEQ_MESSAGE("일정이 한참이나 지났찌만 버그가 득실득실해서 도저히 오픈할 수가 없었어."));
	//stQuest.Sequence.push_back(QUEST_SEQ_MESSAGE("그래.. 도저히."));
	//stQuest.Sequence.push_back(QUEST_SEQ_MESSAGE("그러던 중 조폭들이 움직인거야."));
	//stQuest.Sequence.push_back(QUEST_SEQ_MESSAGE("알고보니 우리가 맡았던 프로젝트가 조폭들의 돈으로 굴러가던 것이었지."));
	//stQuest.Sequence.push_back(QUEST_SEQ_MESSAGE("아마 그당시는 48시간 동안 죽도록 코딩하고 간신히 탈출해온 그 시점인 것 같다."));
	//stQuest.Sequence.push_back(QUEST_SEQ_MESSAGE("아마도 타임머신 기술이 불완전해서 과거가 아니라 미래로 와버렸나보군."));
	//stQuest.Sequence.push_back(QUEST_SEQ_MESSAGE("원기 회복시켜주고 같이 플젝해봐."));
	//stQuest.Sequence.push_back(QUEST_SEQ_MESSAGE("쓸만할지도..?"));
	//stQuest.Sequence.push_back(QUEST_SEQ_REWARD("무식해도 노력파니까.", 0x003F));
	//vecQuest.push_back(stQuest);

	//// 어린 전상현
	//stQuest.nNpcId = 128;
	//stQuest.Sequence.clear();
	//stQuest.Sequence.push_back(QUEST_SEQ_CONDITION("후후 그 놀란 표정을 보니 잘 확인하고 왔나보군.", ST_FILTER(128, 0xFFFF, 0x003F)));
	//stQuest.Sequence.push_back(QUEST_SEQ_MESSAGE("진짜 어린 전상현이 맞다구."));
	//stQuest.Sequence.push_back(QUEST_SEQ_MESSAGE("난 25살이야."));
	//stQuest.Sequence.push_back(QUEST_SEQ_MESSAGE("너희와 같은 또래지."));
	//stQuest.Sequence.push_back(QUEST_SEQ_MESSAGE("즉 BoB 교육과정을 멘티로서 같이 보낼 수 있다는 말이야."));
	//stQuest.Sequence.push_back(QUEST_SEQ_MESSAGE("나와 팀하자. C++ 개발은 확실히 서포트 해줄게."));
	//stQuest.Sequence.push_back(QUEST_SEQ_REWARD("나를 캐릭터로 선택하면 나와 함께 BoB를 수료할 수 있어.", 0xFFFF));
	//vecQuest.push_back(stQuest);
}
