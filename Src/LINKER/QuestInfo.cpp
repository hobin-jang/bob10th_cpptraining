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
	npc.x = 17;
	npc.y = 17;
	npc.z = 1;
	npc.nNpcID = 138;
	npc.strTrack = "보안제품개발트랙";
	npc.strName = "이찬우(LINKER)";
	npc.nAge = 24;
	npc.strMBTI = "ENFJ-T, A형 입니다.";
	npc.cPatch = 'C';
	npc.strMessage = "어이 너 나랑 코딩하지 않을래?";
	
	npc.vecBigImage.resize(50);
	npc.vecBigImage[0 ] = "                 .,~#=~,,*##@#!:,                     ";
	npc.vecBigImage[1 ] = "               .,=##@@@#$@#@@@##=-.                   ";
	npc.vecBigImage[2 ] = "              .;$##@@@@@@@@@@@@##$!.                  ";
	npc.vecBigImage[3 ] = "              :$$##@@@@@@@@@@@###$$:                  ";
	npc.vecBigImage[4 ] = "             ,!=$#@@@@@@@@@@@@@##$#*,                 ";
	npc.vecBigImage[5 ] = "            .;$$#@@@@@@@@@@@@@@#####:                 ";
	npc.vecBigImage[6 ] = "           .:=$#@@@@@@@@@@@####@##$#*,                ";
	npc.vecBigImage[7 ] = "           -=$$@@@@@@@@@@@@###$@#$$$$!.               ";
	npc.vecBigImage[8 ] = "           ~###@@@@@@@#@#@###$#$#$$$$$~               ";
	npc.vecBigImage[9 ] = "           :####@@@#@##$$###$$#$$$$$##:               ";
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
        
	npc.vecSmallImage[ 0] = "★☆★☆★☆★☆★☆★☆★";
	npc.vecSmallImage[ 1] = "                         ";
	npc.vecSmallImage[ 2] = "        ,;@**@@=         ";
	npc.vecSmallImage[ 3] = "      ~$#@@@@@@##$,      ";
	npc.vecSmallImage[ 4] = "     .*#@@@@@@##$$:      ";
	npc.vecSmallImage[ 5] = "     ,##@#@##@#$$$$,     ";
	npc.vecSmallImage[ 6] = "     ,########@####,     ";
	npc.vecSmallImage[ 7] = "     ,$#$$!:~;$#@#:      ";
	npc.vecSmallImage[ 8] = "      .=~-,. .-~~:.      ";
	npc.vecSmallImage[ 9] = "       ,|~~|^|~~|.       ";
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

	npc.strContents1 = "ㅎ2ㅎ2ㅎ2 반갑습니다 ~ \n"
		"어... 지옥길에 온걸 환영합니다.\n"
		;

	npc.strContents2 = "ㅎ2ㅎ2ㅎ2 반갑습니다 ~ \n"
		"어... 지옥길에 온걸 환영합니다.\n"
		;

	npc.strContents3 = "ㅎ2ㅎ2ㅎ2 반갑습니다 ~ \n"
		"어... 지옥길에 온걸 환영합니다.\n"
		;

	npc.strContents4 = "오호... 나의 부탁을 들어줘서 감사합니다. \n"
		"엔딩 메시지 구상중...\n"
		;

	vecNPC.push_back(npc);
}

void CQuestInfo::QueryQuest(std::vector<ST_QUEST_DATA*>& vecQuest)
{


}

void CQuestInfo::QueryQuestObject(std::vector<ST_QUEST_OBJECT>& vecQuestObject)
{
	ST_QUEST_OBJECT strObject;


}
