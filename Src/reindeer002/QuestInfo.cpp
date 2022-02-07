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

    npc.vecBigImage.push_back(",,-,,,,,,,,,,,,,,,,,,---:!!!;~,,,,,,,,,,,,,,,,,,,,");
    npc.vecBigImage.push_back(",,-,,,,,,,,,,,,,,,-;====$$$$$$=;,,,,,,,,,,,,,,,,,,");
    npc.vecBigImage.push_back(",,-,,,,,,,,,,,,,,:=$$$$$$$$$$$$$*~,,,,,,,,,,,,,,,,");
    npc.vecBigImage.push_back(",,-,,,,,,,,,,,,,;$$$$$$$$$$$$$$$$=~,,,,,,,,,,,,,,,");
    npc.vecBigImage.push_back(",,-,,,,,,,,,,,,:$$$$$####$$$$$$$$$=-,,,,,,,,,,,,,,");
    npc.vecBigImage.push_back("-,-,,,,,,,,,,,-$##$#############$$$!,,,,,,,,,,,,,,");
    npc.vecBigImage.push_back("---,,,,,,,,,,,!$##################$=:,,,,,,,,,,,,,");
    npc.vecBigImage.push_back("----,,,,,,,,,~=###################$$!,,,,,,,,,,,,,");
    npc.vecBigImage.push_back("----,,,,,,,,,:$########$$$########$$=-,,,,,,,,,,,,");
    npc.vecBigImage.push_back("-----,,,,,,,,!########=;:*$#########=~,,,,,,,,,,,,");
    npc.vecBigImage.push_back("-----,,,,,,,,!#######$!~-~!$########=~,,,,,,,,,,,,");
    npc.vecBigImage.push_back("-------,,,,,,!######$=:---~*########=~,,,,,,,,,,,,");
    npc.vecBigImage.push_back("-------,,,,,,;######$!----~*########=-,,,,,,,,,,,,");
    npc.vecBigImage.push_back("-------,,,,,,:$######*:---!#########*,,,,,,,,,,,,,");
    npc.vecBigImage.push_back("-------,,,,,,-*######=;:--*########$:,,,,,,,,,,,,,");
    npc.vecBigImage.push_back("-------,,,,,,,-=$=$$=;~---~!$#$$*;=!,,,,,,,,,,,,,,");
    npc.vecBigImage.push_back("-------,,,,,,,-;*~~:;!;~-,,-;*;~--;:,,,,,,,,,,,,,,");
    npc.vecBigImage.push_back("-------,,,,,,,-~!---~;:~,,,,~;~-,,;-,,,,,,,,,,,,,,");
    npc.vecBigImage.push_back("--------,,,,,,--:-,,,,,,,,,,,,,,,,~-,,.,,,,,,,,,,,");
    npc.vecBigImage.push_back("--~-----,,,,,,,---,,,,,,,,..,,,,,,,,,..,,,,,,,,,,,");
    npc.vecBigImage.push_back("--~-----,,,,,,,---,,,,,,,,,,,..,,,,,,,,,,,,,,,,,,,");
    npc.vecBigImage.push_back("--~-----,,,,,,,,--,,,,,,,,,,,,,.,,,,,.,,,,,,,,,,,,");
    npc.vecBigImage.push_back("--~------,,,,,,,,-,,,,,-~---,,,,,,,,,.,,,,,,,,,,,,");
    npc.vecBigImage.push_back("--~------,,,,,,,,,,,,,,,-,,,,,,,,,,,..,,,,,,,,,,,,");
    npc.vecBigImage.push_back("--~------,,,,,,,,,-,,,,,-,,,,,,,,,,,,,,,,,,,,,,,,,");
    npc.vecBigImage.push_back("--~-------,,,,,,,,-,,,~~~---~-,,,,..,,,,,,,,,,,,,,");
    npc.vecBigImage.push_back("--~-------,,,,,,,,,-,,---,,,-,,,,,...,,,,,,,,,,,,,");
    npc.vecBigImage.push_back("--~-------,,,,,,,,,--,,,,--,,,,,,....,,,,,,,,,,,,,");
    npc.vecBigImage.push_back("~~~-------,,,,,,,,,---,,,,,,,,-,,...,,,,,,,,,,,,,,");
    npc.vecBigImage.push_back("~~~--------,,,,,,,,---,,-,,,,,-,,..,,,,,,,,,,,,,,,");
    npc.vecBigImage.push_back("~~~--------,,,,,,,,------------,,..,,,,,,,,,,,,,,,");
    npc.vecBigImage.push_back("~~~---------,,,,,,,----~~:~~---,,,,,,,,,,,,,,,,,,,");
    npc.vecBigImage.push_back("~~~---------,,,,,,------~~~----,,,,.,,,,,,,,,,,,,,");
    npc.vecBigImage.push_back("~~~~--------,,,,,-------,,-----,,-,,,,,,,,,,,,,,,,");
    npc.vecBigImage.push_back("~~~---------,,-~::-------,---,,,-~;-,,,,,,,,,,,,,,");
    npc.vecBigImage.push_back("~~~----------:*$$:---------,,,,,,,!=*:-,,,,,,,,,,,");
    npc.vecBigImage.push_back("~~~~------~!=####!--------,,,,,,,-=##$*;-,,,,,,,,,");
    npc.vecBigImage.push_back("~~~----~;*$######$;------,,,,,,,,:$####$=;-,,,,,,,");
    npc.vecBigImage.push_back("~~~-~:*=##########$:----,,,,,,,,~=######$$=!~,,,,,");
    npc.vecBigImage.push_back("~~~;=##############$!~--,,,,,,-:=########$$$$*:-,,");
    npc.vecBigImage.push_back("~~!##################=!:~---~:*$#########$$$$$=;,,");
    npc.vecBigImage.push_back("~~*#####################$==$$############$$$$$$!,,");
    npc.vecBigImage.push_back("~~*#####################################$$$$$$$!,,");

    npc.vecSmallImage.push_back("@@@@@@@@@@@@@@@");
    npc.vecSmallImage.push_back("@@@@@@@@@@;::::");
    npc.vecSmallImage.push_back(":;!*@@@@@@;:::~");
    npc.vecSmallImage.push_back("~:;@@@@@@@@;:::");
    npc.vecSmallImage.push_back("::~@@@@@@@@@ ~:");
    npc.vecSmallImage.push_back(":;@@@@@@@@@@@;;");
    npc.vecSmallImage.push_back(";!@@@@@@@@@@@::");
    npc.vecSmallImage.push_back(";; @@@@@@@@@;::");
    npc.vecSmallImage.push_back(";;;@@@@@@@;::::");
    npc.vecSmallImage.push_back(":;;;*@@@@@::::;");
    npc.vecSmallImage.push_back("@;!;;;!;~@;;;;;");
    npc.vecSmallImage.push_back("@@;::;;~~-,~::~");
    npc.vecSmallImage.push_back("@@:;;;::-,~:!;:");
    npc.vecSmallImage.push_back("@@~;!;;:-,~!;;:");
    npc.vecSmallImage.push_back("@@:;!!!:::!!!*;");
    npc.vecSmallImage.push_back("@@~!!!*====**!;");
    npc.vecSmallImage.push_back("@@@~:;*****;~@@");
    npc.vecSmallImage.push_back("@@@@,-:!=$*:,@@");
    npc.vecSmallImage.push_back("@@@@@-:!**!:,@@");
    npc.vecSmallImage.push_back("@@@@@,~::~~~,@@");
    npc.vecSmallImage.push_back("@@@@@--:;~~-,@@");
    npc.vecSmallImage.push_back("@@@@@@---~,, @@");
    npc.vecSmallImage.push_back("@@@@@@ ,.,,,@@@");
    npc.vecSmallImage.push_back("@@@@@@@,.,,@@@@");
    npc.vecSmallImage.push_back("@@@@@@@@@,@@@@@");

    npc.strContents1 =
        "�����ĤĤĤĿ���!(����)\n"
        "�����ääþ��(�� �̷�!)\n"
        "...\n"
        "�ߤ�!(����!)\n"
        "���Ƥ������ƾƾƾƾƤ�!!?(��¥ ������ �Ȱž�!!?)?\n"
        "�ٿ���...��ääþ��!(���� ������ ����������)\n"
        "�ɱQ�����ɱQ���Q��!(������������������)\n"
        "(��)\n"
        "(��ϸ� �ٽ� �ΰ����� ���ư� �� ����?)\n"
        "(...)\n"
        "(���� �𸣰ڴ� �ϴ� ���� ���ƴٳຸ��)\n"
        "(�׷��� ���� ���� ��������)\n"
        "(��� �����...)\n"
        "�����ƾƾƾƤ��ƾƤ�(�ʹ� ������ ������!!)\n"
        "�������������Ф̤̾�����̤Ѥ̤�\n"
        "���Ф̤̾�����̤Ѥ̤�\n"
        "����Ф̤̤����������̤о����\n"
        "�Ф̤Ф̤ФФ̤Ф̤�\n"
        "(������ �𸣰����� �̷��� ���� ����� ã�Ƴ��ھ�...)\n"
        "(�����Ҳ���... �ݵ��!!!!!!)\n"
        "(�ٵ� �����̸� ���� �Ȱ��� �������� �Ƴ�?)\n"
        ;

    npc.strContents2 = "�ۼ���";
    npc.strContents3 = "�ۼ���";
    npc.strContents4 = "�ۼ���";
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