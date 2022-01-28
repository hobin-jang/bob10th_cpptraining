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
	{
		ST_QUEST_NPC_DATA npc;
		npc.x = 21;
		npc.y = 21;
		npc.z = 2;
		npc.nNpcID = 145;
		npc.strTrack = "취약점분석트랙";
		npc.strName = "정다훈";
		npc.nAge = 22;
		npc.strMBTI = "군 ㄷㅐ 7r 즈 아";
		npc.cPatch = 'B';
		npc.strMessage = "B0B 휴핚 없ㅇ1 7r 즈 아\n"
			"군 ㄷㅐ 7r 즈 아\n"
			"7r 즈 아\n"
			"진짜로 가고싶어요 보내주세요오오오오오오오오오 서류 광탈 멈춰!";

		npc.vecBigImage.push_back("...............................................~..,,..");
		npc.vecBigImage.push_back("...............................................~..,!,.");
		npc.vecBigImage.push_back("...................................................,*.");
		npc.vecBigImage.push_back(".............,,,!=*-,,..............................,.");
		npc.vecBigImage.push_back("............,::::::::;~,..,----------~................");
		npc.vecBigImage.push_back("..........,~:::::::::::~.;:;:::::::::!~,............!.");
		npc.vecBigImage.push_back("..........-::::::::::::::;::::::::::::::..........,-,.");
		npc.vecBigImage.push_back(".........,:::::::::::::::=;:::::::::::::$.......,=....");
		npc.vecBigImage.push_back(".........~:::::::::::::::;!:::::::::::::*......~!.....");
		npc.vecBigImage.push_back(".........*::::::::::::::::;;:::::::::**;:~:-...~,.....");
		npc.vecBigImage.push_back(".........;:::;$!::::::::!!=!$::::::::;;:::;:..........");
		npc.vecBigImage.push_back(".........::::::::::::::::::*;::::::::::::::::,........");
		npc.vecBigImage.push_back(".......,;:::::::::!;;;*;::::;::::::::::::::::!........");
		npc.vecBigImage.push_back("......~:!::::::!-,-,,~@#$*$$;:::::::;*::::::::~,......");
		npc.vecBigImage.push_back(".....,:::::::! .     *@@@@@@@,*::;*::;::::::;;!~......");
		npc.vecBigImage.push_back(".....;::::::::-      ~==@@@@@ ,:::::;$@##@@@. -~......");
		npc.vecBigImage.push_back("....-::::::::::-.    .*#@@@@* .~~~~ =@@@@@##.   ......");
		npc.vecBigImage.push_back("....;::::::::::::-,    -~~~~  .     ,@*@@@#!    ......");
		npc.vecBigImage.push_back("...-:::::::::::::::!.        *       *@@@@*   ,-......");
		npc.vecBigImage.push_back("...:::::::::::::::::::;-,,-!;;;              .!~......");
		npc.vecBigImage.push_back("...~:::::::::::::;::::::::;;;::;-,,,,.,,,,,;!!~.......");
		npc.vecBigImage.push_back("..~;:::::::::::::;::::::::;;;:::::;;;:;:::;;;~........");
		npc.vecBigImage.push_back("..-::::::::::::::::::::::;*:::::::::::::::::-.........");
		npc.vecBigImage.push_back("..-:::::::::::::::::;;:::::::;;:$!:~~~~~:::~~=........");
		npc.vecBigImage.push_back("..-:::::::::::::::;;**;;;;;;;!!~~~~~~:;;;;::~,........");
		npc.vecBigImage.push_back("..~::::::::::::::;;~~~~~~~~~;~:~~:!*;;!;;!!-,.........");
		npc.vecBigImage.push_back("..~::::::::::::::;~~~~::!*!~:~:*;;;;;;;~,.,...........");
		npc.vecBigImage.push_back("..-::::::::::::::;;~~~!$:::;#;::::::::;-..............");
		npc.vecBigImage.push_back("..-::::::::::::::::::;**;$*;!::::::-..................");
		npc.vecBigImage.push_back("..-::::::::::::::::::;**;$*;!::::::-..................");
		npc.vecBigImage.push_back("..-::::::::::::::::::;**;$*;!::::::-..................");
		npc.vecBigImage.push_back("...............................................~..,,..");

		npc.vecSmallImage.push_back("            ...          ");
		npc.vecSmallImage.push_back("      .~~~~*==:          ");
		npc.vecSmallImage.push_back("          ,!~;:          ");
		npc.vecSmallImage.push_back("        .:*~ !!,,,.      ");
		npc.vecSmallImage.push_back("      .~;*- .**:::,      ");
		npc.vecSmallImage.push_back("      .;:.   ;:          ");
		npc.vecSmallImage.push_back("             :~          ");
		npc.vecSmallImage.push_back("        ...~!*~          ");
		npc.vecSmallImage.push_back("          ,*@!.          ");
		npc.vecSmallImage.push_back("        -**:-.           ");
		npc.vecSmallImage.push_back("      ,=!;@;             ");
		npc.vecSmallImage.push_back("     ;*.. ..:$~          ");
		npc.vecSmallImage.push_back("                         ");
		npc.vecSmallImage.push_back("   .=@@@@@@@@@@@@:       ");
		npc.vecSmallImage.push_back("                         ");
		npc.vecSmallImage.push_back("            ;:           ");
		npc.vecSmallImage.push_back("        ,,,.;:           ");
		npc.vecSmallImage.push_back("      .:==*:!!,,--       ");
		npc.vecSmallImage.push_back("      -=   ;#*!;!!.      ");
		npc.vecSmallImage.push_back("      ,!-  :!,           ");
		npc.vecSmallImage.push_back("       -:.,-,            ");
		npc.vecSmallImage.push_back("         ..              ");


		npc.strContents1 = "군 ㄷㅐ 7r 즈 아";
		npc.strContents2 = "군 ㄷㅐ 7r 즈 아";
		npc.strContents3 = "군 ㄷㅐ 7r 즈 아";
		npc.strContents4 = "군 ㄷㅐ 7r 즈 아";

		vecNPC.push_back(npc);
	}
}

