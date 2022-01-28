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
    strcpy_s(npc.szName, 21, "�����");
    npc.patch = 'N';
    strcpy_s(npc.szGreetMessage, 61, "git �������..");

    npc.vecBuffer.resize(60);

    npc.vecBuffer[0] = "                      ,,,,,,,,                    ";
    npc.vecBuffer[1] = "                    ,;#######$-,                  ";
    npc.vecBuffer[2] = "                  ,~$@#@@@@@@#@=,                 ";
    npc.vecBuffer[3] = "                 ,=#@@@@@@@@@@@@=,                ";
    npc.vecBuffer[4] = "                ,=#@@@@@@@#@@@@@@*,               ";
    npc.vecBuffer[5] = "               .!#@@@@@@@#=#@@@@@#*,              ";
    npc.vecBuffer[6] = "               ~=$#@@@@#$*;*$@@@@@#:              ";
    npc.vecBuffer[7] = "              ,!$$#@@#$*!~~:!#@@###*,             ";
    npc.vecBuffer[8] = "              :=$#@@#=*:--,-~=##@@#$:             ";
    npc.vecBuffer[9] = "             -*$$#@#=!:-,,,,-;=#@@##*,            ";
    npc.vecBuffer[10] = "             ~=####=!:-,,..,,~*$#@##$~            ";
    npc.vecBuffer[11] = "             :$#@#$*;~,,...,,-;$####$:            ";
    npc.vecBuffer[12] = "            -*$@@$*;~,......,,~*#####;.           ";
    npc.vecBuffer[13] = "            ~=#@@$!:-.......,,~!$#@##=-           ";
    npc.vecBuffer[14] = "            ~=#@#$*!;;~,..,-:;*$##@@#$~           ";
    npc.vecBuffer[15] = "            :$##=;-,,-,,.,,---,~!#@@@#~           ";
    npc.vecBuffer[16] = "           ,!###!-,,,,,,,,,,,,,-;$#@@#:           ";
    npc.vecBuffer[17] = "           -*##$:-;:!#~,..,,~$;*!=#@@@:           ";
    npc.vecBuffer[18] = "           -=##*-,,-~~-...,,--~-~;*###;           ";
    npc.vecBuffer[19] = "           ~$##!,...,,,...,,,,,,,-;$##$~          ";
    npc.vecBuffer[20] = "           ~$##;,.........,,.....,~*#@#~          ";
    npc.vecBuffer[21] = "           :###;,.  .......,......,!@##~          ";
    npc.vecBuffer[22] = "          ,*###*-.  .......,,....,,!@##~          ";
    npc.vecBuffer[23] = "          -=###$:.....,.,.-,,....,-!@##~          ";
    npc.vecBuffer[24] = "          :$####;,.....,-,--,...,,-*@##~          ";
    npc.vecBuffer[25] = "         ,!$###@;,,.......,,,,,,,-:$@##~          ";
    npc.vecBuffer[26] = "         ,*$###@*-,,,,-,,.,--,,,,-;@##$:          ";
    npc.vecBuffer[27] = "         ~=####@#:,,,,-,,.,--,,,--!@##$;.         ";
    npc.vecBuffer[28] = "        .!$####@@!-,,,,,..,,,,,,-:$@##$;.         ";
    npc.vecBuffer[29] = "        ,=#####@@#:,,,,..,,,,,--:$@@@#$!,         ";
    npc.vecBuffer[30] = "        -$$####@@@*~,,,....,,--:$@@@@#$*,         ";
    npc.vecBuffer[31] = "        -$$$###@@@$:-,,....,,-~*@@@@###*,         ";
    npc.vecBuffer[32] = "        ,=$$###@@@$:---,,,,--~!#@@@@###=-         ";
    npc.vecBuffer[33] = "        -$$#$#@@@@#:------~~~:*#@@@@@@@$:.        ";
    npc.vecBuffer[34] = "        ,=$#$#@@@@#:-,,---~~~:=@@@@@@@@#*,        ";
    npc.vecBuffer[35] = "        ,*$$$#@@@#$:-,,,,---~;=#@@@@@@@@$!.       ";
    npc.vecBuffer[36] = "        .:$$##@@#$=:,,,,,,---;=##@@@@@@@@$:       ";
    npc.vecBuffer[37] = "       .!###@@@@$=!:,,,,,,,,-;=##@@@@@@@@@#:      ";
    npc.vecBuffer[38] = "     ---!##@@@@#=!:~,,.,,,,,-:*=$#@@@@@@@@@$,     ";
    npc.vecBuffer[39] = "   ,,,--:=#@@@#=!;~-,..,,,,,-~:!=$#@@@@@@@@@*~-   ";
    npc.vecBuffer[40] = ",,,,,,--;=$#@@=!:~--,......,,-~:*$$@@@@@@@@@=~--  ";
    npc.vecBuffer[41] = ";-,,-----:*=*=!:--,,........,,,~:*$#@@@@@@@@=~-,. ";
    npc.vecBuffer[42] = ",--,,,--,--:!;~,,.............,-~;=#@@@@@@@#;-,-, ";
    npc.vecBuffer[43] = ",,-,,,,-,,,,,,,,,.............,-~;*#@@@@###=;--,-,";
    npc.vecBuffer[44] = ",-,,,,,,,,,,,,,,,,...........,,-~;*#@##@$=!;-,~---";
    npc.vecBuffer[45] = ",;,,,,,,,,,---,,,,,.........,,,-~*$$$=#=;:~--,~---";
    npc.vecBuffer[46] = ",;,-,-,,,,,---,,,,,,.......,,,,,-:;;!**;~---,,-,--";
    npc.vecBuffer[47] = ",:,,--,,,---,,,,,,,,,,,..,,,,,,,-----~----,-,,-,--";
    npc.vecBuffer[48] = "-:,,--,----,,,,,,,,,~:-,,-,,,,,,,,,,,,,,-------,--";
    npc.vecBuffer[49] = ",~,,,-,,,,,,,,,,,,,-:=:,,-,,,,,,,,,,,,,,----,--,--";
    npc.vecBuffer[50] = ",~----,,,,,,,,,,,,,,-;~,~,,,,,,,,,,,,,,,---,,~-,--";
    npc.vecBuffer[51] = "-~-~~,,,,,,,,,,,,,,,,-,,~-,,,,,,,,,,,,,,-,-,,-,,--";
    npc.vecBuffer[52] = "---:--,,,,,,,,,,,,,,,,,,~,,,-,,,,,,,,,,,-,,-~-,---";
    npc.vecBuffer[53] = "--~~--,,,,,,,,,,,,,,,,,,-,,,,,,,,,,,,,,,,,-~;~--,,";
    npc.vecBuffer[54] = "---:----,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,---:~----";
    npc.vecBuffer[55] = "--~;-~,-,,,,,,,,,,,,,,,,,-,,,,,,,,,,,,,-----~~,,,-";
    npc.vecBuffer[56] = "-,-;-~,,,,,,,,,,,,,,,,,,,,,,,,,,,,,---,---~~~-,,--";
    npc.vecBuffer[57] = ",,-~~-,,,,,,,,,,,,,-,,,,,,,,,,,,,,,-------~~~-,---";
    npc.vecBuffer[58] = "-,-~~-,,,,,,,,,,,-,,,,,.,,,,,,,,,,,,,------;:---,-";
    npc.vecBuffer[59] = "-,-:*--,,,,,,,,,,,,,,,,.,-,,,,,,,,,,,------;;--,,-";

    vecNPC.push_back(npc);

}


