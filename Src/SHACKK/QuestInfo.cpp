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
        npc.x = 12;
        npc.y = 9;
        npc.z = 7;
        npc.cPatch = 'b';
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

        npc.strContents2 = "������ �����Ѵ�!!\n"
            "5���� ��� â���̰� �Ҹ��� �ִ�!!\n"
            "���� Ƣ�������!!\n";
        npc.strContents3 = "�� ������ ��ģ�� �����Ѵ�!!\n"
            "16���� û�ҳ� â���̰� �Ҹ��� �ֶ�!!\n"
            "���� Ƣ�������!!\n";
        npc.strContents4 = "�����ε� �����ϰڴ�!!";

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
    
}

void CQuestInfo::QueryQuestObject(std::vector<ST_QUEST_OBJECT>& vecQuestObject)
{
    {
        ST_QUEST_OBJECT stObject;
        stObject.nQuestObjectId = 157;
        stObject.strName = "û�ҳ� â��";
        stObject.cPatch = 'L';
        stObject.x = 5;
        stObject.y = 9;
        stObject.z = 16;
        stObject.reserved = 0;
        vecQuestObject.push_back(stObject);
    }

    {
        ST_QUEST_OBJECT stObject;
        stObject.nQuestObjectId = 158;
        stObject.strName = "�Ʊ� â��";
        stObject.cPatch = 'L';
        stObject.x = 23;
        stObject.y = 16;
        stObject.z = 1;
        stObject.reserved = 0;
        vecQuestObject.push_back(stObject);
    }

    {
        ST_QUEST_OBJECT stObject;
        stObject.nQuestObjectId = 159;
        stObject.strName = "����� â��";
        stObject.cPatch = 'L';
        stObject.x = 19;
        stObject.y = 21;
        stObject.z = 27;
        stObject.reserved = 0;
        vecQuestObject.push_back(stObject);
    }

    {
        ST_QUEST_OBJECT stObject;
        stObject.nQuestObjectId = 273;
        stObject.strName = "������ ��� 1";
        stObject.cPatch = '.';
        stObject.x = 10;
        stObject.y = 23;
        stObject.z = 5;
        stObject.reserved = 0;
        vecQuestObject.push_back(stObject);
    }

    {
        ST_QUEST_OBJECT stObject;
        stObject.nQuestObjectId = 279;
        stObject.strName = "������ ��� 2";
        stObject.cPatch = '.';
        stObject.x = 21;
        stObject.y = 17;
        stObject.z = 15;
        stObject.reserved = 0;
        vecQuestObject.push_back(stObject);
    }

    {
        ST_QUEST_OBJECT stObject;
        stObject.nQuestObjectId = 280;
        stObject.strName = "���� ����";
        stObject.cPatch = '.';
        stObject.x = 6;
        stObject.y = 8;
        stObject.z = 27;
        stObject.reserved = 0;
        vecQuestObject.push_back(stObject);
    }
}

