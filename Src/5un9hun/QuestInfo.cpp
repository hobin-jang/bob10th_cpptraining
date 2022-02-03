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
/*
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

}*/

void CQuestInfo::QueryNpcEx(std::vector<ST_QUEST_NPC_DATA>& vecNPC)
{
    ST_QUEST_NPC_DATA npc;
    npc.x = 21;
    npc.y = 9;
    npc.z = 9;
    npc.nNpcID = 143;
    npc.strTrack = "취약점분석트랙";
    npc.strName = "오성훈";
    npc.nAge = 22;
    npc.strMBTI = "INFJ, A형입니다.";
    npc.cPatch = 'S';
    npc.strMessage = "BoB 프로그램 정말 어렵네요오.....\n화이팅!";

    npc.vecBigImage.push_back("                     ~!;;~.                       ");
    npc.vecBigImage.push_back("                    *$$$$$=**~                    ");
    npc.vecBigImage.push_back("                  -!$##$$$$$=$*;,                 ");
    npc.vecBigImage.push_back("               .!!*###$#$$$$$=$$*:                ");
    npc.vecBigImage.push_back("              ;$$######$=$=$======:               ");
    npc.vecBigImage.push_back("             ~=$$######$$$=$=======~              ");
    npc.vecBigImage.push_back("            .==$$###$###$$==$$======,             ");
    npc.vecBigImage.push_back("            :$==####=##=$$$$=$$$=$===             ");
    npc.vecBigImage.push_back("            ====####$=##$#$$=$$$$==$=-            ");
    npc.vecBigImage.push_back("           :====$$$*;~*$$$$==$$=$$=$$=            ");
    npc.vecBigImage.push_back("           ;===$$=;~..,*$$$$$$$$$$$$$$            ");
    npc.vecBigImage.push_back("           *$$===!-,.  ,$$$$#$###$#$$=;           ");
    npc.vecBigImage.push_back("           =$###=;-.    ;##$#####$##$$;           ");
    npc.vecBigImage.push_back("           $##$#=~,.    ~#########$###;           ");
    npc.vecBigImage.push_back("           $####=~,.    :$$#########$$;           ");
    npc.vecBigImage.push_back("           =##=!=:,.    -!=$$########$-           ");
    npc.vecBigImage.push_back("           :#$:,,~~-,   .,--~!$######$            ");
    npc.vecBigImage.push_back("            =$~.,---~:-.  .-;;:!==##$=            ");
    npc.vecBigImage.push_back("            ,=~...   ...  .,,...,-:$$;            ");
    npc.vecBigImage.push_back("            .:~....,,...  ,,..,,,--:*.            ");
    npc.vecBigImage.push_back("             .-...~-$-,   ,.-$::-,,~:             ");
    npc.vecBigImage.push_back("              ,.  . ..    ,....,,,,-~             ");
    npc.vecBigImage.push_back("            . ,.          ,.  ....,-~             ");
    npc.vecBigImage.push_back("              ,.          ,.    ..,~-             ");
    npc.vecBigImage.push_back("               ,          .,    ..--,             ");
    npc.vecBigImage.push_back("               ,.         .,    .,-,              ");
    npc.vecBigImage.push_back("               ,.         ,,.   .,-               ");
    npc.vecBigImage.push_back("               ..     .-,,~-.  ..,,               ");
    npc.vecBigImage.push_back("                .      ...,,....,,                ");
    npc.vecBigImage.push_back("                ,    .   ..,,..,,-                ");
    npc.vecBigImage.push_back("                .....--,,,-~~,,,,.                ");
    npc.vecBigImage.push_back("                 ,.....   .-,,,--                 ");
    npc.vecBigImage.push_back("                 ,,....,,,,,,,--,                 ");
    npc.vecBigImage.push_back("                 ,,,.......,,,-~,                 ");
    npc.vecBigImage.push_back("                 ..,..    ..,-~-,                 ");
    npc.vecBigImage.push_back("                 ...,..  ..,-~--,                 ");
    npc.vecBigImage.push_back("                 ,...-,,,,,-~---~~                ");
    npc.vecBigImage.push_back("              .!,..  .,-------,--;~               ");
    npc.vecBigImage.push_back("             .!,,..  ..,,,,,-,,,-;!,              ");
    npc.vecBigImage.push_back("           .,.-....   ....,,,,,,-::,,,            ");
    npc.vecBigImage.push_back("         .,.,.-....     ......,,-~~-,,,,          ");
    npc.vecBigImage.push_back("     .........,....      .....,,,~-,,,,,,,..      ");
    npc.vecBigImage.push_back("   ...,,....,.,....     ......,,---,,,,,,..,.,    ");
    npc.vecBigImage.push_back(" .........,,.,.,,...     .   .,,-,,,,,,,..,...,,  ");
    npc.vecBigImage.push_back("...........,,.,....     .    .,,,,,,,...,.,..,..,.");
    npc.vecBigImage.push_back("......,........,,....  ..   ..,,,,,,.,..,....,...,");
    npc.vecBigImage.push_back("....................,.,.....,..,............,,....");
    npc.vecBigImage.push_back("....,.....................,.........,.............");
    npc.vecBigImage.push_back("...........................,..........,.,..,.,.,..");
    npc.vecBigImage.push_back("................................,......, .........");
    npc.vecBigImage.push_back("............. ............,................,,.....");
    npc.vecBigImage.push_back("...................................,.......,......");
    npc.vecBigImage.push_back(".......................,..............,.....,.....");
    npc.vecBigImage.push_back(".......................,.................,........");
    npc.vecBigImage.push_back(".........................................,.,......");
    npc.vecBigImage.push_back(",....................................,........,,..");
    npc.vecBigImage.push_back(".......................................,..........");
    npc.vecBigImage.push_back("...............................,.......,.,........");
    npc.vecBigImage.push_back("..................................................");
    npc.vecBigImage.push_back("......,..................................,.....,.,");

    npc.vecSmallImage.push_back("          ,::.           ");
    npc.vecSmallImage.push_back("         -=$$*!:         ");
    npc.vecSmallImage.push_back("       ~$##$$$=$*,       ");
    npc.vecSmallImage.push_back("      -$####$$=$=:       ");
    npc.vecSmallImage.push_back("      !=##=$$==$==:      ");
    npc.vecSmallImage.push_back("     .$$$!-;$$$$$$$.     ");
    npc.vecSmallImage.push_back("     .$$*- ,!$####$.     ");
    npc.vecSmallImage.push_back("     ,##;.  ;######.     ");
    npc.vecSmallImage.push_back("     .$*;,,.-*=$##$.     ");
    npc.vecSmallImage.push_back("      !:,,~. ,::!=*      ");
    npc.vecSmallImage.push_back("      ,-..:...:,-:,      ");
    npc.vecSmallImage.push_back("      ..  .  .,.,-.      ");
    npc.vecSmallImage.push_back("             .  .,       ");
    npc.vecSmallImage.push_back("       ..  ..,  .,       ");
    npc.vecSmallImage.push_back("        .  .,,..,.       ");
    npc.vecSmallImage.push_back("         ..,,-,,,        ");
    npc.vecSmallImage.push_back("        ,,...,,-,        ");
    npc.vecSmallImage.push_back("        .,....,-,        ");
    npc.vecSmallImage.push_back("        ,.,,.,--,.       ");
    npc.vecSmallImage.push_back("       ,,..,---,--       ");
    npc.vecSmallImage.push_back("    .....  ..,.,--,,     ");
    npc.vecSmallImage.push_back("  .,,.....  ...,,,-,,,.  ");
    npc.vecSmallImage.push_back(".....,..,.    .,-,,.,,,, ");
    npc.vecSmallImage.push_back("........,,.....,,,......,");
    npc.vecSmallImage.push_back("...........,.,,,.......,.");

    npc.strContents1 =
        "보안? 얼마나 어렵겠어 ..ㅋ\n"
        "열정을 가지고 열심히 해보자 ㅋ"
        ;
    npc.strContents2 =
        "드디어 2차 전직을 해냈어!\n"
        "나도 이제는 어엿한 B 0 B인이야!\n"
        ;
    npc.strContents3 =
        "역시 팀프로젝트는 너무 어려워..\n"
        "자신감이 하락하는 것 같다.."
        ;
    npc.strContents4 =
        "엔딩이란 없다..\n"
        "끊임없이 노력해라ㅠㅠ.."
        ;

    vecNPC.push_back(npc);
}

