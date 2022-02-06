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
    strcpy_s(npc.szName, 21, "������ ��Ƽ");
    npc.patch = 'p';
    strcpy_s(npc.szGreetMessage, 16, "�ȳ��ϼ���.");

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
    npc.strTrack = "������м�Ʈ��";
    npc.strName = "������";
    npc.nAge = 22;
    npc.strMBTI = "INFJ, A���Դϴ�.";
    npc.cPatch = 'S';
    npc.strMessage = "BoB ���α׷� ���� ��Ƴ׿��.....\nȭ����!";

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
        "����? �󸶳� ��ưھ� ..��\n"
        "������ ������ ������ �غ��� ��"
        ;
    npc.strContents2 =
        "���� 2�� ������ �س¾�!\n"
        "���� ������ ��� B 0 B���̾�!\n"
        ;
    npc.strContents3 =
        "���� ��������Ʈ�� �ʹ� �����..\n"
        "�ڽŰ��� �϶��ϴ� �� ����.."
        ;
    npc.strContents4 =
        "�����̶� ����..\n"
        "���Ӿ��� ����ض�Ф�.."
        ;

    vecNPC.push_back(npc);
}

void CQuestInfo::QueryQuestObject(std::vector<ST_QUEST_OBJECT>& vecQuestObject)
{
    ST_QUEST_OBJECT stObject;
    stObject.nQuestObjectId = 270;
    stObject.strName = "�ð�";
    stObject.cPatch = 67;	// ȭ�鿡 �������� �ʰ� ���������� �ʰ� �Ϸ��� 0�� ������ ��
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
        stQuest.vecMessages.push_back("����°� ���� �����...");
        stQuest.vecMessages.push_back("���� ���� ���� ��ħ�� ���� ���Ǹ� �����ϸ� �����Ѱ�..?");
        stQuest.vecMessages.push_back("���� ���� ���� 1�ð��� ���״� �� �����ٷ�?");
        stQuest.vecMessages.push_back("Ȥ�� ���� ��ħ�� ���� �Ͼ�� �ʴ´ٸ� ���� ������");
        stQuest.ClearCondition = ST_FILTER(143, 0x0003);
        vecQuest.push_back(stQuest);
    }

    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 270;
        stQuest.StartCondition = ST_FILTER(143, 0x0001, 0x0003);
        stQuest.vecMessages.push_back("°��.. °��..");
        stQuest.vecMessages.push_back("(�� �ð��� ���缭 ������ ���� �� ����.)");
        stQuest.vecMessages.push_back("(�ǰ��ϴ��� ���� ����°� ���ڴ�.)");
        stQuest.ClearCondition = ST_FILTER(143, 0x0007);
        vecQuest.push_back(stQuest);
    }

    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 143;
        stQuest.StartCondition = ST_FILTER(143, 0x0003, 0x0007);
        stQuest.vecMessages.push_back("Zzzz........");
        stQuest.vecMessages.push_back("¦..");
        stQuest.vecMessages.push_back("....Zzzz....");
        stQuest.vecMessages.push_back("¦..¦..!");
        stQuest.vecMessages.push_back("........Zzzz");
        stQuest.vecMessages.push_back(".... .... ��!");
        stQuest.vecMessages.push_back("��.. �Ͼ��.. ����..");
        stQuest.vecMessages.push_back("�׷��� ���� ��ħ�� �ƴ��ݾ�..?");
        stQuest.vecMessages.push_back("��.. �����༭ ����..");
        stQuest.ClearCondition = ST_FILTER(143, 0x000F);
        vecQuest.push_back(stQuest);
    }

}
