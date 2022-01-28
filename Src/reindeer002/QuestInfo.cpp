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
    strcpy_s(npc.szName, 21, "�̼��� ��Ƽ");
    npc.patch = 'S';
    strcpy_s(npc.szGreetMessage, 61, "������... � �̰��� �����̾�!!");

    npc.vecBuffer.resize(60);
    npc.vecBuffer[0] = ",,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,...";
    npc.vecBuffer[1] = ",,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,.";
    npc.vecBuffer[2] = ",,---------,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,.";
    npc.vecBuffer[3] = ",,-,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,";
    npc.vecBuffer[4] = ",,-,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,";
    npc.vecBuffer[5] = ",,-,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,";
    npc.vecBuffer[6] = ",,-,,,,,,,,,,,,,,,,,,---:!!!;~,,,,,,,,,,,,,,,,,,,,";
    npc.vecBuffer[7] = ",,-,,,,,,,,,,,,,,,-;====$$$$$$=;,,,,,,,,,,,,,,,,,,";
    npc.vecBuffer[8] = ",,-,,,,,,,,,,,,,,:=$$$$$$$$$$$$$*~,,,,,,,,,,,,,,,,";
    npc.vecBuffer[9] = ",,-,,,,,,,,,,,,,;$$$$$$$$$$$$$$$$=~,,,,,,,,,,,,,,,";
    npc.vecBuffer[10] = ",,-,,,,,,,,,,,,:$$$$$####$$$$$$$$$=-,,,,,,,,,,,,,,";
    npc.vecBuffer[11] = "-,-,,,,,,,,,,,-$##$#############$$$!,,,,,,,,,,,,,,";
    npc.vecBuffer[12] = "---,,,,,,,,,,,!$##################$=:,,,,,,,,,,,,,";
    npc.vecBuffer[13] = "----,,,,,,,,,~=###################$$!,,,,,,,,,,,,,";
    npc.vecBuffer[14] = "----,,,,,,,,,:$########$$$########$$=-,,,,,,,,,,,,";
    npc.vecBuffer[15] = "-----,,,,,,,,!########=;:*$#########=~,,,,,,,,,,,,";
    npc.vecBuffer[16] = "-----,,,,,,,,!#######$!~-~!$########=~,,,,,,,,,,,,";
    npc.vecBuffer[17] = "-------,,,,,,!######$=:---~*########=~,,,,,,,,,,,,";
    npc.vecBuffer[18] = "-------,,,,,,;######$!----~*########=-,,,,,,,,,,,,";
    npc.vecBuffer[19] = "-------,,,,,,:$######*:---!#########*,,,,,,,,,,,,,";
    npc.vecBuffer[20] = "-------,,,,,,-*######=;:--*########$:,,,,,,,,,,,,,";
    npc.vecBuffer[21] = "-------,,,,,,,-=$=$$=;~---~!$#$$*;=!,,,,,,,,,,,,,,";
    npc.vecBuffer[22] = "-------,,,,,,,-;*~~:;!;~-,,-;*;~--;:,,,,,,,,,,,,,,";
    npc.vecBuffer[23] = "-------,,,,,,,-~!---~;:~,,,,~;~-,,;-,,,,,,,,,,,,,,";
    npc.vecBuffer[24] = "--------,,,,,,--:-,,,,,,,,,,,,,,,,~-,,.,,,,,,,,,,,";
    npc.vecBuffer[25] = "--~-----,,,,,,,---,,,,,,,,..,,,,,,,,,..,,,,,,,,,,,";
    npc.vecBuffer[26] = "--~-----,,,,,,,---,,,,,,,,,,,..,,,,,,,,,,,,,,,,,,,";
    npc.vecBuffer[27] = "--~-----,,,,,,,,--,,,,,,,,,,,,,.,,,,,.,,,,,,,,,,,,";
    npc.vecBuffer[28] = "--~------,,,,,,,,-,,,,,-~---,,,,,,,,,.,,,,,,,,,,,,";
    npc.vecBuffer[29] = "--~------,,,,,,,,,,,,,,,-,,,,,,,,,,,..,,,,,,,,,,,,";
    npc.vecBuffer[30] = "--~------,,,,,,,,,-,,,,,-,,,,,,,,,,,,,,,,,,,,,,,,,";
    npc.vecBuffer[31] = "--~-------,,,,,,,,-,,,~~~---~-,,,,..,,,,,,,,,,,,,,";
    npc.vecBuffer[32] = "--~-------,,,,,,,,,-,,---,,,-,,,,,...,,,,,,,,,,,,,";
    npc.vecBuffer[33] = "--~-------,,,,,,,,,--,,,,--,,,,,,....,,,,,,,,,,,,,";
    npc.vecBuffer[34] = "~~~-------,,,,,,,,,---,,,,,,,,-,,...,,,,,,,,,,,,,,";
    npc.vecBuffer[35] = "~~~--------,,,,,,,,---,,-,,,,,-,,..,,,,,,,,,,,,,,,";
    npc.vecBuffer[36] = "~~~--------,,,,,,,,------------,,..,,,,,,,,,,,,,,,";
    npc.vecBuffer[37] = "~~~---------,,,,,,,----~~:~~---,,,,,,,,,,,,,,,,,,,";
    npc.vecBuffer[38] = "~~~---------,,,,,,------~~~----,,,,.,,,,,,,,,,,,,,";
    npc.vecBuffer[39] = "~~~~--------,,,,,-------,,-----,,-,,,,,,,,,,,,,,,,";
    npc.vecBuffer[40] = "~~~---------,,-~::-------,---,,,-~;-,,,,,,,,,,,,,,";
    npc.vecBuffer[41] = "~~~----------:*$$:---------,,,,,,,!=*:-,,,,,,,,,,,";
    npc.vecBuffer[42] = "~~~~------~!=####!--------,,,,,,,-=##$*;-,,,,,,,,,";
    npc.vecBuffer[43] = "~~~----~;*$######$;------,,,,,,,,:$####$=;-,,,,,,,";
    npc.vecBuffer[44] = "~~~-~:*=##########$:----,,,,,,,,~=######$$=!~,,,,,";
    npc.vecBuffer[45] = "~~~;=##############$!~--,,,,,,-:=########$$$$*:-,,";
    npc.vecBuffer[46] = "~~!##################=!:~---~:*$#########$$$$$=;,,";
    npc.vecBuffer[47] = "~~*#####################$==$$############$$$$$$!,,";
    npc.vecBuffer[48] = "~~*#####################################$$$$$$$!,,";
    npc.vecBuffer[49] = "~~*#####################################$$$$$$$!,,";
    npc.vecBuffer[50] = "~~*####################################$$$$$$$$!,,";
    npc.vecBuffer[51] = "~~*#####################################$$$$$$$!,,";
    npc.vecBuffer[52] = "~~*@######################################$$$$$!,.";
    npc.vecBuffer[53] = "~~*@@@@###################################$$$$$!,,";
    npc.vecBuffer[54] = "~~*@@@@######################################$$!,,";
    npc.vecBuffer[55] = "~~*@@@@@######################################$!,,";
    npc.vecBuffer[56] = "~~*@@@@@@@@####################################!,,";
    npc.vecBuffer[57] = "~~*@@@@@@@@@###################################!,,";
    npc.vecBuffer[58] = "~~*@@@@@@@@####################################!,,";
    npc.vecBuffer[59] = "~~*@@@@@@@@@@#####################$==##########;,,";
    vecNPC.push_back(npc);
}