void CQuestInfo::QueryNpcEx(std::vector<ST_QUEST_NPC_DATA>& vecNPC)
{
    ST_QUEST_NPC_DATA npc;
    npc.x = 14;
    npc.y = 23;
    npc.z = 5;  // 5��
    npc.nNpcID = 155;
    npc.strTrack = "������������";
    npc.strName = "�����";
    npc.nAge = 22;
    npc.strMBTI = "MBTI�� INFP, �������� B���";
    npc.cPatch = 'N';
    npc.strMessage = "�ڳ� ���� �Բ� MBTI �������غ� ���� ����?";

    //ū �̹��� (50 * 50)
    npc.vecBigImage.push_back("                      ,,,,,,,,                    ");
    npc.vecBigImage.push_back("                    ,;#######$-,                  ");
    npc.vecBigImage.push_back("                  ,~$@#@@@@@@#@=,                 ");
    npc.vecBigImage.push_back("                 ,=#@@@@@@@@@@@@=,                ");
    npc.vecBigImage.push_back("                ,=#@@@@@@@#@@@@@@*,               ");
    npc.vecBigImage.push_back("               .!#@@@@@@@#=#@@@@@#*,              ");
    npc.vecBigImage.push_back("               ~=$#@@@@#$*;*$@@@@@#:              ");
    npc.vecBigImage.push_back("              ,!$$#@@#$*!~~:!#@@###*,             ");
    npc.vecBigImage.push_back("              :=$#@@#=*:--,-~=##@@#$:             ");
    npc.vecBigImage.push_back("             -*$$#@#=!:-,,,,-;=#@@##*,            ");
    npc.vecBigImage.push_back("             ~=####=!:-,,..,,~*$#@##$~            ");
    npc.vecBigImage.push_back("             :$#@#$*;~,,...,,-;$####$:            ");
    npc.vecBigImage.push_back("            -*$@@$*;~,......,,~*#####;.           ");
    npc.vecBigImage.push_back("            ~=#@@$!:-.......,,~!$#@##=-           ");
    npc.vecBigImage.push_back("            ~=#@#$*!;;~,..,-:;*$##@@#$~           ");
    npc.vecBigImage.push_back("            :$##=;-,,-,,.,,---,~!#@@@#~           ");
    npc.vecBigImage.push_back("           ,!###!-,,,,,,,,,,,,,-;$#@@#:           ");
    npc.vecBigImage.push_back("           -*##$:-;:!#~,..,,~$;*!=#@@@:           ");
    npc.vecBigImage.push_back("           -=##*-,,-~~-...,,--~-~;*###;           ");
    npc.vecBigImage.push_back("           ~$##!,...,,,...,,,,,,,-;$##$~          ");
    npc.vecBigImage.push_back("           ~$##;,.........,,.....,~*#@#~          ");
    npc.vecBigImage.push_back("           :###;,.  .......,......,!@##~          ");
    npc.vecBigImage.push_back("          ,*###*-.  .......,,....,,!@##~          ");
    npc.vecBigImage.push_back("          -=###$:.....,.,.-,,....,-!@##~          ");
    npc.vecBigImage.push_back("          :$####;,.....,-,--,...,,-*@##~          ");
    npc.vecBigImage.push_back("         ,!$###@;,,.......,,,,,,,-:$@##~          ");
    npc.vecBigImage.push_back("         ,*$###@*-,,,,-,,.,--,,,,-;@##$:          ");
    npc.vecBigImage.push_back("         ~=####@#:,,,,-,,.,--,,,--!@##$;.         ");
    npc.vecBigImage.push_back("        .!$####@@!-,,,,,..,,,,,,-:$@##$;.         ");
    npc.vecBigImage.push_back("        ,=#####@@#:,,,,..,,,,,--:$@@@#$!,         ");
    npc.vecBigImage.push_back("        -$$####@@@*~,,,....,,--:$@@@@#$*,         ");
    npc.vecBigImage.push_back("        -$$$###@@@$:-,,....,,-~*@@@@###*,         ");
    npc.vecBigImage.push_back("        ,=$$###@@@$:---,,,,--~!#@@@@###=-         ");
    npc.vecBigImage.push_back("        -$$#$#@@@@#:------~~~:*#@@@@@@@$:.        ");
    npc.vecBigImage.push_back("        ,=$#$#@@@@#:-,,---~~~:=@@@@@@@@#*,        ");
    npc.vecBigImage.push_back("        ,*$$$#@@@#$:-,,,,---~;=#@@@@@@@@$!.       ");
    npc.vecBigImage.push_back("        .:$$##@@#$=:,,,,,,---;=##@@@@@@@@$:       ");
    npc.vecBigImage.push_back("       .!###@@@@$=!:,,,,,,,,-;=##@@@@@@@@@#:      ");
    npc.vecBigImage.push_back("     ---!##@@@@#=!:~,,.,,,,,-:*=$#@@@@@@@@@$,     ");
    npc.vecBigImage.push_back("   ,,,--:=#@@@#=!;~-,..,,,,,-~:!=$#@@@@@@@@@*~-   ");
    npc.vecBigImage.push_back(",,,,,,--;=$#@@=!:~--,......,,-~:*$$@@@@@@@@@=~--  ");
    npc.vecBigImage.push_back(";-,,-----:*=*=!:--,,........,,,~:*$#@@@@@@@@=~-,. ");
    npc.vecBigImage.push_back(",--,,,--,--:!;~,,.............,-~;=#@@@@@@@#;-,-, ");
    npc.vecBigImage.push_back(",,-,,,,-,,,,,,,,,.............,-~;*#@@@@###=;--,-,");
    npc.vecBigImage.push_back(",-,,,,,,,,,,,,,,,,...........,,-~;*#@##@$=!;-,~---");
    npc.vecBigImage.push_back(",;,,,,,,,,,---,,,,,.........,,,-~*$$$=#=;:~--,~---");
    npc.vecBigImage.push_back(",;,-,-,,,,,---,,,,,,.......,,,,,-:;;!**;~---,,-,--");
    npc.vecBigImage.push_back(",:,,--,,,---,,,,,,,,,,,..,,,,,,,-----~----,-,,-,--");
    npc.vecBigImage.push_back("-:,,--,----,,,,,,,,,~:-,,-,,,,,,,,,,,,,,-------,--");
    npc.vecBigImage.push_back(",~,,,-,,,,,,,,,,,,,-:=:,,-,,,,,,,,,,,,,,----,--,--");

    //���� �̹��� (25 * 25)
    npc.vecSmallImage.resize(25);
    npc.vecSmallImage.push_back("          .~!!~.         ");
    npc.vecSmallImage.push_back("         ;#@@@@#:        ");
    npc.vecSmallImage.push_back("        :@@@##@@#-       ");
    npc.vecSmallImage.push_back("       -$@#$!!$@@;.      ");
    npc.vecSmallImage.push_back("      .!##=:--;$##,      ");
    npc.vecSmallImage.push_back("      ,$#=:,,,-*##;.     ");
    npc.vecSmallImage.push_back("      ~##!-...,!##$,     ");
    npc.vecSmallImage.push_back("     .*#=-,..,,~=@#,     ");
    npc.vecSmallImage.push_back("     ,$$;:!~.,;*=##,     ");
    npc.vecSmallImage.push_back("     ,#=--~,.,~~~*#,     ");
    npc.vecSmallImage.push_back("     ,#*.........;$*.    ");
    npc.vecSmallImage.push_back("     ~#*,....,..,!#=.    ");
    npc.vecSmallImage.push_back("    .!#=~,...,..,=#=.    ");
    npc.vecSmallImage.push_back("    .=##=,,,,--,-=@=.    ");
    npc.vecSmallImage.push_back("    .*#@=-,,,,,-;$#*.    ");
    npc.vecSmallImage.push_back("    ;$#@@=,..,-~=@#$.    ");
    npc.vecSmallImage.push_back("    ;$#@@=--,-:=@@@#,    ");
    npc.vecSmallImage.push_back("    -#$@@*,,--:$@@@@!    ");
    npc.vecSmallImage.push_back("   .~###$;,,,,:$@@#@#-   ");
    npc.vecSmallImage.push_back(" ..:$#@$!~,,,,~!$@@@@$,. ");
    npc.vecSmallImage.push_back(",,,-!=$!~,....,~!#@@@@:-.");
    npc.vecSmallImage.push_back(",,,-,~:,,......-:$@@@$~,,");
    npc.vecSmallImage.push_back(",--,,,,,,.....,-;=$#*;,,-");
    npc.vecSmallImage.push_back("---,,,,,,,...,,,~:::--,--");
    npc.vecSmallImage.push_back("--,-,,,,,--.,,,,,,,,--,--");

    //���� ���� �� ��Ʈ�� ��Ʈ
    npc.strContents1 =
        "�ȳ� BoB 11�� ģ��, ������ �ݰ��ٳ�\n"
        "���� ���� Ʈ�� 10�� ������̶��\n"
        ;

    // ���� �� �������� ��Ʈ
    npc.strContents2 =
        "������ �����Ѵٳ�!\n"
        "��? ����Ʈ �� ���� ������ �ٸ��ٰ�?\n"
        "�׷� ������ ������ �ѱ鼼. ����� ��� �׻� �Ȱ��� �� �ְڳ�\n"
        ;
    
    // �� ������Ʈ ���� ��Ʈ
    npc.strContents3 =
        "�� ������Ʈ���� �ߴٴ� ����� ���ұ� �׷�\n"
        "��? ������Ʈ�� �������� ���� ���ڴٰ�?\n"
        "����.. 3�� ������ �ִٴ� �� �ؾ���?!?\n"
        "�� ���� ������ ����!! (����)\n"
        ;

    // ���� �� ��Ʈ
    npc.strContents4 =
        "������� �Դٴ� �������� �����ϳ�!"
        "�ڷγ��� ���� �������� �𸣰����� 11�� ���� ������ �������� ���ڱ�\n"
        "�������� Ȱ���� �ǽ��ϱ� �ٶ��\n"
        ;

    vecNPC.push_back(npc);
}

