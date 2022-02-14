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

        npc.x = 12;
        npc.y = 3;
        npc.z = 12;
        npc.nNpcID = 136;
        npc.strTrack = "������ǰ����";
        npc.strName = "����ȭ";
        npc.nAge = 24;
        npc.strMBTI = "ISFJ";
        npc.cPatch = 'K';
        npc.strMessage = "���õ� ȭ����!";

        npc.vecBigImage.resize(60);
        npc.vecBigImage[0] = "                        ,                         ";
        npc.vecBigImage[1] = "                    ~;!;*!!:.-                    ";
        npc.vecBigImage[2] = "                   :=######$*=*~                  ";
        npc.vecBigImage[3] = "                 -=$##$$$$$####=*,                ";
        npc.vecBigImage[4] = "                -$##$#$$$##$#$$##$,               ";
        npc.vecBigImage[5] = "               ,$#$$$$$#$$$$##$$##$.              ";
        npc.vecBigImage[6] = "              ,##$$$$#$$$$$$##$$$###.             ";
        npc.vecBigImage[7] = "             .##$$$$$$$$$$$$$$$$$$##=             ";
        npc.vecBigImage[8] = "             *#$$$$$$$===;;*==$$$$###,            ";
        npc.vecBigImage[9] = "            -##$$$$$=*,      -*=$$$$##            ";
        npc.vecBigImage[10] = "            ##$$$$$=~          ~=$$$##-           ";
        npc.vecBigImage[11] = "           .##$$$$=~            !$$###=           ";
        npc.vecBigImage[12] = "           ;#$$$$#!.            ~=$$##$           ";
        npc.vecBigImage[13] = "           $#$$$$*-              !$$##$           ";
        npc.vecBigImage[14] = "           $#$$$$!-:;;-     ,;;:,-=##$#;          ";
        npc.vecBigImage[15] = "          :$#$$$$=***=*.   .*==**!$####=          ";
        npc.vecBigImage[16] = "          =#$$$$*,.....     .....,*$###=          ";
        npc.vecBigImage[17] = "          =#$$$$!.:$~         ~=: ~=$$#=          ";
        npc.vecBigImage[18] = "          =#$$$=:.   ~.     -!....-=$##=          ";
        npc.vecBigImage[19] = "          =#$$$=-~!*:,-.   .;,:*!--=###$~         ";
        npc.vecBigImage[20] = "          =#$$$=:::!**,! :.,-***-::$####*         ";
        npc.vecBigImage[21] = "         -$#$$$*,.~;;-,~  .=~***~,,=#$##*         ";
        npc.vecBigImage[22] = "         !##$$$*..-;;,.:. .*,~:;-.,*#$##*         ";
        npc.vecBigImage[23] = "         *##$$$*.      :  .:      .=#$##*         ";
        npc.vecBigImage[24] = "         *#$$$$;-     ~.   .-     -=#$##*         ";
        npc.vecBigImage[25] = "         *#$$$=~:~   -~.   ,-.   ~~*$###*         ";
        npc.vecBigImage[26] = "         *#$$$=-,,   .     ...   --!$###*         ";
        npc.vecBigImage[27] = "         *#$$$=-.      ,. .,     .,;$###*         ";
        npc.vecBigImage[28] = "         *#$$$$*.                .-*$#$#*         ";
        npc.vecBigImage[29] = "         *#$$$$=,                ,:=#$$#=-        ";
        npc.vecBigImage[30] = "         *#$$$$$*.    ... .,,   .-=$#$$#$:        ";
        npc.vecBigImage[31] = "         *#$$$$#=:.             ,*$$#$$##*        ";
        npc.vecBigImage[32] = "         *#$$$$$$*~.    ....   ,;$$$#$$##!        ";
        npc.vecBigImage[33] = "        -=#$$$$$$$*:,        .-!$$$$#$$##!        ";
        npc.vecBigImage[34] = "        ;$#$$$$$$$$$!-.     ,:*$$$$$$$#$#!        ";
        npc.vecBigImage[35] = "        !$$$$$$#$$$$$*-....,:$$$$$$$$$#$#!        ";
        npc.vecBigImage[36] = "        !#$$$$$#$$$$$=-.,,-~;$$$$$$$$$$$#!        ";
        npc.vecBigImage[37] = "        !#$$$$$#$##$$*,  ..-;$$$$$$$#$$##*        ";
        npc.vecBigImage[38] = "        !#$$$$$#$$#$$;,    .:$$$$$$$#$$$#$~       ";
        npc.vecBigImage[39] = "       -=#$$$$$$$$##$:.    .-!$$$$$$#$$$##;       ";
        npc.vecBigImage[40] = "       ;$$$$$$$$$$$*~,.    .,-!$$$$$#$$$$#;       ";
        npc.vecBigImage[41] = "       ;#$$$$$$$$*~,,..    .,,-~:=$$##$$$#;       ";
        npc.vecBigImage[42] = "       ;#$$$$$#=~~---,,,.,.,,-~~~-~=$#$###!.      ";
        npc.vecBigImage[43] = "       ;#$$$$$$*-,,,,--,,-,,--,,,,=$$$$$###:      ";
        npc.vecBigImage[44] = "      .!#$$$$$$*-,,,,,,,,,...,,,,!##$$$$###:      ";
        npc.vecBigImage[45] = "      ~$#$$$$$$*-,,,,,,,,,,,,,,,-=##$$$$$##:      ";
        npc.vecBigImage[46] = "      :##$$$$$$*-,,,,,,,,,,,,,,,!#$*$$$$$##:      ";
        npc.vecBigImage[47] = "      :##$$$$$$*-,,,,,,,,.,,,.-:=#=~=$$$$##:      ";
        npc.vecBigImage[48] = "      :$#$$$$$$*-,,,,.....,,.-*###:;$$$$$##:      ";
        npc.vecBigImage[49] = "      :##$$$$$$=;.,,........-*####*=$$$$$##;      ";
        npc.vecBigImage[50] = "      ~$$$$$$$$$!.........,!!#$$###$$$$$$##:      ";
        npc.vecBigImage[51] = "      ,*$$$$$$$$*-........==$$*=###$$$$$###:      ";
        npc.vecBigImage[52] = "      .!#$$$$$$$$;.......$$$$**!=$$$$$$#$##:      ";
        npc.vecBigImage[53] = "       !$#$$$$$$$;.. ...$$$*#$=!=#$$$$$$##*,      ";
        npc.vecBigImage[54] = "       .*#$$$$$$$;.. ..$$#*###$$#:*$$$$$##!-,     ";
        npc.vecBigImage[55] = "     .,.,*#$$$$*.... .=$#=#######~~=$#$#$*.-,     ";
        npc.vecBigImage[56] = "     .,...*$====;.. .=$$$#######!,.*====~,.,.     ";
        npc.vecBigImage[57] = "     .,....,.-.....,*$$=$#######:..,,,,....,.     ";
        npc.vecBigImage[58] = "     .......,.....,*#$*$#$#####$~..,,,,.,..,.     ";
        npc.vecBigImage[59] = "       .  ..,,....,*#==$###$$###;...,,,,., .,.    ";

        npc.vecSmallImage.resize(25);
        npc.vecSmallImage[0] = "@@@@@@@-*...,@@@@@@@@@@@@";
        npc.vecSmallImage[1] = "@@@@@@....,,,,@@@@@@@@@@@";
        npc.vecSmallImage[2] = "@@@@@!,..,-.~-,@@@@@@@@@@";
        npc.vecSmallImage[3] = "@@@@@=,,,.;-!,-$@@@@@@@@@";
        npc.vecSmallImage[4] = "@@@@@~.,,,##:---@@@@@@@@@";
        npc.vecSmallImage[5] = "@@@@.~.,..~-,---@@@@@@@@@";
        npc.vecSmallImage[6] = "@@@@-,,~,,..----@@@@@@@@@";
        npc.vecSmallImage[7] = "@@@@@:~--------@@@@@@@@@@";
        npc.vecSmallImage[8] = "@@@@@,--------,*@@@@@@@@@";
        npc.vecSmallImage[9] = "@@@@@~:~----~-,--@@@@@@@@";
        npc.vecSmallImage[10] = "@@@,,.!,--~;.,-*:@@@@@@@@";
        npc.vecSmallImage[11] = "@@,..,...---..-~~-@@@@@@@";
        npc.vecSmallImage[12] = ",-...~.-..~,,,,:~-@@@@@@@";
        npc.vecSmallImage[13] = ",~-,,.....,#,,-=-;@@@@@@@";
        npc.vecSmallImage[14] = "@@~-#,....---,-~~-@@@@@@@";
        npc.vecSmallImage[15] = "@@@@@.~.,.,-----~;@@@@@@@";
        npc.vecSmallImage[16] = "@@@@@.,.-.*!,---:~@#,-,@@";
        npc.vecSmallImage[17] = "@@@@;*..~..,;-:;::$,,,--:";
        npc.vecSmallImage[18] = "@@@:,,..,.,--..~;#---;---";
        npc.vecSmallImage[19] = "@@@=..!;~:-;....$--------";
        npc.vecSmallImage[20] = "@@@#.,-;--~:....;---~---~";
        npc.vecSmallImage[21] = "@@@#,-----$~,..,----:~-@@";
        npc.vecSmallImage[22] = "@@@,--!-@@@@;,,--:-----@@";
        npc.vecSmallImage[23] = "@@@@~@@@@@@@-----@@@@@@@@";
        npc.vecSmallImage[24] = "@@@@@@@@@@@@,-,=,@@@@@@@@";

        npc.strContents1 = "BoB �հ��̴�!!\n� ��Ȱ�� ���� ��� �� ���� ���̳�..\n�۳� ����� ���δ� ������ �����ϰ� �����ص� ��� ���ʵȴٴ��� ��¥�ϱ�,,\n�ʹݿ� ������ �ϸ� ���������� ���� ����� �� �� �ִٴ���\n�׷��� ������ �ؾ�¡! BoB ��Ȱ ����!!!";
        npc.strContents2 = "Ʈ�� �������ѰŰ���?..\n���Ѱž�\n���߾�\n��մ� ���� �˷��ֽø� ���ڴ�!";
        npc.strContents3 = "ª�� �ð� �ȿ� �ϴ��� �� ��������� ���� ���� ���п� �� �������߳�\n�۳� ����� ����� �̸� ������ ���� �����صα� ���߾�. ���� ����Ǵ� ��������!";
        npc.strContents4 = "�� ���� �����!!!\n��� �� �ð��̾����� ���� ���� �� ��� �� �ִ� ����� �ð��̾���\n���� ���� �غ��ؾ���...\n��ε� ȭ����!!";

        vecNPC.push_back(npc);
    }
}

