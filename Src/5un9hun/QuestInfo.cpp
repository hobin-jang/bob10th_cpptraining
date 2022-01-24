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
    strcpy_s(npc.szName, 21, "오성훈 멘티");
    npc.patch = 'p';
    strcpy_s(npc.szGreetMessage, 16, "안녕하세용.");

    npc.vecBuffer.resize(60);
    npc.vecBuffer[0] = "                     ~!;;~.                       ";
    npc.vecBuffer[1] = "                    *$$$$$=**~                    ";
    npc.vecBuffer[2] = "                  -!$##$$$$$=$*;,                 ";
    npc.vecBuffer[3] = "               .!!*###$#$$$$$=$$*:                ";
    npc.vecBuffer[4] = "              ;$$######$=$=$======:               ";
    npc.vecBuffer[5] = "             ~=$$######$$$=$=======~              ";
    npc.vecBuffer[6] = "            .==$$###$###$$==$$======,             ";
    npc.vecBuffer[7] = "            :$==####=##=$$$$=$$$=$===             ";
    npc.vecBuffer[8] = "            ====####$=##$#$$=$$$$==$=-            ";
    npc.vecBuffer[9] = "           :====$$$*;~*$$$$==$$=$$=$$=            ";
    npc.vecBuffer[10] = "           ;===$$=;~..,*$$$$$$$$$$$$$$            ";
    npc.vecBuffer[11] = "           *$$===!-,.  ,$$$$#$###$#$$=;           ";
    npc.vecBuffer[12] = "           =$###=;-.    ;##$#####$##$$;           ";
    npc.vecBuffer[13] = "           $##$#=~,.    ~#########$###;           ";
    npc.vecBuffer[14] = "           $####=~,.    :$$#########$$;           ";
    npc.vecBuffer[15] = "           =##=!=:,.    -!=$$########$-           ";
    npc.vecBuffer[16] = "           :#$:,,~~-,   .,--~!$######$            ";
    npc.vecBuffer[17] = "            =$~.,---~:-.  .-;;:!==##$=            ";
    npc.vecBuffer[18] = "            ,=~...   ...  .,,...,-:$$;            ";
    npc.vecBuffer[19] = "            .:~....,,...  ,,..,,,--:*.            ";
    npc.vecBuffer[20] = "             .-...~-$-,   ,.-$::-,,~:             ";
    npc.vecBuffer[21] = "              ,.  . ..    ,....,,,,-~             ";
    npc.vecBuffer[22] = "            . ,.          ,.  ....,-~             ";
    npc.vecBuffer[23] = "              ,.          ,.    ..,~-             ";
    npc.vecBuffer[24] = "               ,          .,    ..--,             ";
    npc.vecBuffer[25] = "               ,.         .,    .,-,              ";
    npc.vecBuffer[26] = "               ,.         ,,.   .,-               ";
    npc.vecBuffer[27] = "               ..     .-,,~-.  ..,,               ";
    npc.vecBuffer[28] = "                .      ...,,....,,                ";
    npc.vecBuffer[29] = "                ,    .   ..,,..,,-                ";
    npc.vecBuffer[30] = "                .....--,,,-~~,,,,.                ";
    npc.vecBuffer[31] = "                 ,.....   .-,,,--                 ";
    npc.vecBuffer[32] = "                 ,,....,,,,,,,--,                 ";
    npc.vecBuffer[33] = "                 ,,,.......,,,-~,                 ";
    npc.vecBuffer[34] = "                 ..,..    ..,-~-,                 ";
    npc.vecBuffer[35] = "                 ...,..  ..,-~--,                 ";
    npc.vecBuffer[36] = "                 ,...-,,,,,-~---~~                ";
    npc.vecBuffer[37] = "              .!,..  .,-------,--;~               ";
    npc.vecBuffer[38] = "             .!,,..  ..,,,,,-,,,-;!,              ";
    npc.vecBuffer[39] = "           .,.-....   ....,,,,,,-::,,,            ";
    npc.vecBuffer[40] = "         .,.,.-....     ......,,-~~-,,,,          ";
    npc.vecBuffer[41] = "     .........,....      .....,,,~-,,,,,,,..      ";
    npc.vecBuffer[42] = "   ...,,....,.,....     ......,,---,,,,,,..,.,    ";
    npc.vecBuffer[43] = " .........,,.,.,,...     .   .,,-,,,,,,,..,...,,  ";
    npc.vecBuffer[44] = "...........,,.,....     .    .,,,,,,,...,.,..,..,.";
    npc.vecBuffer[45] = "......,........,,....  ..   ..,,,,,,.,..,....,...,";
    npc.vecBuffer[46] = "....................,.,.....,..,............,,....";
    npc.vecBuffer[47] = "....,.....................,.........,.............";
    npc.vecBuffer[48] = "...........................,..........,.,..,.,.,..";
    npc.vecBuffer[49] = "................................,......, .........";
    npc.vecBuffer[50] = "............. ............,................,,.....";
    npc.vecBuffer[51] = "...................................,.......,......";
    npc.vecBuffer[52] = ".......................,..............,.....,.....";
    npc.vecBuffer[53] = ".......................,.................,........";
    npc.vecBuffer[54] = ".........................................,.,......";
    npc.vecBuffer[55] = ",....................................,........,,..";
    npc.vecBuffer[56] = ".......................................,..........";
    npc.vecBuffer[57] = "...............................,.......,.,........";
    npc.vecBuffer[58] = "..................................................";
    npc.vecBuffer[59] = "......,..................................,.....,.,";
    
    vecNPC.push_back(npc);

}

