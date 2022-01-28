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
    npc.x = 2;
    npc.y = 12;
    npc.z = 2;
    npc.nNpcID = 137;
    npc.strTrack = "������������Ʈ��";
    npc.strName = "�̱���";
    npc.nAge = 23;
    npc.strMBTI = "INTJ.. MBTI��.. ��������̴� ������!";
    npc.cPatch = 'V';
    npc.strMessage = "������ ��ſ� �������̾�! �ʵ� �ų���??";
    
    npc.vecBigImage.push_back("                   .,;=*$$*!~,                    ");
    npc.vecBigImage.push_back("                 .!==$==$$$###=.                  ");
    npc.vecBigImage.push_back("                ===$$$##$$@$$##$*                 ");
    npc.vecBigImage.push_back("              ,*$$$$$###$########=;               ");
    npc.vecBigImage.push_back("             ~$$##$$###$$$$$####$#$:              ");
    npc.vecBigImage.push_back("            ~=#$###$$$$$#$$$$$##$$#$;             ");
    npc.vecBigImage.push_back("            $######$$$$$$#$$$$$$#$#$$;            ");
    npc.vecBigImage.push_back("           *######$#$##$$###$$$$#$$$$$            ");
    npc.vecBigImage.push_back("           =###########$$##$$$#$$$#$$$*           ");
    npc.vecBigImage.push_back("          .$#########$$$$#$$$$$=$$=$$$$           ");
    npc.vecBigImage.push_back("          .$######$$$==$$$$$$==$$===#=$           ");
    npc.vecBigImage.push_back("           #@##@##$==*$#$$$=====$$#$$=$           ");
    npc.vecBigImage.push_back("           $######=!!!==#=##$#######$$*           ");
    npc.vecBigImage.push_back("           *#####$=*!!!;=*!#$########$;           ");
    npc.vecBigImage.push_back("           .$$#$=!;;;!:-,:-;=$$=#$##$=            ");
    npc.vecBigImage.push_back("            =##=~,....,.  .,,,..~!*##:            ");
    npc.vecBigImage.push_back("           .,$$~,,,!$...        ..-$=.            ");
    npc.vecBigImage.push_back("           ..-$-,,--!,,.    ,=~-. .=,..           ");
    npc.vecBigImage.push_back("             .=,...    .          .*              ");
    npc.vecBigImage.push_back("           . .:,.                 .:              ");
    npc.vecBigImage.push_back("             .~,.                 .-              ");
    npc.vecBigImage.push_back("            ..~,.      .          ..              ");
    npc.vecBigImage.push_back("              ,-..    ..          -               ");
    npc.vecBigImage.push_back("              .~,.    .           ~               ");
    npc.vecBigImage.push_back("               .,..   .-,.,      .,               ");
    npc.vecBigImage.push_back("                ,,.              .                ");
    npc.vecBigImage.push_back("                ,,..             .                ");
    npc.vecBigImage.push_back("                ,,.......  ..    .                ");
    npc.vecBigImage.push_back("                 ,,..,,,.....   .                 ");
    npc.vecBigImage.push_back("                 ,,.....        .                 ");
    npc.vecBigImage.push_back("                  ,....        .                  ");
    npc.vecBigImage.push_back("                  ,,..        ..                  ");
    npc.vecBigImage.push_back("                  ,,,..      ...                  ");
    npc.vecBigImage.push_back("                  ,,,,,.......                    ");
    npc.vecBigImage.push_back("                  ...,,---,,.                     ");
    npc.vecBigImage.push_back("                  ....,,,,..    .                 ");
    npc.vecBigImage.push_back("                 .........                        ");
    npc.vecBigImage.push_back("                 .......                          ");
    npc.vecBigImage.push_back("                 ,..  .          .                ");
    npc.vecBigImage.push_back("              .*,....              =:             ");
    npc.vecBigImage.push_back("             *#,....               *##=           ");
    npc.vecBigImage.push_back("           ,$##-....               #####*-        ");
    npc.vecBigImage.push_back("         -*#####...               ;#######*,      ");
    npc.vecBigImage.push_back("       -######@#~..              ,##########=,    ");
    npc.vecBigImage.push_back("     -###########-              ,#############$   ");
    npc.vecBigImage.push_back("   .=############$~            :################= ");
    npc.vecBigImage.push_back("  ;################!-        ;=###################");
    npc.vecBigImage.push_back(":#####################*:~~;#######################");
    npc.vecBigImage.push_back("####################@#############################");
    npc.vecBigImage.push_back("##################################################");
    npc.vecBigImage.push_back("##################################################");
    npc.vecBigImage.push_back("##################################################");
    npc.vecBigImage.push_back("##################################################");
    npc.vecBigImage.push_back("##############################################@###");
    npc.vecBigImage.push_back("##################################################");
    npc.vecBigImage.push_back("###############################################@##");
    npc.vecBigImage.push_back("###############################################@##");
    npc.vecBigImage.push_back("##################################################");
    npc.vecBigImage.push_back("##################################################");
    npc.vecBigImage.push_back("##################################################");

    npc.vecSmallImage.push_back("#####@@@@@@@@#@@@########");
    npc.vecSmallImage.push_back("#####@@@@#@@@#@@@########");
    npc.vecSmallImage.push_back("####g######@##@##QQBQQ6QB");
    npc.vecSmallImage.push_back("###QH@@######BB$MehZMdMgQ");
    npc.vecSmallImage.push_back("##BBI8#########QQdM8OwBBQ");
    npc.vecSmallImage.push_back("BBQBEkD########QgWzmKB##8");
    npc.vecSmallImage.push_back("BQ$Q$PVyHOQQ80dqKVTOdQ##$");
    npc.vecSmallImage.push_back("Qg$0KY!:Y}}}Lxr\vr}XT3#BR");
    npc.vecSmallImage.push_back("QDRDM,  _v)?<   :!~r*VBzr");
    npc.vecSmallImage.push_back("Q9O9V =r-yxT`  ` !'<>yBzv");
    npc.vecSmallImage.push_back("gRdO( zy:ZM)  ;T :_~~mj=?");
    npc.vecSmallImage.push_back("0EOZ) O*|MM;  XH !_==Z^!r");
    npc.vecSmallImage.push_back("EEM5o` _Pkk!  y)':-==y!!^");
    npc.vecSmallImage.push_back("OOGGGakZGDl*    *_-!!^!!=");
    npc.vecSmallImage.push_back("ddPIxk3gdQQ)<-:r<-.:!>!!L");
    npc.vecSmallImage.push_back("ZZG(^(TuqDRx^=!::-.::~!xo");
    npc.vecSmallImage.push_back("MGHr;~adL\|r**!!!-':!iuuc");
    npc.vecSmallImage.push_back("G3Ks)~YUixvvr!,,_``_*vTVc");
    npc.vecSmallImage.push_back("PKhoUl*cxvx<:,_.```.,=rxV");
    npc.vecSmallImage.push_back("amhjyoiv}(^?^=_`     `,*x");
    npc.vecSmallImage.push_back("KsIzwddurrxvr_`       `,|");
    npc.vecSmallImage.push_back("mUXzmOQQMYvr:`         `~");
    npc.vecSmallImage.push_back("mUIzbdQQWxr^-           ,");
    npc.vecSmallImage.push_back("hjwkMG$Oex*~.           -");
    npc.vecSmallImage.push_back("r<!:,__-.```             ");// ������ ����.
    
    // ��Ʈ�� �޽���
    npc.strContents1 =
        "��!...\n"
        "��...\n"
        "....\n"
        "��� Ŀ�Ǹ� ��������..\n"
        "������ ��...\n"
        "...\n"
        "......\n"
        "�ƴ� ������...\n"
        "�� ���콺..\n"
        "�� �ٵ�..\n"
        "���� �����??\n"
        "BoB.. ����..?\n"
        "???\n"
        ;
    
    // �������� �� ������ �޽���
    npc.strContents2 = 
        "[����] �߱���\n"
        "����...\n"
        ;	

    // 2�ܰ� ������Ʈ�� ��ģ �� ������ �޽���
    npc.strContents3 =
        "��ȣ..\n"
        "������Ʈ�� ���������� ���Ʊ���!!\n"
        "���� ���Ҿ�!!\n"
        "�׵��� ������ ������Ŷ�� ������\n"
        "������� �ٽ� ȭ�����غ���!!\n"
        ;	

    // ���� �� ������ �޽���
    npc.strContents4 =
        "5252!!\n"
        "��¥�� �����Ѱųı�!!\n"
        "�ڼ�!!\n"
        "���� �Ǹ���\n"
        "���� ���Ҵ�!!\n"
        "���� �����̴ϱ� �� �ʽ� ��������!!\n"
        ;	

    vecNPC.push_back(npc);
}