void CQuestInfo::QueryQuestObject(std::vector<ST_QUEST_OBJECT>& vecQuestObject)
{
    ST_QUEST_OBJECT stObject;
    stObject.nQuestObjectId = 276;
    stObject.strName = "�������� �ո�ȣ��";
    stObject.cPatch = 'S';
    stObject.x = 50;
    stObject.y = 21;
    stObject.z = 0;
    stObject.reserved = 0;
    vecQuestObject.push_back(stObject);
}

void CQuestInfo::QueryQuestItem(std::vector<ST_QUEST_ITEM_DATA>& vecQuestItem)
{
    {
        ST_QUEST_ITEM_DATA item;
        item.btId = 130;
        item.strName = "�ϸ��� ����";
        item.strDesc = "���ŷ��� 30��ŭ ä���ش�.";
        item.nHP = 0;
        item.nMP = 30;
        vecQuestItem.push_back(item);
    }
}

void CQuestInfo::QueryQuestMonster(std::vector<ST_QUEST_MONSTER_DATA>& vecQuestMonster)
{
    {
        ST_QUEST_MONSTER_DATA monster;
        monster.dwMonsterId = 20008;
        monster.strName = "c++ �ڷ�����";
        monster.btLevel = 12;
        monster.nHP = 50;
        monster.btAttack = 10;
        monster.btDex = 4;
        monster.btVulnerability = JOB_TYPE_NOVICE;
        monster.nRewardMoney = 800;
        monster.nRewardExp = 600;
        monster.vecRewardItems.push_back(130);
        vecQuestMonster.push_back(monster);
    }
}