void CQuestInfo::QueryNpcEx(std::vector<ST_QUEST_NPC_DATA>& vecNPC)
{
    ST_QUEST_NPC_DATA npc;
    npc.Pos.x = 5;
    npc.Pos.y = 20;
    npc.Pos.z = 9;
    npc.nNpcID = 143;
    npc.strTrack = "취약점분석트랙";
    npc.strName = "오성훈";
    npc.nAge = 22;
    npc.strMBTI = "INFJ, A형입니다.";
    npc.cPatch = 'S';
    npc.strMessage = "안녕하세요. BoB 정말 어렵네요. 화이팅.";
    npc.vecBuffer.resize(26);
    npc.vecBuffer[0] = "          ,::.           ";
    npc.vecBuffer[1] = "         -=$$*!:         ";
    npc.vecBuffer[2] = "       ~$##$$$=$*,       ";
    npc.vecBuffer[3] = "      -$####$$=$=:       ";
    npc.vecBuffer[4] = "      !=##=$$==$==:      ";
    npc.vecBuffer[5] = "     .$$$!-;$$$$$$$.     ";
    npc.vecBuffer[6] = "     .$$*- ,!$####$.     ";
    npc.vecBuffer[7] = "     ,##;.  ;######.     ";
    npc.vecBuffer[8] = "     .$*;,,.-*=$##$.     ";
    npc.vecBuffer[9] = "      !:,,~. ,::!=*      ";
    npc.vecBuffer[10] = "      ,-..:...:,-:,      ";
    npc.vecBuffer[11] = "      ..  .  .,.,-.      ";
    npc.vecBuffer[12] = "             .  .,       ";
    npc.vecBuffer[13] = "       ..  ..,  .,       ";
    npc.vecBuffer[14] = "        .  .,,..,.       ";
    npc.vecBuffer[15] = "         ..,,-,,,        ";
    npc.vecBuffer[16] = "        ,,...,,-,        ";
    npc.vecBuffer[17] = "        .,....,-,        ";
    npc.vecBuffer[18] = "        ,.,,.,--,.       ";
    npc.vecBuffer[19] = "       ,,..,---,--       ";
    npc.vecBuffer[20] = "    .....  ..,.,--,,     ";
    npc.vecBuffer[21] = "  .,,.....  ...,,,-,,,.  ";
    npc.vecBuffer[22] = ".....,..,.    .,-,,.,,,, ";
    npc.vecBuffer[23] = "........,,.....,,,......,";
    npc.vecBuffer[24] = "...........,.,,,.......,.";
    vecNPC.push_back(npc);
}

void CQuestInfo::QueryQuest(std::vector<ST_QUEST_DATA*>& vecQuest)
{
}