void CQuestInfo::QueryQuestObject(std::vector<ST_QUEST_OBJECT>& vecQuestObject)
{
    {
        ST_QUEST_OBJECT stObject;
        stObject.nQuestObjectId = 267;
        stObject.strName = "����� ���콺�е�";
        stObject.cPatch = 0;	// ȭ�鿡 �������� �ʰ� ���������� �ʰ� �Ϸ��� 0�� ������ ��
        stObject.x = 3;
        stObject.y = 13;
        stObject.z = 3;
        stObject.reserved = 0;
        vecQuestObject.push_back(stObject);
    }
}



void CQuestInfo::QueryQuest(std::vector<ST_QUEST_DATA>& vecQuest)
{
    // npc �̱���
    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 137;
        stQuest.StartCondition = ST_FILTER(137, 0x0000, 0x0001);
        stQuest.vecMessages.push_back("�ƾ�..");
        stQuest.vecMessages.push_back("�Ʊ� ���ϰ� �����ٰ� ����");
        stQuest.vecMessages.push_back("���콺�е带 ������� ����");
        stQuest.vecMessages.push_back("�����.. 3���̾���..?");
        stQuest.vecMessages.push_back("�� �̾��ѵ� �� ���콺�е��� �������� �� �ִ�??");
        stQuest.ClearCondition = ST_FILTER(137, 0x0003);
        vecQuest.push_back(stQuest);
    }

    // ����� ���콺�е�
    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 267;
        stQuest.StartCondition = ST_FILTER(137, 0x0001, 0x0003);
        stQuest.vecMessages.push_back("�� ���콺�е尡 �̰ǰ�");
        stQuest.vecMessages.push_back("�������� ���� Ŀ�Ǿ���� �ֳ�");
        stQuest.vecMessages.push_back("�ٵ� �� ���� �� �ɺθ��� �ϰ� ����..?");
        stQuest.vecMessages.push_back(".....");
        stQuest.vecMessages.push_back("�𸣰ڰ�! �ϴ� ����������");
        stQuest.ClearCondition = ST_FILTER(137, 0x0007);
        vecQuest.push_back(stQuest);
    }

    // npc �̱���
    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 137;
        stQuest.StartCondition = ST_FILTER(137, 0x0003, 0x0007);
        stQuest.vecMessages.push_back("����..!");
        stQuest.vecMessages.push_back("���� ���������!");
        stQuest.vecMessages.push_back("���� ^^");
        stQuest.vecMessages.push_back("�� ���� ���� ���̱���!");
        stQuest.vecMessages.push_back("�� ..! ���� �� ���ڴ�");
        stQuest.vecMessages.push_back("�� ���߿��� ���� �� ������...");
        stQuest.vecMessages.push_back("(Ȳ���� �޷�����)");
        stQuest.vecMessages.push_back("...?");
        stQuest.ClearCondition = ST_FILTER(137, 0x000F);
        vecQuest.push_back(stQuest);
    }

}