void CQuestInfo::QueryQuest(std::vector<ST_QUEST_DATA>& vecQuest)
{
    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 136;
        stQuest.StartCondition = ST_FILTER(136, 0x0000, 0x0001);
        stQuest.vecMessages.push_back("������ ����.. ���� �������� �ʳ�..");
        stQuest.vecMessages.push_back("�ո��� �� �̷��� ������");
        stQuest.vecMessages.push_back("�� ���ߴ�.. �Ʊ� ������ ���� �������� ģ���� �̾߱� �ϴٰ� �ո� ��ȣ�븦 �Ҿ���ȳ� ����?!..");
        stQuest.vecMessages.push_back("�ո� ���µ�.. �� ���� ���� �ȿ� �������ϴµ�.. ");
        stQuest.vecMessages.push_back("Ȥ�� �� ��� �� �ո� ��ȣ�� �� ã���� �� �ְڴ�?");
        stQuest.ClearCondition = ST_FILTER(136, 0x0003);
        vecQuest.push_back(stQuest);
    }

    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 276;
        stQuest.StartCondition = ST_FILTER(136, 0x0001, 0x0003);
        stQuest.vecMessages.push_back("�� �̰ǰ�");
        stQuest.vecMessages.push_back("[�Ҿ���� �ո� ��ȣ��]�� ȹ���߽��ϴ�.");
        stQuest.vecMessages.push_back("�� �̷��� �� ��ó�� ������??");
        stQuest.vecMessages.push_back("�̰� �ո� ���� �� BoB�ϴٰ� ����ǰ� ����.. ���� �̷��� �Ǵ°� �Ƴ�?!..");
        stQuest.vecMessages.push_back("��ư �� ����ȭ ��Ƽ���� ��������߰ڴ�.");
        stQuest.ClearCondition = ST_FILTER(136, 0x0007);
        vecQuest.push_back(stQuest);
    }

    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 136;
        stQuest.StartCondition = ST_FILTER(136, 0x0003, 0x0007);
        stQuest.vecMessages.push_back("ã�Ҿ�?!");
        stQuest.vecMessages.push_back("[�Ҿ���� �ո� ��ȣ��]�� �����߽��ϴ�.");
        stQuest.vecMessages.push_back("����! �� ���п� ���� �� �� �ְھ�.");
        stQuest.vecMessages.push_back("��? �� ���ٿ� ���� ���� ���߳İ�?");
        stQuest.vecMessages.push_back("�ո� ���°� �Ű澲���� ������ ���ϰڴ��󱸤�..");
        stQuest.vecMessages.push_back("���� �ؾ���.. �ʰ� ��ȣ�뵵 ã����µ�..����");
        stQuest.vecMessages.push_back("�ٵ� Ȥ�� �ϳ��� �� ������ �� ������?");
        stQuest.ClearCondition = ST_FILTER(136, 0x000F);
        vecQuest.push_back(stQuest);
    }
    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 136;
        stQuest.StartCondition = ST_FILTER(136, 0x0007, 0x000F);
        stQuest.vecMessages.push_back("�����شٰ� �ؼ� ����");
        stQuest.vecMessages.push_back("���� �ð��� ��� ������..��");
        stQuest.vecMessages.push_back("���� ���� �� �ִµ�,, ������ �ʿ��� �ڷḦ �������ָ� ���� �� ����");
        stQuest.ClearBattle.btMinPlayerCount = 1;
        stQuest.ClearBattle.vecMonster.push_back(20008);
        stQuest.ClearCondition = ST_FILTER(136, 0x001F);
        vecQuest.push_back(stQuest);
    }
    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 136;
        stQuest.StartCondition = ST_FILTER(136, 0x000F, 0x001F);     
        stQuest.vecMessages.push_back("�� ���п� ���� ���� �ؼ� �� �� �ְھ�! ����!!");
        stQuest.ClearCondition = ST_FILTER(136, 0xFFFF);
        vecQuest.push_back(stQuest);

    }
}
