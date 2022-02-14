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
		npc.x = 18;
		npc.y = 15;
		npc.z = 7;
		npc.nNpcID = 138;
		npc.strTrack = "보안제품개발트랙";
		npc.strName = "이찬우(LINKER)";
		npc.nAge = 24;
		npc.strMBTI = "ENFJ-T, A형 입니다.";
		npc.cPatch = 'L';
		npc.strMessage = "어이 너 나랑 코딩하지 않을래?";

		npc.vecBigImage.resize(50);
		npc.vecBigImage[0] = "                 .,~#=~,,*##@#!:,                     ";
		npc.vecBigImage[1] = "               .,=##@@@#$@#@@@##=-.                   ";
		npc.vecBigImage[2] = "              .;$##@@@@@@@@@@@@##$!.                  ";
		npc.vecBigImage[3] = "              :$$##@@@@@@@@@@@###$$:                  ";
		npc.vecBigImage[4] = "             ,!=$#@@@@@@@@@@@@@##$#*,                 ";
		npc.vecBigImage[5] = "            .;$$#@@@@@@@@@@@@@@#####:                 ";
		npc.vecBigImage[6] = "           .:=$#@@@@@@@@@@@####@##$#*,                ";
		npc.vecBigImage[7] = "           -=$$@@@@@@@@@@@@###$@#$$$$!.               ";
		npc.vecBigImage[8] = "           ~###@@@@@@@#@#@###$#$#$$$$$~               ";
		npc.vecBigImage[9] = "           :####@@@#@##$$###$$#$$$$$##:               ";
		npc.vecBigImage[10] = "           ;#$$########$#$$$$$$$$$$###:               ";
		npc.vecBigImage[11] = "          -=$$##$$$##$$$$$$$$$$$$$$$##:               ";
		npc.vecBigImage[12] = "          ~$$$$$$$$$$$$$=#$$$$$$$$####:               ";
		npc.vecBigImage[13] = "          -=$$$$$$$$$$$$#####$####@###~               ";
		npc.vecBigImage[14] = "          .;#$$##$#####@####@###@@@##$~               ";
		npc.vecBigImage[15] = "           :##$#######@@####@@##@@@@#:                ";
		npc.vecBigImage[16] = "           :#$$##########@##@#@@@@@##:                ";
		npc.vecBigImage[17] = "            :##$$#$$*!:-.,-;$#$#@@###:                ";
		npc.vecBigImage[18] = "            -==;:~,.,,.   .,;--:$$=#*,                ";
		npc.vecBigImage[19] = "             :;,... ..,    ....,,-:;..                ";
		npc.vecBigImage[20] = "             .--...,~...  ,,**~..,;~.                 ";
		npc.vecBigImage[21] = "             ~~,.,,~!-.   .-......,,                  ";
		npc.vecBigImage[22] = "             ,-...    ,.  ~     .,,,                  ";
		npc.vecBigImage[23] = "             .,.  ,   ,    ,  .  .,,                  ";
		npc.vecBigImage[24] = "             ...   , ,      , ,  .,,                  ";
		npc.vecBigImage[25] = "             .,.                 .,,                  ";
		npc.vecBigImage[26] = "             .,.                 .,.                  ";
		npc.vecBigImage[27] = "              ,,.       ..      ...                   ";
		npc.vecBigImage[28] = "               ..      ,...     .,.                   ";
		npc.vecBigImage[29] = "               ..               .,,                   ";
		npc.vecBigImage[30] = "               .,.              ...                   ";
		npc.vecBigImage[31] = "                ..   ,-,,,,-    ..                    ";
		npc.vecBigImage[32] = "                ..   .......   .,,                    ";
		npc.vecBigImage[33] = "                 ..     ..     .,.                    ";
		npc.vecBigImage[34] = "                 ...          .,,                     ";
		npc.vecBigImage[35] = "                 ,,..        .,-,                     ";
		npc.vecBigImage[36] = "                 ,-,..     ..,--,.                    ";
		npc.vecBigImage[37] = "                 .,--,.....,,,,.,,                    ";
		npc.vecBigImage[38] = "                 .,,-,,,,,,,,,,.,,                    ";
		npc.vecBigImage[39] = "                 .,,,-,,,,,,,,....                    ";
		npc.vecBigImage[40] = "                --...,,,,,,,.....-;,                  ";
		npc.vecBigImage[41] = "               --,....,.,.........-:~,                ";
		npc.vecBigImage[42] = "             ,~;-............. ...,:~~:,              ";
		npc.vecBigImage[43] = "         ..~~~~,......... . . ... .-::~::,..          ";
		npc.vecBigImage[44] = "       .,:::~~~,. ..  ...     ..   ,::~:::::,.        ";
		npc.vecBigImage[45] = "     .,::~::~~~.                   ,::~~::~::~..      ";
		npc.vecBigImage[46] = "   .,:~:::::::~.                   .~~~~:::::::~..    ";
		npc.vecBigImage[47] = "  ,~~:~::::~~~~.     LINKER        .~~~~:::~~:::~:    ";
		npc.vecBigImage[48] = ",,~::::::~:~~~~.                   ,~~~~::~::~::::    ";
		npc.vecBigImage[49] = "::~::~~~~~:~~~~,                  .-~~~::~~:::~:~:    ";


		npc.vecSmallImage.resize(25);

		npc.vecSmallImage[0] = "★☆★☆★☆★☆★☆★☆★";
		npc.vecSmallImage[1] = "                         ";
		npc.vecSmallImage[2] = "        ,;@**@@=         ";
		npc.vecSmallImage[3] = "      ~$#@@@@@@##$,      ";
		npc.vecSmallImage[4] = "     .*#@@@@@@##$$:      ";
		npc.vecSmallImage[5] = "     ,##@#@##@#$$$$,     ";
		npc.vecSmallImage[6] = "     ,########@####,     ";
		npc.vecSmallImage[7] = "     ,$#$$!:~;$#@#:      ";
		npc.vecSmallImage[8] = "      .=~-,. .-~~:.      ";
		npc.vecSmallImage[9] = "       ,|~~|^|~~|.       ";
		npc.vecSmallImage[10] = "       .        .        ";
		npc.vecSmallImage[11] = "        .   ,   .        ";
		npc.vecSmallImage[12] = "        .       ,        ";
		npc.vecSmallImage[13] = "         . ㅇ  .         ";
		npc.vecSmallImage[14] = "         ,,,,,,.         ";
		npc.vecSmallImage[15] = "       ....,.......      ";
		npc.vecSmallImage[16] = "     ,,-....... .-~,,,   ";
		npc.vecSmallImage[17] = "   ,-:~-         ,~:::,, ";
		npc.vecSmallImage[18] = " ,,:::~-         ,~:~:~:-";
		npc.vecSmallImage[19] = "-~~:::~-         -~~::~~:";
		npc.vecSmallImage[20] = "::~~::~-         ,~~~:~~:";
		npc.vecSmallImage[21] = ":~:~::~-.        ,~-~~~::";
		npc.vecSmallImage[22] = "-------------------------";
		npc.vecSmallImage[23] = "                         ";
		npc.vecSmallImage[24] = "★☆★☆★☆★☆★☆★☆★";

		npc.strContents1 = "ㅎ2ㅎ2 반갑습니다 ~ !!\n"
			"어... 지옥길에 오셨군요 ~ !!\n 환영합니다.\n";
		"혹시 여유가 있으시다면, 지옥길에서 빠져 못 나온 \n LINKER를 구출해 줄래?\n";
		"아마 LINKER는 7층 어딘가에 있을거야! 이니셜은 L이겠지?";

		npc.strContents2 = "LINKER를 찾았구나!!\n";
		"표정이 왜그래?? 과제라도 받은 것 처럼...?\n";
		"아... 그럼 아이템을 찾으러 가야겠네! 화이팅!\n";

		npc.strContents3 = "\n"
			"\n";

		npc.strContents4 = "BoB 비공식 최강 원딜러를 구해줘서 고마워!! \n"
			"\n";

		vecNPC.push_back(npc);
	}

	{
		ST_QUEST_NPC_DATA npc;
		npc.x = 5;
		npc.y = 20;
		npc.z = 7;
		npc.nNpcID = 161;
		npc.strTrack = "보안제품개발";
		npc.strName = "LINKER";
		npc.cPatch = 'L';
		npc.strMessage = "장로 먹으면 역전 가능해!";


		npc.strContents1 = "";

		vecNPC.push_back(npc);
	}
}

