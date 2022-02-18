#include "pch.h"
#include "QuestInfo.h"

CQuestInfo g_QuestInfo;

CQuestInfo::CQuestInfo(void)
{
    ExportAPIEntry(this);
}

CQuestInfo::~CQuestInfo(void)
{
}

//�� ĳ�� ����
void CQuestInfo::QueryNpcEx(std::vector<ST_QUEST_NPC_DATA>& vecNPC)
{
    {
        ST_QUEST_NPC_DATA npc;
        npc.nNpcID = 132;
        npc.strTrack = "������ǰ����";
        npc.strName = "BABY ��â��";
        //npc.x = 12;
        //npc.y = 9;
        //npc.z = 7;
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
        npc.vecSmallImage.push_back("@@@@@@@@@@@@@@@@@@@@@@@@@");

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
    
}

//����Ʈ �繰
void CQuestInfo::QueryQuestObject(std::vector<ST_QUEST_OBJECT>& vecQuestObject)
{
    {
        ST_QUEST_OBJECT stObject;
        stObject.nQuestObjectId = 157;
        stObject.strName = "û�ҳ� â��";
        stObject.cPatch = 'L';
        stObject.x = 5;
        stObject.y = 5;
        stObject.z = 17;
        stObject.reserved = 0;
        vecQuestObject.push_back(stObject);
    }

    {
        ST_QUEST_OBJECT stObject;
        stObject.nQuestObjectId = 156;
        stObject.strName = "�Ʊ� â��";
        stObject.cPatch = 'L';
        stObject.x = 7;
        stObject.y = 20;
        stObject.z = 7;
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
        stObject.cPatch = '+';
        stObject.x = 10;
        stObject.y = 24;
        stObject.z = 7;
        stObject.reserved = 0;
        vecQuestObject.push_back(stObject);
    }

    {
        ST_QUEST_OBJECT stObject;
        stObject.nQuestObjectId = 279;
        stObject.strName = "������ ��� 2";
        stObject.cPatch = '+';
        stObject.x = 21;
        stObject.y = 16;
        stObject.z = 15;
        stObject.reserved = 0;
        vecQuestObject.push_back(stObject);
    }

    {
        ST_QUEST_OBJECT stObject;
        stObject.nQuestObjectId = 280;
        stObject.strName = "���� ����";
        stObject.cPatch = '+';
        stObject.x = 6;
        stObject.y = 8;
        stObject.z = 27;
        stObject.reserved = 0;
        vecQuestObject.push_back(stObject);
    }
}

//����Ʈ ������
void CQuestInfo::QueryQuestItem(std::vector<ST_QUEST_ITEM_DATA>& vecQuestItem)
{
    {
        ST_QUEST_ITEM_DATA item;
        item.btId = 131;
        item.strName = "������ ��� 1";
        item.strDesc = "�������� �Ҿ���� ����̴�. ����� �����ڿ��� ������ ����.";
        item.nHP = 0;
        item.nMP = 0;
        vecQuestItem.push_back(item);
    }
    {
        ST_QUEST_ITEM_DATA item;
        item.btId = 132;
        item.strName = "������ ��� 2";
        item.strDesc = "�������� �Ҿ���� ����̴�. ����� �����ڿ��� ������ ����.";
        item.nHP = 0;
        item.nMP = 0;
        vecQuestItem.push_back(item);
    }
    {
        ST_QUEST_ITEM_DATA item;
        item.btId = 133;
        item.strName = "���� ����";
        item.strDesc = "<�ʹ� �����̶� �˾ƺ� �� ����..>";
        item.nHP = 0;
        item.nMP = 0;
        vecQuestItem.push_back(item);
    }
}

//����Ʈ ����
void CQuestInfo::QueryQuestMonster(std::vector<ST_QUEST_MONSTER_DATA>& vecQuestMonster)
{
    {
        ST_QUEST_MONSTER_DATA monster;
        monster.dwMonsterId = 20006;
        monster.strName = "ž�� �����ϴ� ��";
        monster.btLevel = 10;
        monster.nHP = 50;
        monster.btAttack = 10;
        monster.btDex = 3;
        monster.btVulnerability = JOB_TYPE_DEVELOPER;
        monster.nRewardMoney = 300;
        monster.nRewardExp = 100;
        monster.vecRewardItems.push_back(131);
        vecQuestMonster.push_back(monster);
    }

    {
        ST_QUEST_MONSTER_DATA monster;
        monster.dwMonsterId = 20007;
        monster.strName = "ž�� ����";
        monster.btLevel = 45;
        monster.nHP = 500;
        monster.btAttack = 40;
        monster.btDex = 5;
        monster.btVulnerability = JOB_TYPE_DEVELOPER;
        monster.nRewardMoney = 1000;
        monster.nRewardExp = 300;
        monster.vecRewardItems.push_back(132);
        vecQuestMonster.push_back(monster);
    }
}

//����Ʈ ����
void CQuestInfo::QueryQuest(std::vector<ST_QUEST_DATA>& vecQuest)
{
    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 156;
        stQuest.StartCondition = ST_FILTER(132, 0x0000, 0x0001);
        stQuest.vecMessages.push_back("����, �������� ��Ŀ�� �Ǳ����� �������� ������ �����غ��ڴ�!");
        stQuest.vecMessages.push_back("�켱, �������̶�� C++�� �⺻�Ҿ��̶�� �����ִ�");
        stQuest.vecMessages.push_back("��? ���̽��� ¯�̶��?");
        stQuest.vecMessages.push_back("�װ� ���� ŷ��������...");
        stQuest.vecMessages.push_back("�϶�´����! �����ϱ�Ⱦ�?");
        stQuest.vecMessages.push_back("����... C++�� ������ ������� ���ѹα� �ְ��ڴϱ�..");
        stQuest.vecMessages.push_back("������ ������ ��������� ����!");
        stQuest.ClearCondition = ST_FILTER(132, 0x0003);
        vecQuest.push_back(stQuest);
    }

    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 27;
        stQuest.StartCondition = ST_FILTER(132, 0x0001, 0x0003);
        stQuest.vecMessages.push_back("�ȳ��ϼ���! 11�⿩���� ȯ���մϴ�.");
        stQuest.vecMessages.push_back("C++ ����� �ǰ�ʹٱ���?");
        stQuest.vecMessages.push_back("�켱... �����а� �������� ���� �����ؾ��մϴ�...");
        stQuest.vecMessages.push_back("(�� �Ҹ���... �̻��Ѿ�����������?;;)");
        stQuest.vecMessages.push_back("�̻��� �Ҹ��� �鸮�ð�����...");
        stQuest.vecMessages.push_back("������ �����ϴ� ���� ������ ������ ġ�� �ɰ̴ϴ�..");
        stQuest.vecMessages.push_back("�ݵ��.. ��ǻ�Ͱ� ���峪�� ���� ��ŭ�� ��(F = ma)�� ����ؼ� ������ �ľ��ϸ�..");
        stQuest.vecMessages.push_back("������ ġ�� �ǰ��� ��� �������κ����ǡ�...");
        stQuest.vecMessages.push_back("(�� �̻��ѵ�.. ������, ��������)");
        stQuest.vecMessages.push_back("R.U.N");
        stQuest.ClearCondition = ST_FILTER(132, 0x0007);
        vecQuest.push_back(stQuest);
    }

    // 7F : �Ʊ� â��
    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 156;
        stQuest.StartCondition = ST_FILTER(132, 0x0003, 0x0007);
        stQuest.vecMessages.push_back("��?? ������ ������� �̻��� �Ҹ��� �ϽŴٰ�??");
        stQuest.vecMessages.push_back("���Ӱ��� �Ͻô��� ���� ����̳�����...");
        stQuest.vecMessages.push_back("\"�ڵ���\"�̶�� �����̾�");
        stQuest.vecMessages.push_back("����, ��Ƽ �ҹ��ϰ� ���� ������ ��ȭ�ϴ� ����,");
        stQuest.vecMessages.push_back("BoB ��Ȱ�� �ϴٺ��� ���� �����ϰ� �߻��ϰ� ����..");
        stQuest.vecMessages.push_back("��ư! ���� BoB��Ȱ�� �ϸ鼭 �̸� �˸� ���� ������ �غ��ص״ܴ㤾��");
        stQuest.vecMessages.push_back("ž�� �����ٺ��� ����ؼ� ���� ���� �� ��������!");
        stQuest.vecMessages.push_back("�׶����� ���� �����شٸ�, BoB Ȱ���� �ϸ鼭 �˰Ե� ������ �������ٲ�!!");
        stQuest.vecMessages.push_back("ù ��° ��!!");
        stQuest.vecMessages.push_back("..");
        stQuest.vecMessages.push_back("....");
        stQuest.vecMessages.push_back(";;;;;;;");
        stQuest.vecMessages.push_back("���...����� ���� �ʴ´�..");
        stQuest.vecMessages.push_back("�ƹ����� ���濡�� ��ٰ� [������ ���1]�� �기�Ű���Ф�");
        stQuest.vecMessages.push_back("�� �����ϴ��� �ٻڴϱ� �� ã���ֶ�!!");
        stQuest.vecMessages.push_back("������ ���� �������� �����Ŵ�!!");
        stQuest.ClearCondition = ST_FILTER(132, 0x000F);
        vecQuest.push_back(stQuest);

    }

    // [������ ���1] ã�ƿ���
    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 273;
        stQuest.StartCondition = ST_FILTER(132, 0x0007, 0x000F);
        stQuest.vecMessages.push_back("(�����ΰ� ��¦�δ�..)");
        stQuest.vecMessages.push_back("(Ȥ�� �Ҿ���� ����ΰ�...?");
        stQuest.vecMessages.push_back("(��...�㰡 ���Ƹ԰��ִµ�??)");
        stQuest.vecMessages.push_back("ž�� �����ϴ� �� : ��������(=�������� �װ�)");
        stQuest.vecMessages.push_back("�̾��ѵ�.. �װ� �� ����߰ڴ�");
        stQuest.ClearBattle.btMinPlayerCount = 1;
        stQuest.ClearBattle.vecMonster.push_back(20006);
        stQuest.ClearCondition = ST_FILTER(132, 0x001F);
        vecQuest.push_back(stQuest);
    }

    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 156;
        stQuest.StartCondition = ST_FILTER(132, 0x001F, 0x003F);
        stQuest.vecMessages.push_back("����! �ű��־���!! � ��!!");
        stQuest.vecMessages.push_back("[������ ���1]�� �Ҿ����ϴ�.");
        stQuest.vecMessages.push_back("��ƿ��..");
        stQuest.vecMessages.push_back("(����...���� �Դ°ſ���?! �㰡 �Դ��ǵ�.. ����������");
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
        stQuest.vecMessages.push_back("�� �̷��� �߳İ�??");
        stQuest.vecMessages.push_back("�������ϱ� �˷��ִ°Ŵ�..����");
        stQuest.vecMessages.push_back("�̹� �� ������ �������... ���� 17���� ���� ���ְڴ�..����");
        stQuest.ClearCondition = ST_FILTER(132, 0x007F);
        vecQuest.push_back(stQuest);
    }

    //16F : û�ҳ� â��
    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 157;
        stQuest.StartCondition = ST_FILTER(132, 0x003F, 0x007F);
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
        stQuest.ClearCondition = ST_FILTER(132, 0x00FF);
        vecQuest.push_back(stQuest);
    }

    // [������ ��� 2] ã�ƿ���
    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 279;
        stQuest.StartCondition = ST_FILTER(132, 0x007F, 0x00FF);
        stQuest.vecMessages.push_back("(�� ���ڱ���...)");
        stQuest.vecMessages.push_back("(��¦�Ÿ��°� �� �ִ°� ���� �����ΰ� ����)");
        stQuest.vecMessages.push_back("(���ڽ�..�󸶳� ȭ�������� �Ǳ��� �긱������ ���� �����žߤ�����)");
        stQuest.vecMessages.push_back("(����Ⱑ �°ǰ�...)");
        stQuest.vecMessages.push_back("ž�� ���� : ����, ����Ʈ�� �������� ����ü ��� ��ô°���?");
        stQuest.vecMessages.push_back("(���� �˷��ֱ� �ȴ�...)");
        stQuest.vecMessages.push_back("ž�� ���� : ����� ���ϳ�. �� �¾ƾ߰ڱ�");
        stQuest.ClearBattle.btMinPlayerCount = 1;
        stQuest.ClearBattle.vecMonster.push_back(20007);
        stQuest.ClearCondition = ST_FILTER(132, 0x01FF);
        vecQuest.push_back(stQuest);
    }

    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 157;
        stQuest.StartCondition = ST_FILTER(132, 0x01FF, 0x03FF);
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
        stQuest.ClearCondition = ST_FILTER(132, 0x07FF);
        vecQuest.push_back(stQuest);
    }

    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 159;
        stQuest.StartCondition = ST_FILTER(132, 0x03FF, 0x07FF);
        stQuest.vecMessages.push_back("��¥...������� �Գ�... OoO");
        stQuest.vecMessages.push_back("�� ���� ������ ���̱���?");
        stQuest.vecMessages.push_back("Ī���̾䤾��");
        stQuest.vecMessages.push_back("�̰� ������ �غ��°� ���� �����̰ŵ�....");
        stQuest.vecMessages.push_back("�Ƹ� ������� �»���� �� �ȵɲ��䤻������");
        stQuest.vecMessages.push_back("���� ���������... ���� ������ �ְڴ�...");
        stQuest.vecMessages.push_back("������ ó������ [��ȣ]������ ������� ġŲ ����Ƽ���� �ְڴ�..����");
        stQuest.vecMessages.push_back("ġŲ �����鼭 �̾߱⸦ ���� �غ��� ���� �� ����!!");
        stQuest.vecMessages.push_back("��ȣ��...");
        stQuest.vecMessages.push_back("��ȣ...��.....");
        stQuest.vecMessages.push_back("�ФФФФФФб�Ծ���ФФФФФФФ�");
        stQuest.vecMessages.push_back("(���ڽ��� ������ ��¥;;;");
        stQuest.vecMessages.push_back("�̰� �и��� ���� ������ ����״µ�,,,");
        stQuest.vecMessages.push_back("�и� 27�� ��򰡿� �ִµ�... ������� ã���ֶ�!!!");
        stQuest.ClearCondition = ST_FILTER(132, 0x0FFF);
        vecQuest.push_back(stQuest);
    }

    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 280;
        stQuest.StartCondition = ST_FILTER(132, 0x07FF, 0x0FFF);
        stQuest.vecMessages.push_back("(�̰ǰ�...?");
        stQuest.vecMessages.push_back("[���� ����]�� ȹ���߽��ϴ�.");
        stQuest.vecMessages.push_back("(�о��.)");
        stQuest.vecMessages.push_back("(��..�ʹ� �����̶� ������ �������� ����.)");
        stQuest.vecMessages.push_back("�ٽ� ���ư��� �ؼ��ش޶�� �غ���.");
        stQuest.ClearCondition = ST_FILTER(132, 0x1FFF);
        vecQuest.push_back(stQuest);
    }

    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 159;
        stQuest.StartCondition = ST_FILTER(132, 0x0FFF, 0x1FFF);
        stQuest.vecMessages.push_back("������ ã�ƿԱ���!!");
        stQuest.vecMessages.push_back("�� �ʹ� �����̶� �б� �����??���� �̾�");
        stQuest.vecMessages.push_back("�ҷ����״ϱ� �� �޾�����!!");
        stQuest.vecMessages.push_back("7JWU7Zi4IDog7LC97ZiEIOynseynseunqOuLmCwg7LmY7YKoIOuwm+ycvOufrCDsmZTsirXri4jri6QuDQrsubTsubTsmKTthqEgSUQgOiBqZmhnNDU2");
        stQuest.ClearCondition = ST_FILTER(132, 0x3FFF);
        vecQuest.push_back(stQuest);
    }
}