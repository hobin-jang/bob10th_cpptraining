#include "pch.h"
#include "QuestInfo.h"
#include "MiniGame.h"

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
    npc.x = 6;
    npc.y = 11;
    npc.z = 21;
    npc.nNpcID = 153;
    npc.strTrack = "������������Ʈ��";
    npc.strName = "ä����";
    npc.nAge = 25;
    npc.strMBTI = "INFP�̰� O���̿���";
    npc.cPatch = 'E';
    npc.strMessage = "���װ� �ǰ� ���� ������\n" //ĳ���� �Ұ� �� NPC ��
        "������ ���󰡾� ��.\n"
        "������� ����� ���� ���İ�?\n"
        "�׷��� ���׾�..";

    npc.vecBigImage.push_back("                     -!**!:;;.                    ");
    npc.vecBigImage.push_back("                  .;$######$##=!                  ");
    npc.vecBigImage.push_back("                 !*=$###@#=$$###=.                ");
    npc.vecBigImage.push_back("                ==!!=#####*$######.               ");
    npc.vecBigImage.push_back("               $$$**=##@##*#$###@@$               ");
    npc.vecBigImage.push_back("              @@###*=$#@#$;$$#@@####              ");
    npc.vecBigImage.push_back("             ##@@#$=$$#@#*~*########=             ");
    npc.vecBigImage.push_back("             @##@@##=$$#=!-:*$$######             ");
    npc.vecBigImage.push_back("            @@@@@@$##=;--,.,-;$######             ");
    npc.vecBigImage.push_back("            @@@@@##*-.     ..,~=#@####            ");
    npc.vecBigImage.push_back("            @@@@##:.       . ,-:*$##@@            ");
    npc.vecBigImage.push_back("           -@@@#$~..       ...,-:*###@            ");
    npc.vecBigImage.push_back("           #@@@$-..       ....,,-:=##@            ");
    npc.vecBigImage.push_back("           $@@#~.       .......,,~;##@-           ");
    npc.vecBigImage.push_back("           #@@=,.,,..........,,--~~$##$           ");
    npc.vecBigImage.push_back("           $@@~.-~~:;;,....,~::::;~;@@$           ");
    npc.vecBigImage.push_back("           $@#,......--...,~~-,,-~~~@#$           ");
    npc.vecBigImage.push_back("            ##,.,,~;~,,...,,,~!:~~~~##!           ");
    npc.vecBigImage.push_back("           ~#$..,::==:,. .,,;#;;!~-~$#-           ");
    npc.vecBigImage.push_back("           -,:.. ..,,,..  ,.,,---,-~*:;           ");
    npc.vecBigImage.push_back("           -,-.   .....   ...,,,,,,~!:$           ");
    npc.vecBigImage.push_back("            ..,.          ........,~!;=           ");
    npc.vecBigImage.push_back("            ; -.          ..   ..,-~:**           ");
    npc.vecBigImage.push_back("           .=,-,.     .   .,.  ..,-:;#*           ");
    npc.vecBigImage.push_back("            =;-,..   ..   .,. ..,-~:=#=           ");
    npc.vecBigImage.push_back("            $$*-,...  .~,,~-,..,--~#@#~           ");
    npc.vecBigImage.push_back("            $$#-,,..   ,-~~-,..,--~#@#;           ");
    npc.vecBigImage.push_back("            $##~,,,...   .,,,,,--~:@@#            ");
    npc.vecBigImage.push_back("            ####-,,,,-....,---,--~$@@#,           ");
    npc.vecBigImage.push_back("            #@@#:,,,-~,,----~~---~@@@#!           ");
    npc.vecBigImage.push_back("            ##@#$~,,,.,...,-----~#@@@#~           ");
    npc.vecBigImage.push_back("           .##@#$$-,...,-~~----~=@@@@#*           ");
    npc.vecBigImage.push_back("           .#@@@#$:~,... ..,,-~!@@@@@#:           ");
    npc.vecBigImage.push_back("           ~#@@@@$-;:,....,,-~~*@@@@@#$           ");
    npc.vecBigImage.push_back("           *#@@@@$,-:;~~----~~~=@@@@@#$.          ");
    npc.vecBigImage.push_back("           *#@@@@$,,-:;;:~~~~~~$@@@@##*!          ");
    npc.vecBigImage.push_back("          ,*#@@@@$,.,-~::~~~~~~$@@#@@*.           ");
    npc.vecBigImage.push_back("          ,~#$###$,..,-~~~~~~~~=@@@@@#~.          ");
    npc.vecBigImage.push_back("          .*,*##@$,...,-~~-~-~~!#@#@@@#:          ");
    npc.vecBigImage.push_back("           .,#$#@*.....,----~~~~####@@@#.         ");
    npc.vecBigImage.push_back("     ...=$#######.......,,-----~=###@###$#=..     ");
    npc.vecBigImage.push_back("   ..*##########*........,,----~;####@@@@######!, ");
    npc.vecBigImage.push_back(" .!$######@####@:..    ...,,,,,--=##@#@@@@@######*");
    npc.vecBigImage.push_back(" $$#######@@@@@##=-        ....,,*@@#@@@@#########");
    npc.vecBigImage.push_back("!$########@@@@#@###$~,        -:#@#@@@@@@#########");
    npc.vecBigImage.push_back("###########@@@#########$:~~:$####@@@@@@@@#########");
    npc.vecBigImage.push_back("###$#######@@@##############@######@@@@@@#########");
    npc.vecBigImage.push_back("###########@@#############@#########@@@@########@@");
    npc.vecBigImage.push_back("#############@############@######@@@#@@##########@");
    npc.vecBigImage.push_back("@###########@##@#####@#####@####@#############@##@");

    npc.vecSmallImage.push_back("         .:$#$=~         ");
    npc.vecSmallImage.push_back("        ~=#@#$##:        ");
    npc.vecSmallImage.push_back("       ~$==#==##@:       ");
    npc.vecSmallImage.push_back("      -@@$=#**$###-      ");
    npc.vecSmallImage.push_back("      :@@$**:-;$##:      ");
    npc.vecSmallImage.push_back("     ,@@$;.   ,:=##,     ");
    npc.vecSmallImage.push_back("     ,@$:    ..,:$@,     ");
    npc.vecSmallImage.push_back("     ,#;,,,..,--~*#,     ");
    npc.vecSmallImage.push_back("     ,=-~;:,.-::~:$,     ");
    npc.vecSmallImage.push_back("     .;.,--..,-~~~!.     ");
    npc.vecSmallImage.push_back("      ..  ......,-~.     ");
    npc.vecSmallImage.push_back("     .~,.    ...,~!.     ");
    npc.vecSmallImage.push_back("     ,=;.  ..,..,!#,     ");
    npc.vecSmallImage.push_back("     ,#=,. .,,,,-=#,     ");
    npc.vecSmallImage.push_back("     ,#=-,,-----~=#,     ");
    npc.vecSmallImage.push_back("     ,##;-,-~~--!##,     ");
    npc.vecSmallImage.push_back("     ,#@=~-.,,-!#@@-     ");
    npc.vecSmallImage.push_back("     ,#@=-~~~-~=#@#!.    ");
    npc.vecSmallImage.push_back("     ;##*,-~~~~*#@#*.    ");
    npc.vecSmallImage.push_back("     ,;#*..,--~;$@##.    ");
    npc.vecSmallImage.push_back("    .=$#*...,--~=@##$==  ");
    npc.vecSmallImage.push_back("  =$$@@#*   ..,,:$#@@##$=");
    npc.vecSmallImage.push_back("$$###@@##$$:  ;##@@@#####");
    npc.vecSmallImage.push_back("#$$####@########@@@@#####");
    npc.vecSmallImage.push_back("@########@###@@##@@######");

    npc.strContents1 = "���ۼ�"; //ĳ���� ���۸�
    npc.strContents2 = "���ۼ�"; //1�ܰ� ���
    npc.strContents3 = "���ۼ�"; //2�ܰ� ���
    npc.strContents4 = "���ۼ�"; //3�ܰ� ���
    vecNPC.push_back(npc);

}