void CQuestInfo::QueryQuestObject(std::vector<ST_QUEST_OBJECT>& vecQuestObject)
{
	{
		ST_QUEST_OBJECT stObject;
		stObject.nQuestObjectId = 285;
		stObject.strName = "정수 약탈자";
		stObject.cPatch = 'J';
		stObject.x = 10;
		stObject.y = 23;
		stObject.z = 11;
		stObject.reserved = 0;
		vecQuestObject.push_back(stObject);
	}
	{
		ST_QUEST_OBJECT stObject;
		stObject.nQuestObjectId = 286;
		stObject.strName = "부서진 여왕의 왕관";
		stObject.cPatch = 'B';
		stObject.x = 15;
		stObject.y = 15;
		stObject.z = 7;
		stObject.reserved = 0;
		vecQuestObject.push_back(stObject);
	}
}

void CQuestInfo::QueryQuest(std::vector<ST_QUEST_DATA>& vecQuest)
{
	//LINKER 만나기
	{
		ST_QUEST_DATA stQuest;
		stQuest.nNpcId = 161;
		stQuest.StartCondition = ST_FILTER(161, 0x0000, 0x0001);
		stQuest.vecMessages.push_back("혹시 저를 구원해 주실 버스기사 이신가요?");
		stQuest.vecMessages.push_back("아앗... 지옥길을 탈출하고 싶으시다구요???");
		stQuest.vecMessages.push_back("흐으음 그럼 11층에 [정수 약탈자] 좀 가져다주실래요?");
		stQuest.vecMessages.push_back("아마 템 이니셜은 [J] 입니다!");
		stQuest.ClearCondition = ST_FILTER(161, 0x0003);
		vecQuest.push_back(stQuest);
	}
	
	//정수약탈자 찾기
	{
		ST_QUEST_DATA stQuest;
		stQuest.nNpcId = 285;
		stQuest.StartCondition = ST_FILTER(161, 0x0001, 0x0003);
		stQuest.vecMessages.push_back("[ 몹시 파랑파랑 하게 빛나고 있다. ]");
		stQuest.vecMessages.push_back("[ 정수 약탈자 ]를 획득했습니다.");
		stQuest.vecMessages.push_back("[ 이제 돌아가자! ]");
		stQuest.ClearCondition = ST_FILTER(161, 0x0007);
		vecQuest.push_back(stQuest);
	}

	//LINKER 다음 퀘스트
	{
		ST_QUEST_DATA stQuest;
		stQuest.nNpcId = 161;
		stQuest.StartCondition = ST_FILTER(161, 0x0003, 0x0007);
		stQuest.vecMessages.push_back("이야 고마워 드디어 1년 만에 첫 코어템을 장착하는구나 ㅠ^ㅠ");
		stQuest.vecMessages.push_back("에엥..? 딜이 너무 약한디... 호오옥시");
		stQuest.vecMessages.push_back("완벽한 딜탱이 가능한 [부서진 여왕의 왕관] 템 좀 구해다 줄 수 있어?");
		stQuest.vecMessages.push_back("부.여.왕은 아마... 6~8층 사이에 있을거야! 이니셜은 나도 모르겠넴.. ㅈㅅ");
		stQuest.ClearCondition = ST_FILTER(161, 0x000F);
		vecQuest.push_back(stQuest);
	}

	//부서진여왕의왕관 찾기
	{
		ST_QUEST_DATA stQuest;
		stQuest.nNpcId = 286;
		stQuest.StartCondition = ST_FILTER(161, 0x000F, 0x003F);
		stQuest.vecMessages.push_back("[ 저것이 2022 시즌 초반 필수템 ""부여왕""인가? ]");
		stQuest.vecMessages.push_back("[ 부서진 여왕의 왕관 ]을 획득했습니다.");
		stQuest.vecMessages.push_back("[ 휴.. 이제 탈출하자! ]");
		stQuest.ClearCondition = ST_FILTER(161, 0x007F);
		vecQuest.push_back(stQuest);
	}
}

