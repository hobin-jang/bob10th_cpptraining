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
    npc.x = 22;
    npc.y = 9;
    npc.z = 10;
    npc.nNpcID = 154;
    npc.strTrack = "������ǰ����Ʈ��";
    npc.strName = "�����";
    npc.nAge = 26;
    npc.strMBTI = "ISTP";
    npc.cPatch = 'U';
    npc.strMessage = "��������Ʈ ���� �̸��̸� ¥�� ����?";
    npc.strContents1 = "�ȳ�~~~";
    npc.strContents2 = "Ʈ�� ���� ������";
    npc.strContents3 = "���� ū �� �ϳ� �Ѿ�����";
    npc.strContents4 = "����ߴ�~";

    npc.vecSmallImage.resize(25);
    npc.vecSmallImage[0] = ",,,,,,,,,,,,,,,,,,,,,,,,,";
    npc.vecSmallImage[1] = ",,,,,,,,,,,,,,,,,,,,,,,,,";
    npc.vecSmallImage[2] = ",,,,,,,,,,,,,,,,,,,,,,,,,";
    npc.vecSmallImage[3] = ",,,,,,,,,-.....:,,,,,,,,,";
    npc.vecSmallImage[4] = ",,,,,,,:.,     ~.,,,,,,,,";
    npc.vecSmallImage[5] = ",,,,,,-,         .,,,,,,,";
    npc.vecSmallImage[6] = ",,,,,,.   .~:-.   ;,,,,,,";
    npc.vecSmallImage[7] = ",,,,,:.           .,,,,,,";
    npc.vecSmallImage[8] = ",,,,,.            ,!,,,,,";
    npc.vecSmallImage[9] = ",,,,,             .:,,,,,";
    npc.vecSmallImage[10] = ",,,,,             .~,,,,,";
    npc.vecSmallImage[11] = ",,,,,              ~-,,,,";
    npc.vecSmallImage[12] = ",,,,               .:~,,,";
    npc.vecSmallImage[13] = ",,,.                ,-,,,";
    npc.vecSmallImage[14] = ",,,.               . .,,,";
    npc.vecSmallImage[15] = ",,,,,              .,,,,,";
    npc.vecSmallImage[16] = ",,,,-.              ,,,,,";
    npc.vecSmallImage[17] = ",,,,~.              ,,,,,";
    npc.vecSmallImage[18] = ",,,,,               ,,,,,";
    npc.vecSmallImage[19] = ",,,,,.             -,,,,,";
    npc.vecSmallImage[20] = ",,,,,-            .:,,,,,";
    npc.vecSmallImage[21] = ",,,,,-,  -.....   :,,,,,,";
    npc.vecSmallImage[22] = ",,,,,,-!;-,,,,,.~:~,,,,,,";
    npc.vecSmallImage[23] = ",,,,,,,--,,,,,,,--,,,,,,,";
    npc.vecSmallImage[24] = ",,,,,,,,,,,,,,,,,,,,,,,,,";

    npc.vecBigImage.resize(70);
    npc.vecBigImage[0] = "                                                            ";
    npc.vecBigImage[1] = "                             .,.                            ";
    npc.vecBigImage[2] = "                         ~~.~;**!;-                         ";
    npc.vecBigImage[3] = "                      ,;==****=====*~.                      ";
    npc.vecBigImage[4] = "                    .;**============**:                     ";
    npc.vecBigImage[5] = "                   -=========$====$====*,                   ";
    npc.vecBigImage[6] = "                  !====$$=$$==$=**=$=====:                  ";
    npc.vecBigImage[7] = "                ,*====$=$$====$=**=$======;.                ";
    npc.vecBigImage[8] = "               ~*===$===$$=$========$$=====!.               ";
    npc.vecBigImage[9] = "              ,;=====$==$$===$=========$==$=:               ";
    npc.vecBigImage[10] = "              :=$===$===*==**======$==$$$$==*,              ";
    npc.vecBigImage[11] = "             -*=========**=*=========$=$$$$$=:              ";
    npc.vecBigImage[12] = "             :=======*==**=============$$$$$$=.             ";
    npc.vecBigImage[13] = "             !=$$========*===$=======$===$$$$=;             ";
    npc.vecBigImage[14] = "            .*===========***=$$======$====$$$=*.            ";
    npc.vecBigImage[15] = "            ,====$==*==*!**====$====$$====$$$==,            ";
    npc.vecBigImage[16] = "            ,=======****!**==========$$=$===$==.            ";
    npc.vecBigImage[17] = "            ,*===*===!!****====*======$$$$====*.            ";
    npc.vecBigImage[18] = "             !====!!*~.,-~~~;!*****===$$$$$===!             ";
    npc.vecBigImage[19] = "             ;==*,..----,.   ..,-;*!;!**=$$$==:             ";
    npc.vecBigImage[20] = "             ,**; .-~~::~,    ..-~:~-~~~~*$$==.             ";
    npc.vecBigImage[21] = "              ;*~ .........   .,,,,,,,,-,-$$=~              ";
    npc.vecBigImage[22] = "              -!.  ..,~:,..   ,,,,:~~-,,,,;$!               ";
    npc.vecBigImage[23] = "              .:   .,,.;!,.   .,,-*:-~-,.,~*-               ";
    npc.vecBigImage[24] = "             . -    ...:-,    ..,,:-,-,..,-~,.              ";
    npc.vecBigImage[25] = "             . .      ....    ...,.,,,....,,..              ";
    npc.vecBigImage[26] = "              ..              ............,,..              ";
    npc.vecBigImage[27] = "              .               ...     ...,,...              ";
    npc.vecBigImage[28] = "              . .             ...     ...,,..               ";
    npc.vecBigImage[29] = "                .             ....    ...,,..               ";
    npc.vecBigImage[30] = "                .            .....  .....,,..               ";
    npc.vecBigImage[31] = "                          ,-,,--.........,...               ";
    npc.vecBigImage[32] = "                            .,,,.........,..                ";
    npc.vecBigImage[33] = "                           ....,...........                 ";
    npc.vecBigImage[34] = "                        .    ...,,,......                   ";
    npc.vecBigImage[35] = "                       .,,....----,......                   ";
    npc.vecBigImage[36] = "                       ........,,,,......                   ";
    npc.vecBigImage[37] = "                            ...........,                    ";
    npc.vecBigImage[38] = "                           ..,,....,,,,                     ";
    npc.vecBigImage[39] = "                    ...    .......,,,,.                     ";
    npc.vecBigImage[40] = "                    ...    ......,,,,,.                     ";
    npc.vecBigImage[41] = "                     ...     ...,,,,,,.                     ";
    npc.vecBigImage[42] = "                     ....  ....,,,,--,.                     ";
    npc.vecBigImage[43] = "                      ......,,,,,---,,.                     ";
    npc.vecBigImage[44] = "                      ...,,,-------,,,.                     ";
    npc.vecBigImage[45] = "                       ...,-~~~~--,,,,,                     ";
    npc.vecBigImage[46] = "                 :!     ..,,-----,,,.,~*,                   ";
    npc.vecBigImage[47] = "               ,*$;     ...,,,-,,,,.,,,*$~.                 ";
    npc.vecBigImage[48] = "               !=-.      ...,,,,,,...,,-*=*-                ";
    npc.vecBigImage[49] = "            . .;! .       ...,,,,,...,,-:==~,,.             ";
    npc.vecBigImage[50] = "           .....!          ...,,.....,,-:==~,,,,..          ";
    npc.vecBigImage[51] = "           . .  ..         ..........,,,;$*,,,,,,,,.        ";
    npc.vecBigImage[52] = "             ..  ..        .........,,,,!*-,,,,,,,,,,..     ";
    npc.vecBigImage[53] = "    .. .      .  ...       .........,,,,;,,,,,,,,,,,,,,...  ";
    npc.vecBigImage[54] = "  . .. ..        .....    ........,.,,,,,,,,,,,,,,,,,,,,,,,.";
    npc.vecBigImage[55] = " ..... . .       .............,,,,,,,......,,,,,,,,,,,,,,,,,";
    npc.vecBigImage[56] = " .    .            . .......,..,.........,,,,,,,.,.,,,..,,,,";
    npc.vecBigImage[57] = " .              .    .........,,..........,,,,,,.,,.,,,.....";
    npc.vecBigImage[58] = "  ..         .    ............................,,,.........,.";
    npc.vecBigImage[59] = " .... .  .        ......... ....  ........,................,";
    npc.vecBigImage[60] = " ..            ... . ...... ..................,,..........,,";
    npc.vecBigImage[61] = "    .      ...  .......... ..................,............,,";
    npc.vecBigImage[62] = "   ...     .    .  ............................,..........,,";
    npc.vecBigImage[63] = "           ...   ...................................,,....,,";
    npc.vecBigImage[64] = ".    .     ..     ........................................,,";
    npc.vecBigImage[65] = "..   .     .. .   ........................................,,";
    npc.vecBigImage[66] = ".    .    ....   ...................................,.....,,";
    npc.vecBigImage[67] = ".   ..    ..... . ........................................-,";
    npc.vecBigImage[68] = ".   .     ....    ........................................-,";
    npc.vecBigImage[69] = ".    .    ....   .....................................,...-,";


    vecNPC.push_back(npc);
}