void CQuestInfo::QueryQuestObject(std::vector<ST_QUEST_OBJECT>& vecQuestObject)
{
    //����
    {
        ST_QUEST_OBJECT stObject;
        stObject.nQuestObjectId = 283;
        stObject.strName = "��ٶ��1";
        stObject.cPatch = 'I';	// ȭ�鿡 �������� �ʰ� ���������� �ʰ� �Ϸ��� 0�� ������ ��
        stObject.x = 4;
        stObject.y = 23;
        stObject.z = 20;
        stObject.reserved = 0;
        vecQuestObject.push_back(stObject);
    }

    //����
    {
        ST_QUEST_OBJECT stObject;
        stObject.nQuestObjectId = 284;
        stObject.strName = "��ٶ��2";
        stObject.cPatch = 'I';	// ȭ�鿡 �������� �ʰ� ���������� �ʰ� �Ϸ��� 0�� ������ ��
        stObject.x = 3;
        stObject.y = 23;
        stObject.z = 20;
        stObject.reserved = 0;
        vecQuestObject.push_back(stObject);
    }
}

void CQuestInfo::QueryQuest(std::vector<ST_QUEST_DATA>& vecQuest)
{/*
    //NPC : 21��, �������
    //�繰 : 20��, ��ٶ��1, ��ٶ��2

    //�������
    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 153;
        stQuest.StartCondition = ST_FILTER(153, 0x0000, 0x0001);
        stQuest.vecMessages.push_back("���̰� ���̰� �㸮��, ��� ���︸�� �� ����..?");
        stQuest.vecMessages.push_back("���? �ڳ״� ������?");
        stQuest.vecMessages.push_back("�ƾ� �̹��� ���� �������̱���");
        stQuest.vecMessages.push_back("���� 10���ϼ�, �̰� �� �ݰ�����");
        stQuest.vecMessages.push_back("�̰͵� �ο��ε� �� Ư���� �ڳ׿��� BoB ���Ϳ��� ���� �������� ����� �˷�����");
        stQuest.vecMessages.push_back("�ڳ�, BoB ���� 27���� ���ô°�?");
        stQuest.vecMessages.push_back("�׷� 4�������� ��� �ִ����� �˰ڱ�");
        stQuest.vecMessages.push_back("�� 4�����忡�� ����� ����...");
        stQuest.vecMessages.push_back("�� �� ����غ���");
        stQuest.vecMessages.push_back("������ ���� ���� �ֺ��� ���캸�� ����.. Ź��.. å����� ���ϰɼ�");
        stQuest.vecMessages.push_back("�ű⼭ �ü��� �� �������� ���󰡺���...");
        stQuest.vecMessages.push_back("....");
        stQuest.vecMessages.push_back("......");
        stQuest.vecMessages.push_back("�� �ٸ� ���� �ִٳ�...!");
        stQuest.vecMessages.push_back("�� �� �ȿ���...!.!.!.!.!");
        stQuest.vecMessages.push_back(".....");
        stQuest.vecMessages.push_back(".......");
        stQuest.vecMessages.push_back("��ٶ�ٰ� �ִٳ�");
        stQuest.vecMessages.push_back("��ٶ�� �� ������ �ְڳ�? ����");
        stQuest.vecMessages.push_back("�� ��, BoB ���Ͱ� ���Ӽ����� �Űܿ��鼭 ��ġ�� �� �޶����ٳ�");
        stQuest.vecMessages.push_back("20���� �����Գ�, �װ��� 4�������� �����Ծ�");
        stQuest.ClearCondition = ST_FILTER(153, 0x0003);
        vecQuest.push_back(stQuest);
    }

    //���峭 ��ٶ��
    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 283;
        stQuest.StartCondition = ST_FILTER(153, 0x0001, 0x0003);
        stQuest.vecMessages.push_back("��ٶ�ٸ� �߰��Ͽ���.");
        stQuest.vecMessages.push_back("�� ����������.");
        stQuest.vecMessages.push_back("[��ٶ��1]�� ȹ���߽��ϴ�.");
        stQuest.vecMessages.push_back("�ٽ� ������ֿ��Է� ���ư���.");
        stQuest.ClearCondition = ST_FILTER(153, 0x0007);
        vecQuest.push_back(stQuest);
    }

    //�������
    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 153;
        stQuest.StartCondition = ST_FILTER(153, 0x0003, 0x0007);
        stQuest.vecMessages.push_back("��, ���ſ����ٵ� ����");
        stQuest.vecMessages.push_back("������ ������ (��ġ�� ��)");
        stQuest.vecMessages.push_back("���� �̰� �ƴ϶��");
        stQuest.vecMessages.push_back("���峭 ��ٶ���ڳ�?");
        stQuest.vecMessages.push_back("���⿣ ���� ���� ���ھ�!");
        stQuest.vecMessages.push_back("�ٸ��ɷ� �ٽ� ������ �ְڴɰ�?");
        stQuest.ClearCondition = ST_FILTER(153, 0x000F);
        vecQuest.push_back(stQuest);
    }

    //������ ��ٶ��
    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 284;
        stQuest.StartCondition = ST_FILTER(153, 0x0007, 0x000F);
        stQuest.vecMessages.push_back("��ٶ�ٸ� �߰��Ͽ���.");
        stQuest.vecMessages.push_back("�� ����������.");
        stQuest.vecMessages.push_back("[��ٶ��2]�� ȹ���߽��ϴ�.");
        stQuest.vecMessages.push_back("�ٽ� ������ֿ��Է� ���ư���.");
        stQuest.ClearCondition = ST_FILTER(153, 0x001F);
        vecQuest.push_back(stQuest);
    }

    //�������
    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 153;
        stQuest.StartCondition = ST_FILTER(153, 0x000F, 0x001F);
        stQuest.vecMessages.push_back("��, �����Ա���");
        stQuest.vecMessages.push_back("������ ������ (��ġ�� ��)");
        stQuest.vecMessages.push_back("��, �����ϱ���");
        stQuest.vecMessages.push_back("���� ���� �� �� �ְھ�!");
        stQuest.vecMessages.push_back("����� �� ������ �ϰڳ�");
        stQuest.vecMessages.push_back("�ڳ�, �Ʊ����� ���� ���� BoB ���Ϳ��� ���� �������� ����� ����ϳ�?");
        stQuest.vecMessages.push_back("�׷�, BoB ���� 27�� 4�����忡 ������ ���� �ִٴ� ���̾���");
        stQuest.vecMessages.push_back("�� ���� ����ϼ�");
        stQuest.vecMessages.push_back("���Ϳ��� ���� ���� ���� ����ٸ� ���� ���丵���� ������");
        stQuest.vecMessages.push_back("��ٶ�ٰ� �Ⱥ��δٰ�? Ȥ�� �����ϴٰ�?");
        stQuest.vecMessages.push_back("�׷� 4������ ���� ���� ã�ư���");
        stQuest.vecMessages.push_back("�ڳװ� ���ϴ� ���� �������̿�");
        stQuest.vecMessages.push_back("���峭�� �����ϰ�, �� �ִ� ��Ʈ�� ���Գ�");
        stQuest.vecMessages.push_back("������ �ΰ� ���̿�");
        stQuest.vecMessages.push_back("���� BoB ��Ȱ �����ϰڳ�");
        stQuest.vecMessages.push_back("�ǰ� �� ì��� �ʵ忡�� ����!");
        stQuest.ClearCondition = ST_FILTER(153, 0xFFFF);
        vecQuest.push_back(stQuest);
    }

    //�̴ϰ���
    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 153;
        stQuest.StartCondition = ST_FILTER(153, 0x001F, 0xFFFF);
        stQuest.vecMessages.push_back("�̴ϰ���~ ����Ʈ ����~");
        stQuest.pClearGame = new CMiniGame();
        vecQuest.push_back(stQuest);
    }*/
}