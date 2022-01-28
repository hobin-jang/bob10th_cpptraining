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
        npc.nNpcID = 132;
        npc.strTrack = "������ǰ����";
        npc.strName = "BABY ��â��";
        npc.x = 22;
        npc.y = 15;
        npc.z = 1;
        npc.cPatch = 'B';
        npc.nAge = 5;
        npc.strMBTI = "���� MBTI�� BABY\n"
            "�̶��ϴ�! ����~~";
        npc.strMessage = "�ֱ�� �ƹ��͵� ����! \n"
            "C++�� �ӿ���!! �Դ°ǰ���??\n"
            "�Դ°� ����ϴϱ� �������...\n"
            "���� ����!! ����~~\n";

        npc.vecBigImage.push_back("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");
        npc.vecBigImage.push_back("@@@@@@@@@@@@@@@@@@@@@@@@@@@*!!!!!@@@@@@@@@@@@@@@@@@@@@@@@@@@");
        npc.vecBigImage.push_back("@@@@@@@@@@@@@@@@@@@@@@@@@!!!!!!!!!!@@@@@@@@@@@@@@@@@@@@@@@@@");
        npc.vecBigImage.push_back("@@@@@@@@@@@@@@@@@@@@@@@@!!!******!!!!@@@@@@@@@@@@@@@@@@@@@@@");
        npc.vecBigImage.push_back("@@@@@@@@@@@@@@@@@@@@@@@!************!!@@@@@@@@@@@@@@@@@@@@@@");
        npc.vecBigImage.push_back("@@@@@@@@@@@@@@@@@@@@@@**!:~,,:********@@@@@@@@@@@@@@@@@@@@@@");
        npc.vecBigImage.push_back("@@@@@@@@@@@@@@@@@@@@           ~******~ @@@@@@@@@@@@@@@@@@@@");
        npc.vecBigImage.push_back("@@@@@@@@@@@@@@@@@@              ;******   @@@@@@@@@@@@@@@@@@");
        npc.vecBigImage.push_back("@@@@@@@@@@@@@@@@                 ******     @@@@@@@@@@@@@@@@");
        npc.vecBigImage.push_back("@@@@@@@@@@@@@@@                  ******      @@@@@@@@@@@@@@@");
        npc.vecBigImage.push_back("@@@@@@@@@@@@@@                  .******       @@@@@@@@@@@@@@");
        npc.vecBigImage.push_back("@@@@@@@@@@@@@                   !******        @@@@@@@@@@@@@");
        npc.vecBigImage.push_back("@@@@@@@@@@@@           *;      ~******~         @@@@@@@@@@@@");
        npc.vecBigImage.push_back("@@@@@@@@@@@            ~***:~;********           @@@@@@@@@@@");
        npc.vecBigImage.push_back("@@@@@@@@@@@             *************-           @@@@@@@@@@@");
        npc.vecBigImage.push_back("@@@@@@@@@@              .***********~             @@@@@@@@@@");
        npc.vecBigImage.push_back("@@@@@@@@@@               .*********               @@@@@@@@@@");
        npc.vecBigImage.push_back("@@@@@@@@@                  -!**!~                  @@@@@@@@@");
        npc.vecBigImage.push_back("@@@@@@@@@                                          @@@@@@@@@");
        npc.vecBigImage.push_back("@@@@@@@                                             @@@@@@@@");
        npc.vecBigImage.push_back("@@@@@@@           ===;                ~===          @@@@@@@@");
        npc.vecBigImage.push_back("@@@@@@@.         =====~              ,=====         .@@@@@@@");
        npc.vecBigImage.push_back("@@@@@@..         ======              *=====.        ..@@@@@@");
        npc.vecBigImage.push_back("@@@@@@..         ======              *=====.        ..@@@@@@");
        npc.vecBigImage.push_back("@@@@@...         =====:              -=====         ...@@@@@");
        npc.vecBigImage.push_back("@@@@@...          ===*                ;===.         ...@@@@@");
        npc.vecBigImage.push_back("@@@@@...                   ......                  ....@@@@@");
        npc.vecBigImage.push_back("@@@@@ ..                    ....                   ... @@@@@");
        npc.vecBigImage.push_back("@@@@@@...                                          ...@@@@@@");
        npc.vecBigImage.push_back("@@@@@@ ..                                          .. @@@@@@");
        npc.vecBigImage.push_back("@@@@@@@..                                          ..@@@@@@@");
        npc.vecBigImage.push_back("@@@@@@@@.                                         ..@@@@@@@@");
        npc.vecBigImage.push_back("@@@@@@@@@               ;;.      .;;              @@@@@@@@@@");
        npc.vecBigImage.push_back("@@@@@@@@@@              ;;;;;;;;;;;;              @@@@@@@@@@");
        npc.vecBigImage.push_back("@@@@@@@@@@               ;;;;;;;;;;               @@@@@@@@@@");
        npc.vecBigImage.push_back("@@@@@@@@@@@               ,;;;;;;,               @@@@@@@@@@@");
        npc.vecBigImage.push_back("@@@@@@@@@@@                  ..                  @@@@@@@@@@@");
        npc.vecBigImage.push_back("@@@@@@@@@@@@                                    @@@@@@@@@@@@");
        npc.vecBigImage.push_back("@@@@@@@@@@@@@                                  @@@@@@@@@@@@@");
        npc.vecBigImage.push_back("@@@@@@@@@@@@@@                                @@@@@@@@@@@@@@");
        npc.vecBigImage.push_back("@@@@@@@@@@@@@@@                              @@@@@@@@@@@@@@@");
        npc.vecBigImage.push_back("@@@@@@@@@@@@@@@@                            @@@@@@@@@@@@@@@@");
        npc.vecBigImage.push_back("@@@@@@@@@@@@@@@@@@                        @@@@@@@@@@@@@@@@@@");
        npc.vecBigImage.push_back("@@@@@@@@@@@@@@@@@@@@                    @@@@@@@@@@@@@@@@@@@@");
        npc.vecBigImage.push_back("@@@@@@@@@@@@@@@@@@@@@@@@            @@@@@@@@@@@@@@@@@@@@@@@@");
        npc.vecBigImage.push_back("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");


        npc.vecSmallImage.push_back("@@@@@@@@@@@!!*@@@@@@@@@@@");
        npc.vecSmallImage.push_back("@@@@@@@@@@*!!!!*@@@@@@@@@");
        npc.vecSmallImage.push_back("@@@@@@@@@~~~:***@@@@@@@@@");
        npc.vecSmallImage.push_back("@@@@@@   .  .;**, @@@@@@@");
        npc.vecSmallImage.push_back("@@@@@        :**-   @@@@@");
        npc.vecSmallImage.push_back("@@@@@        ;*!    @@@@@");
        npc.vecSmallImage.push_back("@@@@      !****:     @@@@");
        npc.vecSmallImage.push_back("@@@       .~~~~      @@@@");
        npc.vecSmallImage.push_back("@@@                   @@@");
        npc.vecSmallImage.push_back("@@@    .,       ..    @@@");
        npc.vecSmallImage.push_back("@@.   .!=.      =*,   .@@");
        npc.vecSmallImage.push_back("@@.   .!=.      =*,   .@@");
        npc.vecSmallImage.push_back("@@.    ,-   .   -,    .@@");
        npc.vecSmallImage.push_back("@@.                   .@@");
        npc.vecSmallImage.push_back("@@        .   .      ..@@");
        npc.vecSmallImage.push_back("@@@@      ;;;;;      @@@@");
        npc.vecSmallImage.push_back("@@@@       .:.      @@@@@");
        npc.vecSmallImage.push_back("@@@@@               @@@@@");
        npc.vecSmallImage.push_back("@@@@@               @@@@@");
        npc.vecSmallImage.push_back("@@@@@@@           @@@@@@@");
        npc.vecSmallImage.push_back("@@@@@@@@@       @@@@@@@@@");

        npc.strContents1 = "����...\n"
            "��Ⱑ ����...\n"
            "���и�...����ǰ����...\n"
            "������ �԰��־��µ�...?\n"
            "���ΰ�...\n"
            "BoB �հ��̶��...\n"
            "ȭ��Ʈ��Ŀ �缺�Ҷ�.. ������??\n"
            "��Ŀ....��� �ϸ� �ɼ��ִ°ž�..?\n"
            "����... 27������ ���� ��Ŀ�� �ɼ��ִٰ�?!\n"
            "���ú��� �������´�...\n";

        npc.strContents2 = "������ �����Ѵ�!!";
        npc.strContents3 = "�� ������ ��ģ�� �����Ѵ�!!";
        npc.strContents4 = "�����ε� �����ϰڴ�!!";

        vecNPC.push_back(npc);
    }
    
}