void CQuestInfo::QueryQuestObject(std::vector<ST_QUEST_OBJECT>& vecQuestObject)
{
    {
        ST_QUEST_OBJECT stObject;
        stObject.nQuestObjectId = 277;
        stObject.strName = "â���� ����";
        stObject.cPatch = 0;	// ȭ�鿡 �������� �ʰ� ���������� �ʰ� �Ϸ��� 0�� ������ ��
        stObject.x = 22;
        stObject.y = 7;
        stObject.z = 5;
        stObject.reserved = 0;
        vecQuestObject.push_back(stObject);
    } 
    
    {
        ST_QUEST_OBJECT stObject;
        stObject.nQuestObjectId = 278;
        stObject.strName = "������";
        stObject.cPatch = 0;	// ȭ�鿡 �������� �ʰ� ���������� �ʰ� �Ϸ��� 0�� ������ ��
        stObject.x = 21;
        stObject.y = 6;
        stObject.z = 5;
        stObject.reserved = 0;
        vecQuestObject.push_back(stObject);
    }
}

void CQuestInfo::QueryQuest(std::vector<ST_QUEST_DATA>& vecQuest)
{
    // ������ ����
    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 154;
        stQuest.StartCondition = ST_FILTER(154, 0x0000, 0x0001);
        stQuest.vecMessages.push_back("���� ���� ���Ϳ� �������� � 1��...");
        stQuest.vecMessages.push_back("���� �˾Ҵµ� ���� �ܿ� Ʈ�������� �߰��ۿ� �ȿԴٰ�?");
        stQuest.vecMessages.push_back("���� ��ģ��... ���� ���鶧�� ġŲ����!");
        stQuest.vecMessages.push_back("���� Ȥ�� ���� ���� 1���� �ܻǻǶ�� �ƴ�?");
        stQuest.vecMessages.push_back("�ܻǻ��� ����ư԰� �԰�;�...");
        stQuest.vecMessages.push_back("����? ����1���� ������ٰ�?");
        stQuest.vecMessages.push_back("�谡 �ʹ� ���µ�...�Ф� Ȥ�� ������ �� ����?");
        stQuest.vecMessages.push_back("�����ְ����Ŷ� ������");
        stQuest.vecMessages.push_back("[5�� ��â�� ��Ƽ ��ó�� �ִ� ���ָ� ���Ŀ���]");
        stQuest.ClearCondition = ST_FILTER(148, 0x0003);
        vecQuest.push_back(stQuest);
    }

    // â���� ����
    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 277;
        stQuest.StartCondition = ST_FILTER(148, 0x0001, 0x0003);
        stQuest.vecMessages.push_back("[���� �԰� �ִ� ��â�� ��Ƽ�� �����̴�]");
        stQuest.vecMessages.push_back("[���� ��� ��������]");
        stQuest.vecMessages.push_back("��â��: ��? �� ���ְ� �����??");
        stQuest.ClearCondition = ST_FILTER(148, 0x0007);
        vecQuest.push_back(stQuest);
    }

    // �������� ���ư�
    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 154;
        stQuest.StartCondition = ST_FILTER(148, 0x0003, 0x0007);
        stQuest.vecMessages.push_back("����. ���ְڴ�!");
        stQuest.vecMessages.push_back("(�ּ��ּ� ������ ������.)");
        stQuest.vecMessages.push_back("�츮�� �ڷγ� ������ ���� ���� �����̾�...");
        stQuest.vecMessages.push_back("�װ� ���� �Ǿ �׻� �ָӴϿ� ���ָ� �ϳ� ���ٴ���");
        stQuest.vecMessages.push_back("�丸 ������ �ɽ����ݾ�?");
        stQuest.vecMessages.push_back("���? �ٵ� �������� ����... ���ٰ� ����߷ȳ� ����");
        stQuest.vecMessages.push_back("����... �������� �ϳ��� ã�Ƽ� ������ �ֶ�");
        stQuest.vecMessages.push_back("[5�� ��â�� ��Ƽ ��ó�� �������� ã�ƺ���]");
        stQuest.vecMessages.push_back("(�ٵ�... ���ָԴµ� �������� �ʿ��߳�...?)");
        stQuest.ClearCondition = ST_FILTER(148, 0x000F);
        vecQuest.push_back(stQuest);
    }

    // ������
    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 278;
        stQuest.StartCondition = ST_FILTER(148, 0x0007, 0x000F);
        stQuest.vecMessages.push_back("[��â�� ��Ƽ�� ���� �������� �߰��ߴ�!]");
        stQuest.vecMessages.push_back("(�ٵ�... �̻�� ��ó�� �� �̷��͵�ۿ� ���°ž�?)");
        stQuest.vecMessages.push_back("[�̹����� ��ġä�� ���� ���� ���ư���]");
        stQuest.ClearCondition = ST_FILTER(148, 0x001F);
        vecQuest.push_back(stQuest);
    }

    // ������
    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 154;
        stQuest.StartCondition = ST_FILTER(148, 0x000F, 0x001F);
        stQuest.vecMessages.push_back("����! ������ ���ڱ�~ ");
        stQuest.vecMessages.push_back("(�ּ��ּ� ������ �� ������.)");
        stQuest.vecMessages.push_back("���� ���� �������~!");
        stQuest.vecMessages.push_back("�ٵ� �����غ��ϱ� �̰� ��� ã���ž�?");
        stQuest.vecMessages.push_back("����?? â�� �׳� �����Դٱ�?");
        stQuest.vecMessages.push_back("������ ���߿� �� �ѹ� ������ ��");
        stQuest.vecMessages.push_back("�� �ʵ� ������");
        stQuest.vecMessages.push_back("���� Ʈ���� ������ �߰��� �� �� ������, ���� ������?");
        stQuest.vecMessages.push_back("���� ��ĥ����, ���� �׷����ŵ�.");
        stQuest.vecMessages.push_back("�׷��� 2�� ������Ʈ�� ���� �޷�����~!");
        stQuest.vecMessages.push_back("���� ���� �´� ģ������ ã�� �θ� ���߿� ū ������ �� �ž�");
        stQuest.vecMessages.push_back("ū �׸��� �� �׷� �ζ�~");
        stQuest.vecMessages.push_back("�󶼴� ���̾�... ���������....");
        stQuest.vecMessages.push_back("(�̻��... ���� �ʹ� ����... �������ΰ�?)");
        stQuest.vecMessages.push_back("�� ������ ��� �;��µ�... ������� ��ϻ���������...");
        stQuest.vecMessages.push_back("Zzzzzz....");
        stQuest.vecMessages.push_back("(������ ��Ƽ�� ���� ���� ���ڱ� ������. ��ƴ�� ��������)");
        stQuest.vecMessages.push_back("[����Ʈ�� �Ϸ��߽��ϴ�]");
        stQuest.ClearCondition = ST_FILTER(148, 0x003F);
        vecQuest.push_back(stQuest);
    }
}