void CQuestInfo::QueryQuestObject(std::vector<ST_QUEST_OBJECT>& vecQuestObject)
{
    ST_QUEST_OBJECT stObject;
    stObject.nQuestObjectId = 270;
    stObject.strName = "시계";
    stObject.cPatch = 67;	// 화면에 보이지도 않고 만져지지도 않게 하려면 0을 넣으면 됨
    stObject.x = 21;
    stObject.y = 6;
    stObject.z = 9;
    stObject.reserved = 0;
    vecQuestObject.push_back(stObject);
}

void CQuestInfo::QueryQuest(std::vector<ST_QUEST_DATA>& vecQuest)
{
    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 143;
        stQuest.StartCondition = ST_FILTER(143, 0x0000, 0x0001);
        stQuest.vecMessages.push_back("밤새는건 정말 어려워...");
        stQuest.vecMessages.push_back("밤을 새고 내일 아침에 들을 강의를 생각하면 끔찍한걸..?");
        stQuest.vecMessages.push_back("강의 시작 전에 1시간만 잘테니 날 깨워줄래?");
        stQuest.vecMessages.push_back("혹시 내일 아침에 내가 일어나지 않는다면 뺨을 때려줘");
        stQuest.ClearCondition = ST_FILTER(143, 0x0003);
        vecQuest.push_back(stQuest);
    }

    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 270;
        stQuest.StartCondition = ST_FILTER(143, 0x0001, 0x0003);
        stQuest.vecMessages.push_back("째깍.. 째깍..");
        stQuest.vecMessages.push_back("(제 시간에 맞춰서 깨우지 못할 것 같다.)");
        stQuest.vecMessages.push_back("(피곤하더라도 지금 깨우는게 좋겠다.)");
        stQuest.ClearCondition = ST_FILTER(143, 0x0007);
        vecQuest.push_back(stQuest);
    }

    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 143;
        stQuest.StartCondition = ST_FILTER(143, 0x0003, 0x0007);
        stQuest.vecMessages.push_back("Zzzz........");
        stQuest.vecMessages.push_back("짝..");
        stQuest.vecMessages.push_back("....Zzzz....");
        stQuest.vecMessages.push_back("짝..짝..!");
        stQuest.vecMessages.push_back("........Zzzz");
        stQuest.vecMessages.push_back(".... .... 퍽!");
        stQuest.vecMessages.push_back("아.. 일어났어.. 고마워..");
        stQuest.vecMessages.push_back("그런데 아직 아침이 아니잖아..?");
        stQuest.vecMessages.push_back("후.. 깨워줘서 고마워..");
        stQuest.ClearCondition = ST_FILTER(143, 0x000F);
        vecQuest.push_back(stQuest);
    }

}