void CQuestInfo::QueryQuestObject(std::vector<ST_QUEST_OBJECT>& vecQuestObject)
{
    // ������Ʈ ���� �Ȱ�
    {
        ST_QUEST_OBJECT stObject;
        stObject.nQuestObjectId = 260;
        stObject.strName = "������Ʈ ���� �Ȱ�";
        stObject.cPatch = 'B';
        stObject.x = 9;
        stObject.y = 12;
        stObject.z = 5;
        stObject.reserved = 0;
        vecQuestObject.push_back(stObject);
    }

    // �Ȱ� ���̽�
    {
        ST_QUEST_OBJECT stObject;
        stObject.nQuestObjectId = 271;
        stObject.strName = "�Ȱ� ���̽�";
        stObject.cPatch = 'D';
        stObject.x = 8;
        stObject.y = 12;
        stObject.z = 5;
        stObject.reserved = 0;
        vecQuestObject.push_back(stObject);
    }

}

void CQuestInfo::QueryQuest(std::vector<ST_QUEST_DATA>& vecQuest)
{
    // NPC �����
    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 155;
        stQuest.StartCondition = ST_FILTER(155, 0x0000, 0x0001);
        stQuest.vecMessages.push_back("�� ���� �ʹ� �����ϳ�..ȭ���� �ʹ� ���� �ó�");
        stQuest.vecMessages.push_back("�̷� �� ������Ʈ ���� �Ȱ��� ����� �ϴµ� �����?");
        stQuest.vecMessages.push_back("�Ʊ� ���ѷ� 5�� �����鼭 �ڳʿ� �ε��ƴµ� �׶� �Ȱ��� �Ҿ���ȳ���");
        stQuest.vecMessages.push_back("���� ������ �ؾ� �ؼ� �ð��� ���µ� �̵� ���ῡ �� ������ �ֳפФ�");
        stQuest.vecMessages.push_back("Ȥ�� �Ȱ� ã�� �� ������ �� �־�?");
        stQuest.vecMessages.push_back("5F���� [������Ʈ ���� �Ȱ�]�� ã�ƺ���");
        stQuest.ClearCondition = ST_FILTER(155, 0x0003);
        vecQuest.push_back(stQuest);
    }

    // ������Ʈ ���� �Ȱ�
    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 260;
        stQuest.StartCondition = ST_FILTER(155, 0x0001, 0x0003);
        stQuest.vecMessages.push_back("[������Ʈ ���� �Ȱ�]�� �ٴڿ� ������ �ִ�.");
        stQuest.vecMessages.push_back("�̰� �����̰� ã�� �Ȱ��ΰ� ����");
        stQuest.vecMessages.push_back("�ٵ� �� �Ȱ� ���̽��� �� ����� ����?");
        stQuest.vecMessages.push_back("���� ������� �η����� �ž�");
        stQuest.vecMessages.push_back("[������Ʈ ���� �Ȱ�]�� ȹ���߽��ϴ�.");
        stQuest.vecMessages.push_back("�ٽ� ��������Է� ���ư���.");
        stQuest.ClearCondition = ST_FILTER(155, 0x0007);
        vecQuest.push_back(stQuest);
    }

    // NPC �����
    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 155;
        stQuest.StartCondition = ST_FILTER(155, 0x0003, 0x000F);
        stQuest.vecMessages.push_back("[�����]���� [������Ʈ ���� �Ȱ�]�� �ǳ޴�.");
        stQuest.vecMessages.push_back("�Ȱ��� ã���༭ ����!");
        stQuest.vecMessages.push_back("(�Ȱ��� �� �� �Ẹ����) �׷��� �Ȱ� ���� ���� ������");
        stQuest.vecMessages.push_back("������ ������ �⽺�� ���ٵ�.. �Ȱ���̰� �������..");
        stQuest.vecMessages.push_back("��? �Ȱ� ���̽��� �Ҿ���ȳ�. �� �ȿ� �Ȱ���̰� �ִµ� �̸� ��¾��");
        stQuest.vecMessages.push_back("�̾������� �Ȱ� ���̽��� ã�ƺ��� �� �־�?");
        stQuest.vecMessages.push_back("[������Ʈ ���� �Ȱ�]�� �߰��� �� ��ó���� [�Ȱ� ���̽�]�� ã�ƺ���");

        stQuest.ClearCondition = ST_FILTER(155, 0x000F);
        vecQuest.push_back(stQuest);
    }

    // �Ȱ� ���̽�
    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 271;
        stQuest.StartCondition = ST_FILTER(155, 0x000F, 0x001F);
        stQuest.vecMessages.push_back("[�Ȱ� ���̽�]�� �߰��ߴ�.");
        stQuest.vecMessages.push_back("�Ȱ� �ִ� �� �ٷ� ���� �־��µ� �Ʊ�� �� �� ����?");
        stQuest.vecMessages.push_back("[�Ȱ� ���̽�]�� ȹ���߽��ϴ�.");
        stQuest.vecMessages.push_back("Ȥ�� �𸣴� �Ȱ���̰� ���̽� �ȿ� �� ����ִ��� Ȯ���غ�����");
        stQuest.vecMessages.push_back("���� ������ �� �� �� ��ų���� ����");
        stQuest.vecMessages.push_back("�� �� ����ֳ�! �׷� �̰� ���� �����ָ� �ǰڴ�.");
        stQuest.vecMessages.push_back("�ٽ� ��������Է� ���ư���.");
        stQuest.ClearCondition = ST_FILTER(155, 0x001F);
        vecQuest.push_back(stQuest);
    }

    // NPC �����
    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 155;
        stQuest.StartCondition = ST_FILTER(155, 0x000F, 0x001F);
        stQuest.vecMessages.push_back("[�����]���� [�Ȱ� ���̽�]�� �ǳ޴�.");
        stQuest.vecMessages.push_back("���ŷο��� �ٵ� �������༭ ���� ����!");
        stQuest.vecMessages.push_back("���п� ���� ���� ������ �� �������� �� ���� �� ����");
        stQuest.vecMessages.push_back("�ʵ� ���� �� ���, BoB 11�� ����!");
        stQuest.vecMessages.push_back("���� ���� �� ����? ���ñ��� �����ؾ� �ϴ� ������ �� ������");
        stQuest.vecMessages.push_back("(�ް��ϰ� ���⸦ �Ұ� ������� ������ ���δ�.)");
        stQuest.ClearCondition = ST_FILTER(155, 0x001F);
        vecQuest.push_back(stQuest);
    }
}