void CQuestInfo::QueryNpcEx(std::vector<ST_QUEST_NPC_DATA>& vecNPC)
{
    ST_QUEST_NPC_DATA npc;
    npc.x = 4;
    npc.y = 19;
    npc.z = 1;
    npc.nNpcID = 150;
    npc.strTrack = "���Ȱ���Ʈ��";
    npc.strName = "�̼���";
    npc.nAge = 23;
    npc.strMBTI = "�� MBTI��... �����?";
    npc.cPatch = 'S';
    npc.strMessage = "�����... ���� ���ΰ̴ϱ�? (��������) �� �տ� ��Ҹ��� �����ϱ���...";
    npc.vecSmallImage;	// ������ ����.
    vecNPC.push_back(npc);
}

void CQuestInfo::QueryQuest(std::vector<ST_QUEST_DATA>& vecQuest)
{
    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 150;
        stQuest.StartCondition = ST_FILTER(128, 0x0000, 0x0001);
        stQuest.vecMessages.push_back("����... ���� �´�...");
        stQuest.vecMessages.push_back("��Ŀ�濡�� ����ް�, ������Ʈ���� ����޾Ҿ�...");
        stQuest.vecMessages.push_back("�׷��� �� ����� ����... ���ʡ�");
        stQuest.vecMessages.push_back("������ �̻������� ���Ƥ���;;");
        stQuest.vecMessages.push_back("Ŀ�Ǽ� ��򰡿� �ִ� ���� ���� �����ϴ� Ŀ�Ǹ� ã����!\nbob wiki�� ���� ���� �����ϴ� Ŀ�ǰ� ���ò���!");
        stQuest.ClearCondition = ST_FILTER(128, 0x0003);
        vecQuest.push_back(stQuest);
    }

    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 257;
        stQuest.StartCondition = ST_FILTER(128, 0x0001, 0x0003);
        stQuest.vecMessages.push_back("���� ī��� ����Ǫġ�� �ϳ� �ּ���!");
        stQuest.vecMessages.push_back("��~ ����ũ�� �ø��ó���?");
        stQuest.vecMessages.push_back("��!");
        stQuest.vecMessages.push_back("�ֹ��Ͻ� ī��� ����Ǫġ�� ���Խ��ϴ�^^");
        stQuest.vecMessages.push_back("[ī��� ����Ǫġ��]�� ȹ���߽��ϴ�.");
        stQuest.vecMessages.push_back("�̷��� �� �����ϴ� ����?");
        stQuest.vecMessages.push_back("�켱 �ٽ� �̼��� ��Ƽ���� ���ư���!");
        stQuest.ClearCondition = ST_FILTER(128, 0x0007);
        vecQuest.push_back(stQuest);
    }

    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 150;
        stQuest.StartCondition = ST_FILTER(128, 0x0003, 0x0007);
        stQuest.vecMessages.push_back("��! �����Ա���!");
        stQuest.vecMessages.push_back("...?");
        stQuest.vecMessages.push_back("�β��� �����?");
        stQuest.vecMessages.push_back("�β���... �����?");
        stQuest.vecMessages.push_back("�������� ��.��.");
        stQuest.vecMessages.push_back("�ƴ� �׳� �װŷ� ���ſ�!");
        stQuest.vecMessages.push_back("�� ���غ�~ ����Ʈ ���� �ȶ��� �׸��̾�~");
        stQuest.vecMessages.push_back("(�������� �ƴϱ��� �� ���...)");
        stQuest.vecMessages.push_back("�ٽ� Ŀ�Ǽ����� ���ư��� �β��� ���븦 �߰��� ��������...");
        stQuest.ClearCondition = ST_FILTER(128, 0x000f);
        vecQuest.push_back(stQuest);
    }

    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 259;
        stQuest.StartCondition = ST_FILTER(128, 0x0007, 0x000f);
        stQuest.vecMessages.push_back("����... Ȥ�� �β��� ���� �ֳ���?");
        stQuest.vecMessages.push_back("�� ��������~ �ϳ� �帱���?");
        stQuest.vecMessages.push_back("��, �ϳ�����...");
        stQuest.vecMessages.push_back("�����ֽ��ϴ�^^");
        stQuest.vecMessages.push_back("[�β��� ����]�� ȹ���ߴ�.");
        stQuest.vecMessages.push_back("�����մϴ�!");
        stQuest.vecMessages.push_back("�ٽ� �̼��� ��Ƽ���� ���ư���");
        stQuest.ClearCondition = ST_FILTER(128, 0x0001f);
        vecQuest.push_back(stQuest);
    }

    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 150;
        stQuest.StartCondition = ST_FILTER(128, 0x000f, 0x0001f);
        stQuest.vecMessages.push_back("�� �׷� �����Դ�?");
        stQuest.vecMessages.push_back("�����...^^");
        stQuest.vecMessages.push_back("��! �׷� �̰ž�!");
        stQuest.vecMessages.push_back("(�ܲ��ܲ�)");
        stQuest.vecMessages.push_back("ļ~ ������ ������ �� ���!");
        stQuest.vecMessages.push_back("�׷�, ���� ���� �̺� �����̱���!");
        stQuest.vecMessages.push_back("������ � ���� �������� ����");
        stQuest.vecMessages.push_back("� �͵��� ����ְ� �ٰ��� ���̰�,");
        stQuest.vecMessages.push_back("� �ϵ��� �� ���Ӱ� ���� ���� ����.");
        stQuest.vecMessages.push_back("������ �׷� �ϵ��� ��� �̰ܳ���, ���� ���� ������ ��������!\n�̺� �� �� ȯ����!");
        stQuest.vecMessages.push_back("�� ������ ��Ź�� ����� �ʶ�� ��� ��� ��� ��ȭ�س� �� ��������! :)");
        stQuest.vecMessages.push_back("���� �� ���⿡ �ڼ��� ������! ������!");
        stQuest.vecMessages.push_back("�׷� �� �̸�...");
        stQuest.vecMessages.push_back("(�̼��� ��Ƽ�� ��� ������ �������. ��Ҽӿ��� ����ϰ� �ƷüҶ�� �����־���...)");
        stQuest.ClearCondition = ST_FILTER(128, 0x0003f);
        vecQuest.push_back(stQuest);
    }
}

void CQuestInfo::QueryQuestObject(std::vector<ST_QUEST_OBJECT>& vecQuestObject)
{
    {
        ST_QUEST_OBJECT stObject;
        stObject.nQuestObjectId = 257;
        stObject.strName = "ī��� ����Ǫġ��";
        stObject.cPatch = 0;
        stObject.x = 28;
        stObject.y = 22;
        stObject.z = 0;
        stObject.reserved = 0;
        vecQuestObject.push_back(stObject);
    }

    {
        ST_QUEST_OBJECT stObject;
        stObject.nQuestObjectId = 259;
        stObject.strName = "�β��� ����";
        stObject.cPatch = 0;
        stObject.x = 34;
        stObject.y = 22;
        stObject.z = 0;
        stObject.reserved = 0;
        vecQuestObject.push_back(stObject);
    }
}