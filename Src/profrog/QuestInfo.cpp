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
		npc.strMessage = 
			"게임 보안을 해보고 싶다면 날 찾아와.\n근데 C++이 어렵다고?\n뭘 잘 모르는구만.\n누구든 21일이면 마스터 할 수 있지.\n일단은 물리학과 생물학을 먼저 배워보자꾸나.";

		npc.strContents1 = "";

		vecNPC.push_back(npc);
	}

	{
		ST_QUEST_NPC_DATA npc;
		npc.x = 11;
		npc.y = 2;
		npc.z = 1;
		npc.nNpcID = 128;
		npc.strTrack = "보안개발트랙";
		npc.strName = "방황하는전상현";
		npc.nAge = 25;
		npc.strMBTI = "INFP 소심소심";
		npc.cPatch = 'P';
		npc.strMessage = "으으...\n"
			"게임 개발 지긋지긋해..\n"
			"두번 다시 안할거야.";

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
			"으윽...\n"
			"아이고.. 아야...\n"
			"...\n"
			"여.. 여긴?\n"
			"타임머신이 성공한건가?\n"
			"정신이 몽롱하군...\n"
			"...\n"
			"......\n"
			"여기 2004년 맞는거지?\n"
			"뭔가 낯설어.\n"
			"어???????????????????\n"
			"BoB 센터?저건 뭐지?\n"
			"사람들 옷차림도 특이하고...\n"
			"설마...\n"
			"나 과거가 아니라 미래로 온건가?\n"
			"아--------악!!!!!!!!\n"
			"2022년이라니!!!\n"
			"아직 타임머신이 불완전한건가!! 2004년으로 가야 했었는데...\n"
			"...\n"
			"...\n"
			"여길 어떻게든 벗어나보자.\n"
			;

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
		stQuest.ClearCondition = ST_FILTER(128, 0x0003);
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
		stQuest.ClearCondition = ST_FILTER(128, 0x0007);
		vecQuest.push_back(stQuest);
	}
	

	// 어린 전상현
	{
		ST_QUEST_DATA stQuest;
		stQuest.nNpcId = 128;
		stQuest.StartCondition = ST_FILTER(128, 0x0003, 0x0007);
		stQuest.vecMessages.push_back("엇? 정말 떠온거야?");
		stQuest.vecMessages.push_back("[분수대의 시원한 물]을 전달했습니다.");
		stQuest.vecMessages.push_back("정말 고마워 잘 마실게.");
		stQuest.vecMessages.push_back("꿀꺽 꿀꺽 꿀꺽");
		stQuest.vecMessages.push_back("꿀꺽 꿀꺽 꿀꺽 꿀꺽 꿀꺽 꿀꺽");
		stQuest.vecMessages.push_back("꿀꺽 꿀꺽 꿀꺽 꿀꺽 꿀꺽 꿀꺽 꿀꺽 꿀꺽 꿀꺽");
		stQuest.vecMessages.push_back("...");
		stQuest.vecMessages.push_back("푸핫~ 살것 같다. 나 방금 죽을 뻔 했었어.");
		stQuest.vecMessages.push_back("응?");
		stQuest.vecMessages.push_back("도대체 왜 그지경이 될 때까지 코딩했냐고?");
		stQuest.vecMessages.push_back("그건... 전상현 멘토님께 여쭤봐.");
		stQuest.ClearCondition = ST_FILTER(128, 0x000F);
		vecQuest.push_back(stQuest);
	}
	

	// 전상현 멘토
	{
		ST_QUEST_DATA stQuest;
		stQuest.nNpcId = 4;
		stQuest.StartCondition = ST_FILTER(128, 0x0007, 0x000F);
		stQuest.vecMessages.push_back("뭐야? C++ 공부하러 온거야?");;
		stQuest.vecMessages.push_back("...");
		stQuest.vecMessages.push_back("... 아니 그렇게까지 머리를 거칠게 흔들 필요는 없잖아.");
		stQuest.vecMessages.push_back("뭐? 누가 나한테 물어보라고 했다고?");
		stQuest.vecMessages.push_back("그게 또다른 전상현이라고?");
		stQuest.vecMessages.push_back("하하하하");
		stQuest.vecMessages.push_back("하하하하하하하하");
		stQuest.vecMessages.push_back("하하하하하하하하하하하하하하하하");
		stQuest.vecMessages.push_back("말 같잖은 소리. 자네는 아무래도 공상과학 영화를 너무 많이 본것 같네.");
		stQuest.vecMessages.push_back("혹시 모르지 어떤 증거가 있으면 내가 믿을지도.");
		stQuest.ClearCondition = ST_FILTER(128, 0x001F);
		vecQuest.push_back(stQuest);
	}

	// 어린 전상현
	{
		ST_QUEST_DATA stQuest;
		stQuest.nNpcId = 128;
		stQuest.StartCondition = ST_FILTER(128, 0x000F, 0x001F);
		stQuest.vecMessages.push_back("사정은 잘 들어봤어?");
		stQuest.vecMessages.push_back("전상현 멘토님이 날 안 믿는다고?");
		stQuest.vecMessages.push_back("뭐야 미래에는 물리학과 생물학이 아직 발달하지 않은거야?");
		stQuest.vecMessages.push_back("2022년쯤 되면 얼마든지 시공간을 자유자재로 다닐 수 있어야 하는것 아니던가.");
		stQuest.vecMessages.push_back("멍게소리냐고?");
		stQuest.vecMessages.push_back("난 사실 과거에서 왔어.");
		stQuest.vecMessages.push_back("이 쪽지를 가지고 전상현 멘토님께 가봐.");
		stQuest.vecMessages.push_back("[어린 전상현의 쪽지]를 획득했다.");
		stQuest.vecMessages.push_back("기다리고 있을게.");
		stQuest.ClearCondition = ST_FILTER(128, 0x003F);
		vecQuest.push_back(stQuest);
	}

	// 전상현 멘토
	{
		ST_QUEST_DATA stQuest;
		stQuest.nNpcId = 4;
		stQuest.StartCondition = ST_FILTER(128, 0x001F, 0x003F);
		stQuest.vecMessages.push_back("또 왔네?");
		stQuest.vecMessages.push_back("이번엔 증거를 들고 왔다고?");
		stQuest.vecMessages.push_back("[어린 전상현의 쪽지]를 건네준다.");
		stQuest.vecMessages.push_back("앗 이건...");
		stQuest.vecMessages.push_back("이... 지렁이가 기어가는 악필");
		stQuest.vecMessages.push_back("형편없는 글 솜씨...");
		stQuest.vecMessages.push_back("분명 내가 맞군. 믿을 수가 없지만 사실이야..!!");
		stQuest.vecMessages.push_back("응? 그래서 그 친구가 왜 48시간동안 코딩하다 왔냐고 대답들어보라 했다고?");
		stQuest.vecMessages.push_back("아 그 시절인가.");
		stQuest.vecMessages.push_back("내가 갓 25살이 되던 때 외주 개발로 게임개발을 했었지.");
		stQuest.vecMessages.push_back("일정이 한참이나 지났찌만 버그가 득실득실해서 도저히 오픈할 수가 없었어.");
		stQuest.vecMessages.push_back("그래.. 도저히.");
		stQuest.vecMessages.push_back("그러던 중 조폭들이 움직인거야.");
		stQuest.vecMessages.push_back("알고보니 우리가 맡았던 프로젝트가 조폭들의 돈으로 굴러가던 것이었지.");
		stQuest.vecMessages.push_back("아마 그당시는 48시간 동안 죽도록 코딩하고 간신히 탈출해온 그 시점인 것 같다.");
		stQuest.vecMessages.push_back("아마도 타임머신 기술이 불완전해서 과거가 아니라 미래로 와버렸나보군.");
		stQuest.vecMessages.push_back("원기 회복시켜주고 같이 플젝해봐.");
		stQuest.vecMessages.push_back("쓸만할지도..?");
		stQuest.vecMessages.push_back("무식해도 노력파니까.");
		stQuest.ClearCondition = ST_FILTER(128, 0x007F);
		vecQuest.push_back(stQuest);
	}

	// 어린 전상현
	{
		ST_QUEST_DATA stQuest;
		stQuest.nNpcId = 128;
		stQuest.StartCondition = ST_FILTER(128, 0x003F, 0x007F);
		stQuest.vecMessages.push_back("후후 그 놀란 표정을 보니 잘 확인하고 왔나보군.");
		stQuest.vecMessages.push_back("진짜 어린 전상현이 맞다구.");
		stQuest.vecMessages.push_back("난 25살이야.");
		stQuest.vecMessages.push_back("너희와 같은 또래지.");
		stQuest.vecMessages.push_back("즉 BoB 교육과정을 멘티로서 같이 보낼 수 있다는 말이야.");
		stQuest.vecMessages.push_back("나와 팀하자. C++ 개발은 확실히 서포트 해줄게.");
		stQuest.vecMessages.push_back("나를 캐릭터로 선택하면 나와 함께 BoB를 수료할 수 있어.");
		stQuest.ClearCondition = ST_FILTER(128, 0x00FF);
		vecQuest.push_back(stQuest);
	}
}