void CQuestInfo::QueryQuest(std::vector<ST_QUEST_DATA>& vecQuest)
{
    //{
    //    ST_QUEST_DATA stQuest;
    //    stQuest.nNpcId = 158;
    //    stQuest.StartCondition = ST_FILTER(132, 0x0000, 0x001);
    //    stQuest.vecMessages.push_back("��...��Ʈ�ϵ� ���� ������� �°ų�...");
    //    stQuest.vecMessages.push_back("�⺻�� �ȵ��ֱ��� �⺻��!!");
    //    stQuest.vecMessages.push_back("��? ���� ���ٰ�? �׷�������..����");
    //    stQuest.vecMessages.push_back("�κ��� ������������ ���� ��Ʈ���� �ٲ���");
    //    stQuest.vecMessages.push_back("���� �޾ƿ�����!!");
    //    stQuest.ClearCondition = ST_FILTER(132, 0x0003);
    //    vecQuest.push_back(stQuest);
    //}

    //{
    //    ST_QUEST_DATA stQuest;
    //    stQuest.nNpcId = 0;
    //    stQuest.StartCondition = ST_FILTER(132, 0x0001, 0x0003);
    //    stQuest.vecMessages.push_back("�������̱���! �ȳ�?");
    //    stQuest.vecMessages.push_back("���� ��Ʈ�� ������ ���߱���??");
    //    stQuest.vecMessages.push_back("[BoBƮ��]�� ȹ���߽��ϴ�.");
    //    stQuest.vecMessages.push_back("����!! ������~~");
    //    stQuest.vecMessages.push_back("(����...��¥�ֳ�? ����)");
    //    stQuest.vecMessages.push_back("�ٽ� BABY ��â������ ������");
    //    //stQuest.vecMessages.push_back("�����״ϱ� ���ʿ� ��ǻ�� �������� �����ϸ� ��~");
    //    //stQuest.vecMessages.push_back("[1,500,000��]�� ȹ���߽��ϴ�.");
    //    //���� �߰��Ǵ� NPC ������ ���� BoBƮ�� ȹ�� ������ ��ư� �� ����
    //    stQuest.ClearCondition = ST_FILTER(132, 0x0007);
    //    vecQuest.push_back(stQuest);
    //}

    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 158;
        stQuest.StartCondition = ST_FILTER(132, 0x0000, 0x0007);
        stQuest.vecMessages.push_back("��Ʈ���� ���ؿԱ���!!");
        stQuest.vecMessages.push_back("����, �������� ��Ŀ�� �Ǳ����� ������ �����غ��ڴ�!");
        stQuest.vecMessages.push_back("�켱, �������̶�� C++�� �⺻�Ҿ��̶�� �����ִ�");
        stQuest.vecMessages.push_back("��? ���̽��� ¯�̶��?");
        stQuest.vecMessages.push_back("�װ� ���� ŷ��������...");
        stQuest.vecMessages.push_back("�϶�´����! �����ϱ�Ⱦ�?");
        stQuest.vecMessages.push_back("����... C++�� ������ ������� ���ѹα� �ְ��ڴϱ�..");
        stQuest.vecMessages.push_back("������ ��������� ����!");
        stQuest.ClearCondition = ST_FILTER(132, 0x000F);
        vecQuest.push_back(stQuest);
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
        stQuest.vecMessages.push_back("R.U.N");
        stQuest.ClearCondition = ST_FILTER(132, 0x001F);
        vecQuest.push_back(stQuest);
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
        stQuest.vecMessages.push_back("���� �÷����ϴٺ���, BoB Ȱ���� �ϸ鼭 �˰Ե� ������ �������ٲ�!!");
        stQuest.vecMessages.push_back("���� ������ �Ǳ� �ٶ���!!");
        stQuest.ClearCondition = ST_FILTER(132, 0x003F);
        vecQuest.push_back(stQuest);
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
        stQuest.vecMessages.push_back("�ƹ����� ���濡�� ��ٰ� [������ ���1]�� �기�Ű���Ф�");
        stQuest.vecMessages.push_back("�� �����ϴ��� �ٻڴϱ� �� ã���ֶ�!!");
        stQuest.vecMessages.push_back("������ ���� �������� �����Ŵ�!!");
        stQuest.ClearCondition = ST_FILTER(132, 0x007F);
        vecQuest.push_back(stQuest);
        
    }

    // [������ ���1] ã�ƿ���
    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 273;
        stQuest.StartCondition = ST_FILTER(132, 0x003F, 0x007F);
        stQuest.vecMessages.push_back("(�����ΰ� ��¦�δ�..)");
        stQuest.vecMessages.push_back("(Ȥ�� �̰ǰ�...?");
        stQuest.vecMessages.push_back("[������ ���1]�� ȹ���߽��ϴ�.");
        stQuest.vecMessages.push_back("(�ϴ� ����������..)");
        stQuest.ClearCondition = ST_FILTER(132, 0x00FF);
        vecQuest.push_back(stQuest);
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
        stQuest.vecMessages.push_back("��ó�� ����ġ�Ⱑ ����ȭ �Ǿ��ִ� ����� �̹��� ��ĥ ��ȸ��!!!");
        stQuest.vecMessages.push_back("�׳� ���� ������ ������ ���� �ذ��ϴ°� ����Ʈ�ΰ� ����!!");
        stQuest.vecMessages.push_back("��ó�� �ƹ��͵� �𸣴� �ư��� ������ ȥ�� �ذ��ϱ� ���� �� �ִ�...�Ф�");
        stQuest.vecMessages.push_back("�׷��� ������� �� ��;�ξ�� �Ѵ�!! ������ �����ϸ鼭 ���� ģ���� �� �ִ㤾��");
        stQuest.vecMessages.push_back("�׷� ���� �����ڳı�?? ���� ���̸� �ȴ�!!");
        stQuest.vecMessages.push_back("����ε�... ����� ��� �Ϸ翡 4�ð��� �ڵ� ����ϴ�...����");
        stQuest.vecMessages.push_back("�׸��� ��...");
        stQuest.vecMessages.push_back("��������� Ʈ������ �������� ������ ġ����Ѵٴ°� �˰��ֳ�!!");
        stQuest.vecMessages.push_back("���� ���߿� \"�� ������ ���迡 ���ڴ�\"�� ���� �����Ͻô� ��쵵 �ְ�,");
        stQuest.vecMessages.push_back("�����ڷῡ �����ٰ��� ������ �κ��� ��������!!");
        stQuest.vecMessages.push_back("���� �ٷ����� ��11�ñ��� ������ �־ ������� �� �ð��̶� �������� �ʴ´�...");
        stQuest.vecMessages.push_back("�� �����ð����� ��ǿ� ������ �����ϸ鼭 ������ ������, ���߿� ����ġ�궧 ���ϴ�!!");
        stQuest.vecMessages.push_back("�̹� �� ������ �������... ���� 17���� ���� ���ְڴ�..����");
        stQuest.ClearCondition = ST_FILTER(132, 0x01FF);
        vecQuest.push_back(stQuest);
    }

    //16F : û�ҳ� â��
    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 157;
        stQuest.StartCondition = ST_FILTER(132, 0x00FF, 0x01FF);
        stQuest.vecMessages.push_back("ȣ��...������� ���ٴ� ����ϴ�!!!");
        stQuest.vecMessages.push_back("ž�� ������ ���� �𸣰ڳۤ���");
        stQuest.vecMessages.push_back("���� ���뱳����, ������ ������� �̷� ������ �����̴ּµ�");
        stQuest.vecMessages.push_back("��� �� ���� ���� ���غô�...������");
        stQuest.vecMessages.push_back("���ʹ� �޸� ��������� �ʴ�... �翬�� �������ϴ� ģ���ڱ���!!!");
        stQuest.vecMessages.push_back("����� ���� �� ���� �ֵ��� �ϰڴ�!");
        stQuest.vecMessages.push_back("��...");
        stQuest.vecMessages.push_back("���......");
        stQuest.vecMessages.push_back("����� �ȳ���ФФФФФ�");
        stQuest.vecMessages.push_back("�ƹ����� [������ ���2]�� �Ҿ������ ����ФФФ�");
        stQuest.vecMessages.push_back("15���� �̷ο��� �ʹ� ��̴�... �׶� �Ҿ������ ����...");
        stQuest.vecMessages.push_back("���ٸ� ������ �������� ��... ȭ������ ���� �ƴµ� �׶� ����� ���ư�������Ф�");
        stQuest.vecMessages.push_back("�̾�������.. 15�� ���ٸ� ����� ���� ���������ҰŰ���Ф�");
        stQuest.ClearCondition = ST_FILTER(132, 0x03FF);
        vecQuest.push_back(stQuest);
    }

    // [������ ��� 2] ã�ƿ���
    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 279;
        stQuest.StartCondition = ST_FILTER(132, 0x01FF, 0x03FF);
        stQuest.vecMessages.push_back("(����... ���ڱ���...)");
        stQuest.vecMessages.push_back("(���ڽ�..�󸶳� ȭ�������� �Ǳ��� �긱������ ���� �����žߤ�����)");
        stQuest.vecMessages.push_back("(����Ⱑ �°ǰ�...)");
        stQuest.vecMessages.push_back("[������ ��� 2]�� ȹ���߽��ϴ�.");
        stQuest.vecMessages.push_back("(�ٽ� ���ư���..)");
        stQuest.ClearCondition = ST_FILTER(132, 0x07FF);
        vecQuest.push_back(stQuest);
    }

    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 157;
        stQuest.StartCondition = ST_FILTER(132, 0x03FF, 0x07FF);
        stQuest.vecMessages.push_back("��!! �̰� ã�ٴ� ���ȴ�.....����");
        stQuest.vecMessages.push_back("�̹��� �� ������Ʈ�� ������ ���� �����ϰڴ�..!");
        stQuest.vecMessages.push_back("�̹��� ���� ������... ������Ʈ�� ������ �߿�������..");
        stQuest.vecMessages.push_back("������ ���� �ϴ��ĵ� ������������x9999 �߿��ѰŰ���!");
        stQuest.vecMessages.push_back("���뱳��, Ʈ�������� �������ϴ� ģ������ ������ �ôٰ�,");
        stQuest.vecMessages.push_back("�� ģ������ ������Ʈ�� �������ڰ� ���ž��Ѵ�!@!@");
        stQuest.vecMessages.push_back("�� ������Ʈ�� 3�����̶�� �Ⱓ���� ����Ǵµ�, ���� ª�� �Ⱓ�� �ƴϴ�!!");
        stQuest.vecMessages.push_back("1,2,3�� ��ǥ�� �ϰԵǴµ�... ��ǥ�غ� ������ �ٰ����� ��ô �ٺ�����Ф�");
        stQuest.vecMessages.push_back("������Ʈ�� ���� ������ ����ȭ�ϴ� �۾��� ���ÿ� �����ϸ� ����!!");
        stQuest.vecMessages.push_back("�̷��� �ϸ� ��ǥ���𿡴� �׵��� �����ص� ������ PPT�� �� �쿩���⸸ �ϸ� �ȴ�!!!");
        stQuest.vecMessages.push_back("�׸���.. ������ ���°͵� �ſ� �߿��ѵ�, �� ������Ʈ�� �ϴ� ���ȿ�");
        stQuest.vecMessages.push_back("�ش� ������Ʈ�� BoB �ܺο����� Ȱ���� �߰������� �ϸ� ���� ����!! ������� ���̶����... ���");
        stQuest.vecMessages.push_back("�� ������Ʈ�� ������ �غ��� �ٶ���!@");
        stQuest.vecMessages.push_back("���� Tip�� ���� �����°Ŵϱ� �� ������ ž�� ������ �ٷ�!");
        stQuest.ClearCondition = ST_FILTER(132, 0x0FFF);
        vecQuest.push_back(stQuest);
    }

    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 159;
        stQuest.StartCondition = ST_FILTER(132, 0x07FF, 0x0FFF);
        stQuest.vecMessages.push_back("��¥...������� �Գ�... OoO");
        stQuest.vecMessages.push_back("�� ���� ������ ���̱���?");
        stQuest.vecMessages.push_back("Ī���̾䤾��");
        stQuest.vecMessages.push_back("�̰� ������ �غ��°� ���� �����̰ŵ�....");
        stQuest.vecMessages.push_back("�Ƹ� ������� �»���� �� �ȵɲ��䤻������");
        stQuest.vecMessages.push_back("���� ���������... ���� ������ �ְڴ�...");
        stQuest.vecMessages.push_back("�� �޼����� ���� ������ ó������ [��ȣ]������ ������� ġŲ ����Ƽ���� �ְڴ�..����");
        stQuest.vecMessages.push_back("ġŲ �����鼭 �̾߱⸦ ���� �غ��� ���� �� ����!!");
        stQuest.vecMessages.push_back("��ȣ��...");
        stQuest.vecMessages.push_back("��ȣ...��.....");
        stQuest.vecMessages.push_back("�ФФФФФФб�Ծ���ФФФФФФФ�");
        stQuest.vecMessages.push_back("(���ڽ��� ������ ��¥;;;");
        stQuest.vecMessages.push_back("�̰� �и��� ���� ������ ����״µ�,,,");
        stQuest.vecMessages.push_back("�и� 27�� ��򰡿� �ִµ�... ������� ã���ֶ�!!!");
        stQuest.ClearCondition = ST_FILTER(132, 0x1FFF);
        vecQuest.push_back(stQuest);
    }

    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 280;
        stQuest.StartCondition = ST_FILTER(132, 0x0FFF, 0x1FFF);
        stQuest.vecMessages.push_back("(�̰ǰ�...?");
        stQuest.vecMessages.push_back("[���� ����]�� ȹ���߽��ϴ�.");
        stQuest.vecMessages.push_back("(�о��.)");
        stQuest.vecMessages.push_back("<��ȣ : â�� ¯¯�Ǵ�, ġŲ������ �Խ��ϴ�.>");
        stQuest.vecMessages.push_back("<�� ��ȣ�� BoB10�� ������ǰ����Ʈ�� ��â������ ������ ������ 1���� ġŲ�� ���� �� �ִ�!!>");
        stQuest.vecMessages.push_back("(���� ��¥ �ٱ�...?)");
        stQuest.vecMessages.push_back("(�Ӵ¼� ġ�� �����غ���)");
        stQuest.vecMessages.push_back("(�ٵ� ����ó�� ���µ�...?)");
        stQuest.vecMessages.push_back("(���̽����� ��������");
        stQuest.ClearCondition = ST_FILTER(132, 0x3FFF);
        vecQuest.push_back(stQuest);
    }

    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 159;
        stQuest.StartCondition = ST_FILTER(132, 0x3FFF, 0x7FFFF);
        stQuest.vecMessages.push_back("ġŲ�� �� �޾Ҵ�?����");
        stQuest.vecMessages.push_back("��ȣ�� ��Ծ���? <��ȣ : â�� ¯¯�Ǵ�, ġŲ ������ �Խ��ϴ�.>");
        stQuest.ClearCondition = ST_FILTER(132, 0xFFFF);
        vecQuest.push_back(stQuest);
    }
}