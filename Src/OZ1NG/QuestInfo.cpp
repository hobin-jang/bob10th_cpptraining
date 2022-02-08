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
    strcpy_s(npc.szName, 21, "ȫ�ñ� ��Ƽ");
    npc.patch = 'O';
    strcpy_s(npc.szGreetMessage, 61, "�ȳ��ϼ��� 10�� ������м�Ʈ�� ȫ�ñ��Դϴ� :) �ٵ� ȭ�����Դϴ�!!");

	vecNPC.push_back(npc);
}
*/

void CQuestInfo::QueryNpcEx(std::vector<ST_QUEST_NPC_DATA>& vecNPC)
{
    ST_QUEST_NPC_DATA npc;
    npc.x = 3;
    npc.y = 20;
    npc.z = 23;
    npc.nNpcID = 1019;
    npc.strTrack = "������м�Ʈ��";
    npc.strName = "��¡�� ���� ȫ�ñ�(OZ1NG)";
    npc.nAge = 28;
    npc.strMBTI = "INTP�Դϴ� :)";
    npc.cPatch = 'Z';
    npc.strMessage = "������ ���̾�! �ʵ� ��¡���� ������ ������? \n"
        "�ʵ� ������� ã�� �� �������� ����! ";

    npc.strContents1 = "";

    npc.vecBigImage.resize(60);

    npc.vecBigImage[0] = "                          ....                             ";
    npc.vecBigImage[1] = "                       .-~;;~~~-.                          ";
    npc.vecBigImage[2] = "                    .~*===$===*=;!~~::~.                   ";
    npc.vecBigImage[3] = "                  .;====================:                  ";
    npc.vecBigImage[4] = "                 :========$$$==$$===$$===!                 ";
    npc.vecBigImage[5] = "                *=$==$=$$$$$$$$$$$$$$$$$$=;                ";
    npc.vecBigImage[6] = "              .*=$=$$$$$$$$$$$$$$$$$$$$$$$!.               ";
    npc.vecBigImage[7] = "              *=$=$$$$$$$$$$$$$$$=$$$$$$$$=:               ";
    npc.vecBigImage[8] = "             *==$$$$$$$$$$$$$$$$$=$$$$$$$$$=~              ";
    npc.vecBigImage[9] = "            :==$$$$$$$$$$$$$$$$$$$$$$$$$$$$$=              ";
    npc.vecBigImage[10] = "            ===$$$$$$$$$$$$$$$$=$$$$$$$$$$$$$,             ";
    npc.vecBigImage[11] = "           :===$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$=             ";
    npc.vecBigImage[12] = "           *===$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$.            ";
    npc.vecBigImage[13] = "           ==$$$$$$$$$$$$$$$$$$$=$=$$$$$$$$$$$;            ";
    npc.vecBigImage[14] = "           ===$$$$$$$$$$$$$$=$=$$$$$$$$$$$$$$$=            ";
    npc.vecBigImage[15] = "           ==$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$            ";
    npc.vecBigImage[16] = "           ==$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$            ";
    npc.vecBigImage[17] = "           *$$$$$$$$$$$$$$$$$$$$$$===$$$$$$$$$$.           ";
    npc.vecBigImage[18] = "           *=$$$$$$$$$$$$$$$$$$$$$=====$$=$=$$$.           ";
    npc.vecBigImage[19] = "           *=$$$$$$$$$$$$=$$$$$$$====*======$$$.           ";
    npc.vecBigImage[20] = "           *=$$$$$$$$$$$$$$$$$$$$=*=****====$$$.           ";
    npc.vecBigImage[21] = "           !=$$$$$$$$$$$$$$$=$$$==****!**===$$=            ";
    npc.vecBigImage[22] = "           !=$$=**==$$$====*!$=**=!!**!;;!*====            ";
    npc.vecBigImage[23] = "           ,=$$:~:*!*=*:~;:::!!:!;~~:-,-,,-=$$;            ";
    npc.vecBigImage[24] = "            *==---:;!!**!;-,,--,-~::::~-...*==.            ";
    npc.vecBigImage[25] = "            ;==---~;~---;;:-,..-:;*:--~;...;=*.            ";
    npc.vecBigImage[26] = "           .,!=---~--,,..,~-,..,~~-,. ..-. ~!..            ";
    npc.vecBigImage[27] = "           .,:!~-:--~;!!-,,;;;;:~--;;-...-.-!..            ";
    npc.vecBigImage[28] = "            .-;,!--~:~!=:~,:,,,~-~!=!-~,..;,=              ";
    npc.vecBigImage[29] = "            .~:,,-,,,,-~---:-..---~:,..  ...*,             ";
    npc.vecBigImage[30] = "            .:~,,-,,,,,,,,-~-..-~,,,..   . .;,             ";
    npc.vecBigImage[31] = "            .~-,,~,,,....,--,. .-.....   ~ .~              ";
    npc.vecBigImage[32] = "             ,-,,,-,.....,--,.  .,....  .  ..              ";
    npc.vecBigImage[33] = "             ,,-,,,~....----,.  .,,... ,.  .               ";
    npc.vecBigImage[34] = "              ,-,,,,--,-,,-,,    ,,~,,-    .               ";
    npc.vecBigImage[35] = "              ,,,,,......,,,,.   ...       .               ";
    npc.vecBigImage[36] = "              .,,,,......,,:~,,~..         .               ";
    npc.vecBigImage[37] = "               ,,,,,.....,,,,,...         .                ";
    npc.vecBigImage[38] = "               ,,,,,......,,..            .                ";
    npc.vecBigImage[39] = "               ,,,,,,....,,,...           .                ";
    npc.vecBigImage[40] = "               .,,,,,,,,,,,,..   ...     ..                ";
    npc.vecBigImage[41] = "                ,,,,,,,~:~~--,,,,,~-     .                 ";
    npc.vecBigImage[42] = "                .,,,,,,----,... .  ... . .                 ";
    npc.vecBigImage[43] = "                 ,,,,,,,,,,,,...   ......                  ";
    npc.vecBigImage[44] = "                  -,,,,,,,,,,,,.   ......                  ";
    npc.vecBigImage[45] = "                  .--,-,,,,,,...   .....                   ";
    npc.vecBigImage[46] = "                  .-----,,,,,.     ...,                    ";
    npc.vecBigImage[47] = "                  ,------,,,,..  ...,,,                    ";
    npc.vecBigImage[48] = "                  ,,--~----,,,....,-,,.                    ";
    npc.vecBigImage[49] = "                  ,,---~~----------,...                    ";
    npc.vecBigImage[50] = "                  ,,-,---~::::~~-,,.....                   ";
    npc.vecBigImage[51] = "                 ,,,,--,--~~~~-,,.......                   ";
    npc.vecBigImage[51] = "               ~---,,--,,-----,......  ..!.                ";
    npc.vecBigImage[52] = "              ,,--,,,,,,,----,.....    ..,=.               ";
    npc.vecBigImage[53] = "           ..,,,--,,,,,,,-,,,,.....     .,=                ";
    npc.vecBigImage[54] = "         .,,,,,,,--,,,,,,,-,,,.....     .!.   .            ";
    npc.vecBigImage[56] = "       .,,,,,,,,,,,-,,,,,,,,,.....      ,,                 ";
    npc.vecBigImage[57] = "     .,,,,,,,,,,,,,,,,,,,,,........    ,.    .             ";
    npc.vecBigImage[58] = "   .,,,,,,,,,..,,,,,,.,,,,,,..........,     .              ";
    npc.vecBigImage[59] = " .,,.,..........,,,,,,....,,..........     .               ";
    npc.vecBigImage[59] = ".......................,...........                         ";

    npc.vecSmallImage;	// ������ ����.
    npc.vecSmallImage.resize(25);

    npc.vecSmallImage[0]   = "@@@@@@@@@@@@@&&&&&&&&&&&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@";
    npc.vecSmallImage[1]   = "@@@@@@@@@@...@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@...&@@@@@@@";
    npc.vecSmallImage[2]   = "@@@@@@@@@@@@@@.@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@,@@@@@@@@@@@@";
    npc.vecSmallImage[3]   = "@@@@@@@@@@@@@@@,&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@.@@@@@@@@@@@@@";
    npc.vecSmallImage[4]   = "@@@@@@@@@@@@@@@@,.@%,.......    .......,%@@@#.@@@@@@@@@@@@@@";
    npc.vecSmallImage[5]   = "@@@@@@@@@@@@@#...                   ...   ....*@@@@@@@@@@@@@";
    npc.vecSmallImage[6]   = "@@@@@@@@@#..   .........................  ......../@@@@@@@@@";
    npc.vecSmallImage[7]   = "@@@@@@%..............................................(@@@@@@";
    npc.vecSmallImage[8]   = "@@@@(..................................................,@@@@";
    npc.vecSmallImage[9]   = "@@@......................................................&@@";
    npc.vecSmallImage[10]  = "@&.......@      @..........................%(    *&.......#@";
    npc.vecSmallImage[11]  = "@......@          %......................@          @......@";
    npc.vecSmallImage[12]  = "/.....,      @     (....................,      #     /.....,";
    npc.vecSmallImage[13]  = ",......@          @......................@          %.......";
    npc.vecSmallImage[14]  = "&........&*    ,@..........................@      &,.......(";
    npc.vecSmallImage[15]  = "@..........................................................@";
    npc.vecSmallImage[16]  = "@@........................................................@@";
    npc.vecSmallImage[17]  = "@@@&....................................................#@@@";
    npc.vecSmallImage[18]  = "&&&&&#................................................/@@@@@";
    npc.vecSmallImage[19]  = "&&&&&@@@...*,..................................,,*..@@@@@@@@";
    npc.vecSmallImage[20]  = "@@@@@@@@..&(..,,,,,,,,,............,,,,,,,,,,,../@...@@@@@@@";
    npc.vecSmallImage[21]  = "@@@@@@@@....../@(....,,,,,,,,,,,,,,,,,,..../@(.......%@@@@@@";
    npc.vecSmallImage[22]  = "@@@@@@@@..,.......&@@@@@@&%#/**/(%&@@@@@@@,......,...@@@@@@@";
    npc.vecSmallImage[23]  = "@@@@@@@@@..,,,,,,,..#@@@@@@@@@@@@@@@@@@@@...,,,,,,,,@@@@@@@@";
    npc.vecSmallImage[24]  = "@@@@@@@@@@@@@@&&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@#(#@@@@@@@@@@@@";

    npc.strContents1 =
        "��? ���� �� �̰���..."
        ;

    vecNPC.push_back(npc);


}