void CQuestInfo::QueryQuestObject(std::vector<ST_QUEST_OBJECT>& vecQuestObject)
{
	ST_QUEST_OBJECT stObject;
	stObject.nQuestObjectId = 268;
	stObject.strName = "군대";
	stObject.cPatch = 'G';	// 화면에 보이지도 않고 만져지지도 않게 하려면 0을 넣으면 됨
	stObject.x = 19;
	stObject.y = 21;
	stObject.z = 2;
	stObject.reserved = 0;
	vecQuestObject.push_back(stObject);
}

void CQuestInfo::QueryQuest(std::vector<ST_QUEST_DATA>& vecQuest)
{
	// 정다훈
	{
		ST_QUEST_DATA stQuest;
		stQuest.nNpcId = 145;
		stQuest.StartCondition = ST_FILTER(145, 0x0000, 0x0001);
		stQuest.vecMessages.push_back("군 ㄷㅐ 7r 즈 아");
		stQuest.vecMessages.push_back("나를 위해 옆에서 군대 좀 한잔 떠다주겠어?");
		stQuest.ClearCondition = ST_FILTER(145, 0x0003);
		vecQuest.push_back(stQuest);
	}

	// 군대
	{
		ST_QUEST_DATA stQuest;
		stQuest.nNpcId = 268;
		stQuest.StartCondition = ST_FILTER(145, 0x0001, 0x0003);
		stQuest.vecMessages.push_back("군 ㄷㅐ 7r 즈 아");
		stQuest.vecMessages.push_back("다시 정다훈에게로 7r 즈 아.");
		stQuest.ClearCondition = ST_FILTER(145, 0x0007);
		vecQuest.push_back(stQuest);
	}

	// 정다훈
	{
		ST_QUEST_DATA stQuest;
		stQuest.nNpcId = 145;
		stQuest.StartCondition = ST_FILTER(145, 0x0003, 0x0007);
		stQuest.vecMessages.push_back("같 0 ㅣ 군 ㄷㅐ 7r 즈 아");
		stQuest.vecMessages.push_back("진짜로 가고싶어요 보내주세요오오오오오오오오오 서류 광탈 멈춰!");
		stQuest.ClearCondition = ST_FILTER(145, 0x0007);
		vecQuest.push_back(stQuest);
	}
}
