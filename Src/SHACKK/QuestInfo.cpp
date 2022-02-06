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

    {
    ST_QUEST_NPC_DATA npc;
    npc.x = 23;
    npc.y = 16;
    npc.z = 1;
    npc.nNpcID = 158;
    npc.strTrack = "������ǰ����Ʈ��";
    npc.strName = "�Ʊ� â��";
    npc.nAge = 5;
    npc.strMBTI = "BABY";
    npc.cPatch = 'L';
    npc.strMessage = "����~����~";


    npc.strContents1 = "";

    vecNPC.push_back(npc);
    }

    {
        ST_QUEST_NPC_DATA npc;
        npc.x = 7;
        npc.y = 20;
        npc.z = 5;
        npc.nNpcID = 156;
        npc.strTrack = "������ǰ����Ʈ��";
        npc.strName = "��� â��";
        npc.nAge = 5;
        npc.strMBTI = "LOVE ����ؿ� ������";
        npc.cPatch = 'L';
        npc.strMessage = "�ֺ�?(������ε��ϴ�)";
        

        npc.strContents1 = "";

        vecNPC.push_back(npc);
    }

    {
        ST_QUEST_NPC_DATA npc;
        npc.x = 5;
        npc.y = 9;
        npc.z = 16;
        npc.nNpcID = 157;
        npc.strTrack = "������ǰ����Ʈ��";
        npc.strName = "û�ҳ� â��";
        npc.nAge = 18;
        npc.strMBTI = "MBTI : H.E.L.L.";
        npc.cPatch = 'L';
        npc.strMessage = "������ź���� ������ź�� �� ������...";

        vecNPC.push_back(npc);
    }
    
}

void CQuestInfo::QueryQuestObject(std::vector<ST_QUEST_OBJECT>& vecQuestObject)
{
    ST_QUEST_OBJECT stObject;
    stObject.nQuestObjectId = 273;
    stObject.strName = "������ ���1";
    stObject.cPatch = 'm';	// ȭ�鿡 �������� �ʰ� ���������� �ʰ� �Ϸ��� 0�� ������ ��
    stObject.x = 10;
    stObject.y = 23;
    stObject.z = 5;
    stObject.reserved = 0;
    vecQuestObject.push_back(stObject);
}

void CQuestInfo::QueryQuest(std::vector<ST_QUEST_DATA>& vecQuest)
{
    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 158;
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
        stQuest.nNpcId = 158;
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
        stQuest.nNpcId = 158;
        stQuest.StartCondition = ST_FILTER(132, 0x000F, 0x001F);
        stQuest.vecMessages.push_back("������������������������");
        stQuest.vecMessages.push_back("��Ȳ�ߴ�??");
        stQuest.vecMessages.push_back("������ BoB��Ȱ�� �ϴٺ��� ���̾�..!");
        stQuest.vecMessages.push_back("���� Ȳ���� ���� ���� ���沨��!");
        stQuest.vecMessages.push_back("�������... �и���� ������ 1�����µ�..");
        stQuest.vecMessages.push_back("�߶��뿣 ������ 5���� ���ִٴ���..����");
        stQuest.vecMessages.push_back("������ ��� �ϴµ��� ������ �þ�⸸ ����..");
        stQuest.vecMessages.push_back("��! �Ʊ� �������� BoB�� ������ �� �̾߱⸦ �������ž�?");
        stQuest.vecMessages.push_back("ž�� �����ٺ��� ����ؼ� ���� ���� �� ��������!");
        stQuest.vecMessages.push_back("�� �̾߱⸦ ��Ƶ��״� ���� ������ �Ǳ� �ٶ���!!");
        stQuest.ClearCondition = ST_FILTER(132, 0x003F);
    }

    // 5F : � â��
    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 156;
        stQuest.StartCondition = ST_FILTER(132, 0x001F, 0x003F);
        stQuest.vecMessages.push_back("�ȳ�!");
        stQuest.vecMessages.push_back("���� ������ �߱���..!");
        stQuest.vecMessages.push_back("��� �����.. �� �̾߱⸦ ���°� ���..?");
		stQuest.vecMessages.push_back("������ �������, Ʈ�������� ������ �˷��ְڴ�..!");
        stQuest.vecMessages.push_back("���.... ����̳��� �ʴ´�..");
        stQuest.vecMessages.push_back("�ƹ����� ���濡�� ��ٰ� [������ ���]�� �기�Ű���Ф�");
        stQuest.vecMessages.push_back("�� �����ϴ��� �ٻڴϱ� �� ã���ֶ�!!");
        stQuest.vecMessages.push_back("������ ���� �������� �����Ŵ�!!");
        stQuest.ClearCondition = ST_FILTER(132, 0x007F);
        
    }

    //����� ���� ã�ƿ���
    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 273;
        stQuest.StartCondition = ST_FILTER(132, 0x003F, 0x007F);
        stQuest.vecMessages.push_back("(�����ΰ� ��¦�δ�..)");
        stQuest.vecMessages.push_back("(Ȥ�� �̰ǰ�...?");
        stQuest.vecMessages.push_back("[������ ���1]�� ȹ���߽��ϴ�.");
        stQuest.ClearCondition = ST_FILTER(132, 0x00FF);
    }

    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 156;
        stQuest.StartCondition = ST_FILTER(132, 0x007F, 0x00FF);
        stQuest.vecMessages.push_back("����! �ű��־���!! � ��!!");
        stQuest.vecMessages.push_back("[������ ���1]�� �Ҿ����ϴ�.");
        stQuest.vecMessages.push_back("��ƿ��..");
        stQuest.vecMessages.push_back("(����...���� �Դ°ſ���?! �ٴڿ� �������־��µ�.. ����������");
        stQuest.vecMessages.push_back("��-��!");
        stQuest.vecMessages.push_back("���� ��ﳵ��!!");
        stQuest.vecMessages.push_back("�� �׵��� ����ġ�⸦ �ϴ� ������ �־ ����� �����ߴ�....�Ф�");
        stQuest.vecMessages.push_back("�ʹݿ��� �������� ������ ���� ��� \"�����ؾ���~ ��������� ����߾� ���ڽŤФ�\" �̷��� �Ѱ��..");
        stQuest.vecMessages.push_back("�׷��� ���ڱ� ������ �ĵ�ó�� �з��Դ�....�Ф�");
        stQuest.vecMessages.push_back("���� ���� ������ �ؾ��ϴµ�, ���� �� ������ �ǻ���ٴ�.. ���� �����̾���...�Ф�");
        stQuest.vecMessages.push_back("��ó�� ����ġ�⸦ �����ϴ� ����� ��¥ ���鲨��!");
        stQuest.vecMessages.push_back("�׳� ���� ������ ������ ���� �ذ��ϴ°� ����Ʈ�ΰ� ����!!");
        stQuest.vecMessages.push_back("�׷� ���� �����ڳı�?? ���� ���̸� �ȴ�!!");
        stQuest.vecMessages.push_back("����ε�... ����� ��� �Ϸ翡 4�ð��� �ڵ� ����ϴ�...����");
        stQuest.vecMessages.push_back("�׸��� ��...");
        stQuest.vecMessages.push_back("��...�����....");
        stQuest.vecMessages.push_back("");
        stQuest.ClearCondition = ST_FILTER(132, 0x01FF);
    }

    //16F : û�ҳ� â��
    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 157;
        stQuest.StartCondition = ST_FILTER(132, 0x00FF, 0x01FF);
        stQuest.vecMessages.push_back("�̷��̷�~");
    }
}