void CQuestInfo::QueryQuestObject(std::vector<ST_QUEST_OBJECT>& vecQuestObject)
{
    {
        ST_QUEST_OBJECT stObject;
        stObject.nQuestObjectId = 301;
        stObject.strName = "������ ��ǻ��";
        stObject.cPatch = 1;	// ȭ�鿡 �������� �ʰ� ���������� �ʰ� �Ϸ��� 0�� ������ ��
        stObject.x = 22;
        stObject.y = 22;
        stObject.z = 6;
        stObject.reserved = 0;
        vecQuestObject.push_back(stObject);
    }

    {
        ST_QUEST_OBJECT stObject;
        stObject.nQuestObjectId = 302;
        stObject.strName = "������ USB";
        stObject.cPatch = 1;	// ȭ�鿡 �������� �ʰ� ���������� �ʰ� �Ϸ��� 0�� ������ ��
        stObject.x = 5;
        stObject.y = 20;
        stObject.z = 3;
        stObject.reserved = 0;
        vecQuestObject.push_back(stObject);
    }
}

void CQuestInfo::QueryQuest(std::vector<ST_QUEST_DATA>& vecQuest)
{
    // ��¡�� ���� ȫ�ñ�
    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 1019;
        stQuest.StartCondition = ST_FILTER(1019, 0x0000, 0x0001);
        stQuest.vecMessages.push_back("�� �ҹ� �����?");
        stQuest.vecMessages.push_back("���� ��¡�� �Ų��� ������ USB�� ������ ��ǻ�͸� �� �ǹ� ��򰡿� ���ܵμ̴�!");
        stQuest.vecMessages.push_back("�װ͸� ������ ����� ã�� �� ������ ������ �Ա����...?");
        stQuest.vecMessages.push_back("�� �ð��� ���ƺ��̴µ� �ѹ� ã�ƺ�!");
        stQuest.ClearCondition = ST_FILTER(1019, 0x0003);
        vecQuest.push_back(stQuest);
    }

    // ������ ��ǻ�� // ������ USB ã�� ��
    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 301;
        stQuest.StartCondition = ST_FILTER(1019, 0x0001, 0x0001);
        stQuest.vecMessages.push_back("��ġ�� ������ ��ǻ�Ͱ� �ִ�.");
        stQuest.vecMessages.push_back("���� ġ�� ���ڱ� ���� ���� ������ �����Ѵ�.");
        stQuest.vecMessages.push_back("ȭ�鿡 '������ ��ǻ��'��� ������ ������ִ�.");
        stQuest.vecMessages.push_back("�̰�... ������ ��ǻ��..?");
        stQuest.vecMessages.push_back("������ ��ǻ�͸� ã�Ҵ�. ������ ������ USB�� ����...");
        stQuest.vecMessages.push_back("��ǻ�ʹ� �ٷ� ������ ���Ҵ�.");
        stQuest.ClearCondition = ST_FILTER(1019, 0x0003);
        vecQuest.push_back(stQuest);
    }

    // ������ USB
    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 302;
        stQuest.StartCondition = ST_FILTER(1019, 0x0001, 0x0003);
        stQuest.vecMessages.push_back("�� ������ ����...");
        stQuest.vecMessages.push_back("�ƹ����� ������ USB�� ã�� �� ����.");
        stQuest.vecMessages.push_back("[������ USB]�� ȹ���߽��ϴ�.");
        stQuest.vecMessages.push_back("�̰� ������ ��ǻ�Ϳ� ������ ��û�� ���� �Ͼ �͸� ����.");
        stQuest.ClearCondition = ST_FILTER(1019, 0x0007);
        vecQuest.push_back(stQuest);
    }

    // ������ ��ǻ�� // ������ USB ã�� ��
    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 301;
        stQuest.StartCondition = ST_FILTER(1019, 0x0003, 0x0007);
        stQuest.vecMessages.push_back("��ġ�� ������ ��ǻ�Ͱ� �ִ�.");
        stQuest.vecMessages.push_back("��ǻ�͸� �Ѱ� ������ USB�� �ȾҴ�.");
        stQuest.vecMessages.push_back("���ڱ� ��ǻ�Ͱ� ��û�� ���� ���� �����ߴ�.");
        stQuest.vecMessages.push_back("�ܼ��� ������ USB�� ��û�� ���̵����� �������� �Ӹ��ӿ� ���Դ�.");
        stQuest.vecMessages.push_back("[��¡���� ��ȣ]�� ������ϴ�.");
        stQuest.vecMessages.push_back("������ ��ǻ�ʹ� ������ ���� �Ҵٰ� ������ �������ȴ�.");
        stQuest.vecMessages.push_back("�������� �Ͼ����...? [��¡�� ���� ȫ�ñ�]���� ���ư� �����");
        stQuest.ClearCondition = ST_FILTER(1019, 0x000f);
        vecQuest.push_back(stQuest);
    }

    // ��¡�� ���� ȫ�ñ� // Ŭ����
    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 1019;
        stQuest.StartCondition = ST_FILTER(1019, 0x0007, 0x000f);
        stQuest.vecMessages.push_back("ȫ�ñտ��� �������� �־����� �����ߴ�.");
        stQuest.vecMessages.push_back("��...? �׷� ���� �־��ٴ�...");
        stQuest.vecMessages.push_back("�ƹ����� �ʴ� '��¡���� ��ȣ'�� ���� �� ����");
        stQuest.vecMessages.push_back("������! � ������̶� ������ ã�� �� �����ž�");
        stQuest.vecMessages.push_back("�� �Ǳ� �����ٲ�! �� ��� ã���༭ ����! :)");
        stQuest.ClearCondition = ST_FILTER(1019, 0x001f);
        vecQuest.push_back(stQuest);
    }
}

