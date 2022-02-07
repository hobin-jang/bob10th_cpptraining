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
        npc.x = 6;
        npc.y = 5;
        npc.z = 5;
        npc.nNpcID = 129;
        npc.strTrack = "������������Ʈ��";
        npc.strName = "���� (D_wit)";
        npc.nAge = 25;
        npc.strMBTI = "����";
        npc.cPatch = 'D';
        npc.strMessage = "����� ��þ...";
        npc.strMessage = "����� ������... �Ժη� �ǵ��� ����...";


        npc.vecBigImage.push_back("                                                                ");
        npc.vecBigImage.push_back("                                                                ");
        npc.vecBigImage.push_back("                          . :PbZPj77.                           ");
        npc.vecBigImage.push_back("                      :JdQBMBBBBBBBBBBQqi                       ");
        npc.vecBigImage.push_back("                    rPQQBQbQQMgZdDSZPggRQBK.                    ");
        npc.vecBigImage.push_back("                 .IQMdMQZRQRMEPPDDdPEQQgggBQs                   ");
        npc.vecBigImage.push_back("                5QMBQRZQgE5ggMgQQBQBQBBBQQQBQB.                 ");
        npc.vecBigImage.push_back("               XBdBBBQgEgQQQQQBQBQQQBQBBBQBQBBB                 ");
        npc.vecBigImage.push_back("              IBBBBBRMgQBBBBQBQBQBQBQQQBQBQBBBBB                ");
        npc.vecBigImage.push_back("             7BBBBBQBQBQBBBQBQQRBQBQQQQQQMQQBQBBQ               ");
        npc.vecBigImage.push_back("            .BBBQBBBBBBBBBBBBBBBQBQBQQQQQQMQQBQBB               ");
        npc.vecBigImage.push_back("            gBBQBBBQgDDZDPEMBBBQBBBBBBBBBQBQQQQQB:              ");
        npc.vecBigImage.push_back("            QBBQQBgv.. .   .:irYXQBBQBQBBBBBQQQBBX              ");
        npc.vecBigImage.push_back("            QBBRBBs . . .....     .:::ir2RBBBBQBBq              ");
        npc.vecBigImage.push_back("            7BBBBB:..... . .......     ..::vQBQBB:              ");
        npc.vecBigImage.push_back("             QBBB7..:.....  ..... ..::::i::.7BBBR               ");
        npc.vecBigImage.push_back("              BBZ..:vJvvv2sr:::::i7Usv7LYYi:.2BB                ");
        npc.vecBigImage.push_back("              :BP..::.....::i:::iri.::i:::::.rBL                ");
        npc.vecBigImage.push_back("               BZ...:7s5BBri:...:::7qBQ5Kv:..iBL                ");
        npc.vecBigImage.push_back("               QP...:i::Svr:.. .:::::i:.:::..:Qi                ");
        npc.vecBigImage.push_back("               jq...        ....::.  . ......iK:                ");
        npc.vecBigImage.push_back("               vg.... . . ..:...:ii.  ....:.:i7:                ");
        npc.vecBigImage.push_back("               .ri.... ....i:....:i7:.....::ir:                 ");
        npc.vecBigImage.push_back("                .ii.......:i:j7:rPvri.....::r:                  ");
        npc.vecBigImage.push_back("                  :i........:i..:ri......::i:                   ");
        npc.vecBigImage.push_back("                   ::......   . ..........:i.                   ");
        npc.vecBigImage.push_back("                    ::....:irLs1U2ujr:::.::i                    ");
        npc.vecBigImage.push_back("                    :::..:i7uYujuuIYi:::::r                     ");
        npc.vecBigImage.push_back("                    .r::......:::::....:i7.                     ");
        npc.vecBigImage.push_back("                    .iii:.....:::.:...:i7r                      ");
        npc.vecBigImage.push_back("                    .::r7r:.........:i7vrr                      ");
        npc.vecBigImage.push_back("                    .:.:rvYri:::iir7JJvi:i                      ");
        npc.vecBigImage.push_back("                  .J:....:ivsUU5IX5Ivr:::iiQY                   ");
        npc.vecBigImage.push_back("               iqDBi:.....:::ir7vv7i:.:::::iBBr.                ");
        npc.vecBigImage.push_back("           .YQBBQBB  ..........:::::::.::::. BBBBKi             ");
        npc.vecBigImage.push_back("        iSBBBQBQBQBE. ..........:.:::.::i::.:BBBBBBBBqv.        ");
        npc.vecBigImage.push_back("    .sQBBBBBBBQBBBBBBr   ........:::...:::..EBBBBBBBQBQBBRv.    ");
        npc.vecBigImage.push_back("  uBBBBBBQBBBQBQQQBBBBBL.       ...  ....:LBBBBBBQBQQBBBBBBBBj. ");
        npc.vecBigImage.push_back("gBBBBBQQQBQBQBQBQBQBBBBBBBPYi:     .:v2bMBBBBBQQQBQBQQQQQBQBBBBb");
        npc.vecBigImage.push_back("BBBBBQQQBBBBBBBQBQBQBBBBBBBQBBBQBQBBBBBBBBBQBQQQBQBQQQQQQQQQBQBB");
        npc.vecBigImage.push_back("BQQBQBQBQBQBQBBBBBQBQBQBBBBBQBBBBBBBBBBBQBQBQQQBQBQBQBQBQBQQQBQR");
        npc.vecBigImage.push_back("BQQQBQBBBQBQBQBBBQBQBQBQBQBQBBBQBBBQBBBQBQBQBQBQBQBQBQBQQQQQBQBR");
        npc.vecBigImage.push_back("QQQBQBBBQBQBQBQBQBBBQBQBQQQBQBQBQBQBQBQBQQQBQBQBQQQBQBQQQBQQQBQQ");
        npc.vecBigImage.push_back("QQBQBQBQBQBBBQQQBQBQQQBQBQBQBQBQBQBQBQBQBQBQBQBQBQBQQQBQQQQQBQQM");
        npc.vecBigImage.push_back("QBQBQBQBBBQBQBQBQBQBQBQQQBQBQBQBQBQBQBBBQQQBQBQBQBQBQQQBQBQBQBQQ");
        npc.vecBigImage.push_back("BQBBBBBQBBBQBQBQBQBQBQBQBQBQBQBQBQBQBQBQBQBQBQBBBQBBQQQQBQBQQQBM");
        npc.vecBigImage.push_back("QBQBQBQBBBQBQBQBQBQBQBQBQBQBQQQBQBQBQBQBQBQQQQQBQBQBQBQQQBQBQQQQ");
        npc.vecBigImage.push_back("BQQQBBBQBQBQBBBQBQBQBQBQQQQQQQQQBQBQBQQQBQQQQQQQBQBQBQBQBQBQBQBR");
        npc.vecBigImage.push_back("QQQBQBQBQBQBQBQQQQQQQBQBQBQBQQRQQQMQRQQQQQQQQBQBQBQQQQQQQQQQQBQQ");


        npc.vecSmallImage.push_back("                         ");
        npc.vecSmallImage.push_back("            :.           ");
        npc.vecSmallImage.push_back("        jBBBBBBBD:       ");
        npc.vecSmallImage.push_back("      2BBBBBQBBBBBI      ");
        npc.vecSmallImage.push_back("     uBBBBBQBBBQBQBr     ");
        npc.vecSmallImage.push_back("     BBQ...ir5KdBBBR     ");
        npc.vecSmallImage.push_back("     PB:        :sBr     ");
        npc.vecSmallImage.push_back("      Q.:UU:.:15:.g      ");
        npc.vecSmallImage.push_back("     U. .: .....:v       ");
        npc.vecSmallImage.push_back("       :   :.r. .r       ");
        npc.vecSmallImage.push_back("        :..:77:.i.       ");
        npc.vecSmallImage.push_back("        .i.:rr:ii        ");
        npc.vecSmallImage.push_back("        .ir:ii77:        ");
        npc.vecSmallImage.push_back("     .2q  .irvi..vI.     ");
        npc.vecSmallImage.push_back("  rdBBBB1       .uBBBRI. ");
        npc.vecSmallImage.push_back("QBBBBBBBBBgSYLUMQBBBBBBBB");
        npc.vecSmallImage.push_back("BBBBBQBBBBBBBQBBBBBQBBBBB");
        npc.vecSmallImage.push_back("QBBBQBQBQBBBBBBBQBQBQBQBQ");
        npc.vecSmallImage.push_back("BQBQBQBQBQBQQQQQBQBQQQQQQ");


        vecNPC.push_back(npc);
    }
}