void CQuestInfo::QueryQuest(std::vector<ST_QUEST_DATA*>& vecQuest)
{
    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 132;
        stQuest.StartCondition = ST_FILTER(132, 0x0000, 0x0001);
        stQuest.vecMessages.push_back("��...��Ʈ�ϵ� ���� ������� �°ų�...");
        stQuest.vecMessages.push_back("�⺻�� �ȵ��ֱ��� �⺻��!!");
        stQuest.vecMessages.push_back("��? ���� ���ٰ�? �׷�������..����");
        stQuest.vecMessages.push_back("�κ��� ������������ ���� ��Ʈ���� �ٲ���");
        stQuest.vecMessages.push_back("���� �޾ƿ�����!!");
        stQuest.ClearCondition = ST_FILTER(132, 0x0003);
    }

    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 0;
        stQuest.StartCondition = ST_FILTER(132, 0x0001, 0x0003);
        stQuest.vecMessages.push_back("�������̱���! �ȳ�?");
        stQuest.vecMessages.push_back("���� ��Ʈ�� ������ ���߱���??");
        stQuest.vecMessages.push_back("[BoBƮ��]�� ȹ���߽��ϴ�.");
        stQuest.vecMessages.push_back("����!! ������~~");
        stQuest.vecMessages.push_back("(����...��¥�ֳ�? ����)");
        stQuest.vecMessages.push_back("�ٽ� BABY ��â������ ������");
        //stQuest.vecMessages.push_back("�����״ϱ� ���ʿ� ��ǻ�� �������� �����ϸ� ��~");
        //stQuest.vecMessages.push_back("[1,500,000��]�� ȹ���߽��ϴ�.");
        //���� �߰��Ǵ� NPC ������ ���� BoBƮ�� ȹ�� ������ ��ư� �� ����
        stQuest.ClearCondition = ST_FILTER(132, 0x0007);
    }

    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 132;
        stQuest.StartCondition = ST_FILTER(132, 0x0003, 0x0007);
        stQuest.vecMessages.push_back("��Ʈ���� ���ؿԱ���!!");
        stQuest.vecMessages.push_back("����, �������� ��Ŀ�� �Ǳ����� ������ �����غ��ڴ�!");
        stQuest.vecMessages.push_back("�켱, �������̶�� C++�� �⺻�Ҿ��̶�� �����ִ�");
        stQuest.vecMessages.push_back("��? ���̽��� ¯�̶��?");
        stQuest.vecMessages.push_back("�װ� ���� ����������... �϶�´����! �����ϱ�Ⱦ�?");
        stQuest.vecMessages.push_back("�϶�´����! �����ϱ�Ⱦ�?");
        stQuest.vecMessages.push_back("����... C++�� ������ ������� ���ѹα� �ְ��ڴϱ�..");
        stQuest.vecMessages.push_back("������ ��������� ����!");
        stQuest.ClearCondition = ST_FILTER(132, 0x000F);
    }

    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 4;
        stQuest.StartCondition = ST_FILTER(132, 0x0007, 0x000F);
        stQuest.vecMessages.push_back("�ȳ��ϼ���! 11�⿩���� ȯ���մϴ�.");
        stQuest.vecMessages.push_back("C++ ����� �ǰ�ʹٱ���?");
        stQuest.vecMessages.push_back("�켱... �����а� �������� ���� �����ؾ��մϴ�...");
        stQuest.vecMessages.push_back("(�� �Ҹ���... �̻��Ѿ�����������?;;)");
        stQuest.vecMessages.push_back("�̻��� �Ҹ��� �鸮�ð�����...");
        stQuest.vecMessages.push_back("������ �����ϴ� ���� ������ ������ ġ�� �ɰ̴ϴ�..");
        stQuest.vecMessages.push_back("�ݵ��.. ��ǻ�Ͱ� ���峪�� ���� ��ŭ�� ��(F = ma)�� ����ؼ� ������ �ľ��ϸ�..");
        stQuest.vecMessages.push_back("������ ġ�� �ǰ��� ��� �������κ����ǡ�...");
        stQuest.vecMessages.push_back("(������ְڱ�.. ��������)");
        stQuest.ClearCondition = ST_FILTER(132, 0x001F);
    }

    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 132;
        stQuest.StartCondition = ST_FILTER(132, 0x000F, 0x001F);
        stQuest.vecMessages.push_back("������������������������");
        stQuest.vecMessages.push_back("��Ȳ�ߴ�??");
        stQuest.vecMessages.push_back("������ BoB��Ȱ�� �ϴٺ��� ���̾�..!");
        stQuest.vecMessages.push_back("���� Ȳ���� ���� ���� ���沨��!");
        stQuest.vecMessages.push_back("�������... �и���� ������ 1�����µ�..");
        stQuest.vecMessages.push_back("�߶��뿣 ������ 5���� ���ִٴ���..����");
        stQuest.vecMessages.push_back("������ ��� �ϴµ��� ������ �þ�⸸ ����..");
        stQuest.vecMessages.push_back("��! �Ʊ�������� �հ��ؼ� �����ؿ� �� �̾߱⸦ �������ž�?");
        stQuest.vecMessages.push_back("ž�� �����ٺ��� ����ؼ� ���� ���� �� ��������!");
        stQuest.vecMessages.push_back("�� �̾߱⸦ ��Ƶ��״� ���� ������ �Ǳ� �ٶ���!!");
        stQuest.ClearCondition = ST_FILTER(132, 0x003F);
    }
}