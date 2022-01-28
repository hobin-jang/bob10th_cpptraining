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
    npc.vecBigImage.push_back("@@@@@@@@                                           @@@@@@@@@");
    npc.vecBigImage.push_back("@@@@@@@                                             @@@@@@@@");
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
    npc.vecBigImage.push_back("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");

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

    vecNPC.push_back(npc);
}


void CQuestInfo::QueryQuest(std::vector<ST_QUEST_DATA*>& vecQuest)
{
}