void CQuestInfo::QueryQuestObject(std::vector<ST_QUEST_OBJECT>& vecQuestObject)
{
    //SSD
    {
        ST_QUEST_OBJECT stObject;
        stObject.nQuestObjectId = 266;
        stObject.strName = "512GB¥�� M.2 SSD";
        stObject.cPatch = 'S';	// ȭ�鿡 �������� �ʰ� ���������� �ʰ� �Ϸ��� 0�� ������ ��
        stObject.x = 5;
        stObject.y = 19;
        stObject.z = 3;
        stObject.reserved = 0;
        vecQuestObject.push_back(stObject);
    }

    //�ù�ڽ�
    {
        ST_QUEST_OBJECT stObject;
        stObject.nQuestObjectId = 274;
        stObject.strName = "����� �ù�ڽ�";
        stObject.cPatch = 'C';	// ȭ�鿡 �������� �ʰ� ���������� �ʰ� �Ϸ��� 0�� ������ ��
        stObject.x = 18;
        stObject.y = 9;
        stObject.z = 3;
        stObject.reserved = 0;
        vecQuestObject.push_back(stObject);
    }
}

void CQuestInfo::QueryQuest(std::vector<ST_QUEST_DATA>& vecQuest)
{
    //D-wit
    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 129;
        stQuest.StartCondition = ST_FILTER(129, 0x0000, 0x0001);
        stQuest.vecMessages.push_back("�Ͼ�... ȯ���ϰγ�. �����ϵ�� �� ���� �ڲ� ƨ��°�-");
        stQuest.vecMessages.push_back("��? �ڳ״� ������? ��- 11�⿩?");
        stQuest.vecMessages.push_back("����, ��ħ �� ������. ��... ����, �� ��Ź �ϳ��� �ص� ��?");
        stQuest.vecMessages.push_back("���� �� ��Ʈ���� ����, BoB ������ �˰�. ��Ƽ������ �� �ִ� �ǵ�,");
        stQuest.vecMessages.push_back("������ ���� ¯¯��- ������, ������, �߲��Ϥ�... �� �̰Ŵ� �ڶ��� �ƴѵ�...");
        stQuest.vecMessages.push_back("��, ��ư������. ������ 512�Ⱑ�� �ִ� ��. ��Ʈ�� ġ��� ���� �ִ� ���ݿ�, ����?");
        stQuest.vecMessages.push_back("�ٵ� �̰� ����...");
        stQuest.vecMessages.push_back("(������ ���İ� �����Ѵ�.)");
        stQuest.vecMessages.push_back("�� �� ���ѷ� ����- �� �׸� ����� ����? �� ��� �� ������ �����γ�.");
        stQuest.vecMessages.push_back("��... ������� ����ߵ��?");
        stQuest.vecMessages.push_back("��, ��, �¾�. ����, �ڳ� ���� ����� �����ݿ�!");
        stQuest.vecMessages.push_back("��ư����. �� ����, ������Ʈ��鼭 ����ڽ��� ��Ƽ� ���µ�, �̰� �뷮�� �����.");
        stQuest.vecMessages.push_back("���뱳�� �� ��� �ڵ���� �� �q�� ���ϲ� ���� ������ ���߷�.");
        stQuest.vecMessages.push_back("�׷������� ����, ���ƴ��ٰ� ���� ������ ������ �� �ּ��� �ָ� �� �ǳ�?");
        stQuest.vecMessages.push_back("��ٴ� ���� ������ 'S'��� ���� ������. �� ������ �ϳ��� �ּ��� ���.");
        stQuest.ClearCondition = ST_FILTER(129, 0x0003);
        vecQuest.push_back(stQuest);
    }

    //������
    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 266;
        stQuest.StartCondition = ST_FILTER(129, 0x0001, 0x0003);
        stQuest.vecMessages.push_back("NVMe M.2 SSD (512GB). �̰ǰ�?");
        stQuest.vecMessages.push_back("�ٵ� �̰� �� ���� �׳� ������ ����?");
        stQuest.vecMessages.push_back("[������ �� �� ���� SSD]�� ȹ���߽��ϴ�.");
        stQuest.vecMessages.push_back("�̰� �� �ֿ����� ���� ����� �� �ƴϾ�...?");
        stQuest.vecMessages.push_back("�� ����, �׳� �������� ��.");
        stQuest.ClearCondition = ST_FILTER(129, 0x0007);
        vecQuest.push_back(stQuest);
    }

    //D-wit
    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 129;
        stQuest.StartCondition = ST_FILTER(129, 0x0003, 0x0007);
        stQuest.vecMessages.push_back("����? �������� ���� ã����? �� �����.");
        stQuest.vecMessages.push_back("[������ �� �� ���� SSD]�� �����߽��ϴ�.");
        stQuest.vecMessages.push_back("����, �̰� ����� ���ͼ� �Ҿ���� �� �Ƴ�?");
        stQuest.vecMessages.push_back("���̴н��� 512�Ⱑ����... �̰� ��ٴ� ����� �� �ôµ�...");
        stQuest.vecMessages.push_back("���� �� ��� �����ΰ� ���忬���Ѵٰ� �׷��δ�.");
        stQuest.vecMessages.push_back("�־��- ������ ���� Ȯ���غ��ڰ�.");
        stQuest.vecMessages.push_back("(��Ʈ�� ������ ��� SSD�� �����Ѵ�.)");
        stQuest.vecMessages.push_back("����. �� �ǳ���. ���п� ���� �뷮 ���� �� �ص� �ǰξ�.");
        stQuest.vecMessages.push_back("�ٵ�... �̰� ���� �����ϴ� ����?");
        stQuest.vecMessages.push_back("���࿡ �̰� �� �� �ƴϸ��� ������ �� �� �Ƴ�?");
        stQuest.vecMessages.push_back("��, ��Ź �ϳ��� �� ����.");
        stQuest.vecMessages.push_back("�̰� �� �Ÿ���, �ֺ��� �ù� �ڽ� ��ų��� �� ������.");
        stQuest.vecMessages.push_back("'B'��� ����� �� ������... ��ư������ �� �ù� �ڽ� �� �� �´��� �� Ȯ���������.");
        stQuest.ClearCondition = ST_FILTER(129, 0x000F);
        vecQuest.push_back(stQuest);
    }

    //�ù�ڽ�
    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 274;
        stQuest.StartCondition = ST_FILTER(129, 0x0007, 0x000F);
        stQuest.vecMessages.push_back("�������... ���� �̰ž�?");
        stQuest.vecMessages.push_back("SSD 512... �³�!");
        stQuest.vecMessages.push_back("���⼭ SSD ������ �Ʊ� �ű���� ��������?");
        stQuest.vecMessages.push_back("�˰� ����. ��� ����, �̸��� ������������?");
        stQuest.vecMessages.push_back("�ּҰ�... �󵵷�41��...");
        stQuest.vecMessages.push_back("[SSD ������ �ּ�]�� ȹ���߽��ϴ�.");
        stQuest.vecMessages.push_back("�� ��... �̷� �ͱ��� �˷���� ��...����?");
        stQuest.ClearCondition = ST_FILTER(129, 0x001F);
        vecQuest.push_back(stQuest);
    }

    //D-wit
    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 129;
        stQuest.StartCondition = ST_FILTER(129, 0x000F, 0x001F);
        stQuest.vecMessages.push_back("��, ã����? �̸��� ������?");
        stQuest.vecMessages.push_back("[SSD ������ �ּ�]�� �˷�����ϴ�.");
        stQuest.vecMessages.push_back("�󵵷�41��... �� �� �³�!");
        stQuest.vecMessages.push_back("�������. ���� ����.");
        stQuest.vecMessages.push_back("...��� ����� ����� ������ �� ����?");
        stQuest.vecMessages.push_back("����, �� �Ұ��� �ؾ���.");
        stQuest.vecMessages.push_back("���� ����... ������Ʈ�� 10�⿩. �̸��� ��� ���Ұ�.");
        stQuest.vecMessages.push_back("���⼭�� NPC�鼭 ĳ���͵� ������.");
        stQuest.vecMessages.push_back("�׷��ϲ� �ٽ� ���ϸ���, ���� ���� �� ���Ӽ� �÷��̵� �������- �̰���.");
        stQuest.vecMessages.push_back("��, �׸��� �����δ� �� ������ ������ ����.");
        stQuest.vecMessages.push_back("���� ��ü �̷��� ��������� �ʿ�. �����̴ϲ� �̷���.");
        stQuest.vecMessages.push_back("��... ��ư������, �ñ������ �� ĳ���ͷ� �����.");
        stQuest.vecMessages.push_back("...���� ���� ����. ��ư �� ��Ź�� �� ��������ϲ� �и� �� �����Ұ�.");
        stQuest.vecMessages.push_back("�������״ϲ�, ������ ��!");
        stQuest.ClearCondition = ST_FILTER(129, 0x003F);
        vecQuest.push_back(stQuest);
    }
}