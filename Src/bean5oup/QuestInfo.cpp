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
	ST_NPC_INFO npc;
	npc.id = 1;
	strcpy_s(npc.szName, 21, "정다훈");
	npc.x = 75;
	npc.y = 23;
	npc.w = 0.5;
	npc.h = 0.5;
	npc.patch = 'p';
	strcpy_s(npc.szGreetMessage, 61, "?");

	npc.vecBuffer.resize(51);

	npc.vecBuffer[0] =  "...............................................~..,,..";
	npc.vecBuffer[1] =  "...............................................~..,!,.";
	npc.vecBuffer[2] =  "...................................................,*.";
	npc.vecBuffer[3] =  ".............,,,!=*-,,..............................,.";
	npc.vecBuffer[4] =  "............,::::::::;~,..,----------~................";
	npc.vecBuffer[5] =  "..........,~:::::::::::~.;:;:::::::::!~,............!.";
	npc.vecBuffer[6] =  "..........-::::::::::::::;::::::::::::::..........,-,.";
	npc.vecBuffer[7] =  ".........,:::::::::::::::=;:::::::::::::$.......,=....";
	npc.vecBuffer[8] =  ".........~:::::::::::::::;!:::::::::::::*......~!.....";
	npc.vecBuffer[9] = ".........*::::::::::::::::;;:::::::::**;:~:-...~,.....";
	npc.vecBuffer[10] = ".........;:::;$!::::::::!!=!$::::::::;;:::;:..........";
	npc.vecBuffer[11] = ".........::::::::::::::::::*;::::::::::::::::,........";
	npc.vecBuffer[12] = ".......,;:::::::::!;;;*;::::;::::::::::::::::!........";
	npc.vecBuffer[13] = "......~:!::::::!-,-,,~@#$*$$;:::::::;*::::::::~,......";
	npc.vecBuffer[14] = ".....,:::::::! .     *@@@@@@@,*::;*::;::::::;;!~......";
	npc.vecBuffer[15] = ".....;::::::::-      ~==@@@@@ ,:::::;$@##@@@. -~......";
	npc.vecBuffer[16] = "....-::::::::::-.    .*#@@@@* .~~~~ =@@@@@##.   ......";
	npc.vecBuffer[17] = "....;::::::::::::-,    -~~~~  .     ,@*@@@#!    ......";
	npc.vecBuffer[18] = "...-:::::::::::::::!.        *       *@@@@*   ,-......";
	npc.vecBuffer[19] = "...:::::::::::::::::::;-,,-!;;;              .!~......";
	npc.vecBuffer[20] = "...~:::::::::::::;::::::::;;;::;-,,,,.,,,,,;!!~.......";
	npc.vecBuffer[21] = "..~;:::::::::::::;::::::::;;;:::::;;;:;:::;;;~........";
	npc.vecBuffer[22] = "..-::::::::::::::::::::::;*:::::::::::::::::-.........";
	npc.vecBuffer[23] = "..-:::::::::::::::::;;:::::::;;:$!:~~~~~:::~~=........";
	npc.vecBuffer[24] = "..-:::::::::::::::;;**;;;;;;;!!~~~~~~:;;;;::~,........";
	npc.vecBuffer[25] = "..~::::::::::::::;;~~~~~~~~~;~:~~:!*;;!;;!!-,.........";
	npc.vecBuffer[26] = "..~::::::::::::::;~~~~::!*!~:~:*;;;;;;;~,.,...........";
	npc.vecBuffer[27] = "..-::::::::::::::;;~~~!$:::;#;::::::::;-..............";
	npc.vecBuffer[28] = "..-:::::::::::::::;;;;**;$*;!:::::::::-...............";

	vecNPC.push_back(npc);
}

void CQuestInfo::QueryNpcEx(std::vector<ST_QUEST_NPC_DATA>& vecNPC)
{
	ST_QUEST_NPC_DATA npc;
	npc.Pos.x = 21;
	npc.Pos.y = 21;
	npc.Pos.z = 2;
	npc.nNpcID = 145;
	npc.strTrack = "취약점분석트랙";
	npc.strName = "정다훈";
	npc.nAge = 22;
	npc.strMBTI = "7r 즈 아";
	npc.cPatch = 'B';
	npc.strMessage = "휴핚 없ㅇ1 7r능";
	npc.vecBuffer;	// 위엣것 참조.
	vecNPC.push_back(npc);
}

void CQuestInfo::QueryQuest(std::vector<ST_QUEST_DATA*>& vecQuest)
{
}
