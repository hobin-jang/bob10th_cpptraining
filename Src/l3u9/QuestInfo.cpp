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
    npc.x = 3;
    npc.y = 10;
    npc.z = 2;
    npc.nNpcID = 147;
    npc.strTrack = "����� �м� Ʈ��";
    npc.strName = "Newbie ���â";
    npc.nAge = 23;
    npc.strMBTI = "ESFP�̰� B���̿���";
    npc.cPatch = 'C';
    npc.strMessage = " BOB �հݸ� �����ָ� ���� ���Ѵٰ� ���� �Ծ��µ�....\n"
        "������ ����ٴ°� �������...\n"
        "���� 2�ð� �ۿ� ���ܴٴ°� ������ٰ�...";
    /* npc.strMessage = "";*/



    npc.vecBigImage.resize(60);


    npc.vecBigImage[0] = "                  ..-;;~~:~,- ,.                  ";
    npc.vecBigImage[1] = "                .~!;!=***====**!-                 ";
    npc.vecBigImage[2] = "               ,;=$$$$=$$$###$#=*-,               ";
    npc.vecBigImage[3] = "              -==$##$$###@######$==!,.            ";
    npc.vecBigImage[4] = "            -;*=$$##$##########@#$#$=;.           ";
    npc.vecBigImage[5] = "          .:!*$$$###$###########@$#$=**,          ";
    npc.vecBigImage[6] = "          :!=$#$$#$$#$$#@@##########$=*;.         ";
    npc.vecBigImage[7] = "         .!=$$#$$$$=#=########@######==*-         ";
    npc.vecBigImage[8] = "         -*$##$$=$=$#$$$###$###$####$$==;,        ";
    npc.vecBigImage[9] = "         :*$#$*===$$=$=$$$#$==$$$$#$$$*=*:        ";
    npc.vecBigImage[10] = "         *=$$=*=====*==$=*=*==$$==$$=$*=*!.       ";
    npc.vecBigImage[11] = "        .*==$*======**===**;*****=$===*=**,       ";
    npc.vecBigImage[12] = "        -*===*===**=***===*;*!===*=$=$*===.       ";
    npc.vecBigImage[13] = "        ,===$=**=*****=*=**!*=$$$$$$$$===*        ";
    npc.vecBigImage[14] = "         =$$$$=*=**;;*****=!!*=$$#$#$$$==!        ";
    npc.vecBigImage[15] = "         *$#$=====*;~!*=!!*=;=*=$#$##$===;        ";
    npc.vecBigImage[16] = "         :#$===$$$$=::;**;:=*!!=$#####$$*~        ";
    npc.vecBigImage[17] = "         ~##*=*===**!:::!*;:*$$$####$$#$=.        ";
    npc.vecBigImage[18] = "         ,$$::;:~:~:~~~~~::~:!;~:!!!;;##*         ";
    npc.vecBigImage[19] = "          ==~~~~~~-~~-~~~~~~~~-,,--~~-$$~         ";
    npc.vecBigImage[20] = "          :=~~~:;;!*~----,,--~::~--~--*=          ";
    npc.vecBigImage[21] = "          :*~--~~~:!-~,,. .,,:!*-*:---!:          ";
    npc.vecBigImage[22] = "          -!~--------,.......,------,-;,          ";
    npc.vecBigImage[23] = "          .;--,,,,,,...,.......,,,,,,,;.          ";
    npc.vecBigImage[24] = "           :~-,,.......,...........,,-:           ";
    npc.vecBigImage[25] = "           :~-,,......,,,..,.    ...,--           ";
    npc.vecBigImage[26] = "           ~~--,,.....,,, .,..  ...,,-.           ";
    npc.vecBigImage[27] = "           -~~--,,....-~,,--......,,-~            ";
    npc.vecBigImage[28] = "            ~~~--,,...-~:::-....,,,--~            ";
    npc.vecBigImage[29] = "            -~~~--,,,,,,,-,,...,,,--~-            ";
    npc.vecBigImage[30] = "             ~~~------,,.,,,,,,,,---~             ";
    npc.vecBigImage[31] = "             -~~----;::~~-~-~:-,,--~,             ";
    npc.vecBigImage[32] = "             .:~-------,.,,~~--,----              ";
    npc.vecBigImage[33] = "              ~~~---,-------,,----~               ";
    npc.vecBigImage[34] = "              .:~~---,----,,,,--~~                ";
    npc.vecBigImage[35] = "               ::~~---,,.,,,,,-~:,                ";
    npc.vecBigImage[36] = "               :;::~--,,,,,,--~::                 ";
    npc.vecBigImage[37] = "               :;;;:~~-------::;:                 ";
    npc.vecBigImage[38] = "              .:;;;;;::::~:::;;::                 ";
    npc.vecBigImage[39] = "              ,:;;;;;;;;;;;;;;;::                 ";
    npc.vecBigImage[40] = "              ~:;;;;;;;;;;;;;;::~                 ";
    npc.vecBigImage[41] = "          .*$::::;;;;;;;;;;;;::~~~                ";
    npc.vecBigImage[42] = "         ,##:::::::;;;;;;;;::~~-~~~!;~            ";
    npc.vecBigImage[43] = "        ,**~~~~:~:::;;;:::::~~------*=,           ";
    npc.vecBigImage[44] = "      .~*$=-~~~~~~~::::::::~-------,;=$:.         ";
    npc.vecBigImage[45] = "  .~*=$$$##-----~~~~:::::~~---------$$*==*~       ";
    npc.vecBigImage[46] = "==$$$$$#$$##~-----~~~~~~~~-------,-!$$$$$$$=!:.   ";
    npc.vecBigImage[47] = "$$$$$$##$$$##:--------------,-,-,-;##==$$$$$$$=*~.";
    npc.vecBigImage[48] = "$$$$##$##$$$##!----------,,,,,,--;##$$##$$$$$$$$$=";
    npc.vecBigImage[49] = "$#########$$$###~-,,,,,,,,,,,,,~$##$$=$###$$$$$$$$";
    npc.vecBigImage[50] = "#$#########$$=###$~,,,,,,,,,,;####*$$##$#$$$$$$$$$";
    npc.vecBigImage[51] = "#$########$$#=$=###$*-,,:!=$####=$=$##$$#$$$$$#$$$";
    npc.vecBigImage[52] = "##############$$$$$##########=$$$$$$##$######$$$$$";
    npc.vecBigImage[53] = "################$$$$=#####$=#$$$###$$##$####$$$#$$";
    npc.vecBigImage[54] = "$$###############$##=$####==###########$#########$";
    npc.vecBigImage[55] = "#####$###$$###################$#$####$$###$##$#$##";
    npc.vecBigImage[56] = "$$#$####$####################$$##$#######$$#######";
    npc.vecBigImage[57] = "$$#$######$$###$#$##$$######$##$$#############$###";
    npc.vecBigImage[58] = "$$#$$$#$#$#####$############$##$$$##############$#";
    npc.vecBigImage[59] = "$$$##$$$$#$$$##$$########$$$###$##$$##$###$$######";




    npc.vecSmallImage.resize(25);


    npc.vecSmallImage[0] = "        ,           ";
    npc.vecSmallImage[1] = "      ;=$$##=.      ";
    npc.vecSmallImage[2] = "    .*$$#@###$$,    ";
    npc.vecSmallImage[3] = "    !$==$######=.   ";
    npc.vecSmallImage[4] = "    $==$=$$$$=$*!   ";
    npc.vecSmallImage[5] = "   :==*=*$**===$=   ";
    npc.vecSmallImage[6] = "   .$$=***=;=##==   ";
    npc.vecSmallImage[7] = "    #=!!::!==#$#,   ";
    npc.vecSmallImage[8] = "    =~~~---~--~$    ";
    npc.vecSmallImage[9] = "    !---,,..--,!    ";
    npc.vecSmallImage[10] = "    ~-...,.. .,,    ";
    npc.vecSmallImage[11] = "    .~,..!-...-     ";
    npc.vecSmallImage[12] = "     ~-,,,,,,-~     ";
    npc.vecSmallImage[13] = "     .---,,,,-      ";
    npc.vecSmallImage[14] = "      :~-,,,~       ";
    npc.vecSmallImage[15] = "      :;~--~;       ";
    npc.vecSmallImage[16] = "      :;;;;;:       ";
    npc.vecSmallImage[17] = "    =:::;;;~--$     ";
    npc.vecSmallImage[18] = " :$=!-~~::~---$**   ";
    npc.vecSmallImage[19] = "$$###$-----,--$$$$$=";
    npc.vecSmallImage[20] = "#####=#-,,,-##=##$$$";
    npc.vecSmallImage[21] = "#$$#$#$$###$=#$####$";
    npc.vecSmallImage[22] = "#$$$###$##$#$#$#####";
    npc.vecSmallImage[23] = "$#####$####$#$$###$#";
    npc.vecSmallImage[24] = "$$$$##$#####$######$";

    npc.strContents1 = "content1 test";

    npc.strContents2 = "content2 test";

    npc.strContents3 = "content3 test";

    npc.strContents4 = "content4 test";



    vecNPC.push_back(npc);
}


void CQuestInfo::QueryQuestObject(std::vector<ST_QUEST_OBJECT>& vecQuestObject) {

    {
        ST_QUEST_OBJECT stObject;
        stObject.nQuestObjectId = 263;
        stObject.strName = "JPEG Coverage 5% ����ִ� BOBƮ��";
        stObject.cPatch = 'N';	// ȭ�鿡 �������� �ʰ� ���������� �ʰ� �Ϸ��� 0�� ������ ��
        stObject.x = 62;
        stObject.y = 9;
        stObject.z = 0;
        stObject.reserved = 0;
        vecQuestObject.push_back(stObject);
    }

    //{
    //    ST_QUEST_OBJECT stObject;
    //    stObject.nQuestObjectId = 264;
    //    stObject.strName = "JPEG Coverage 5% ����ִ� BOBƮ��";
    //    stObject.cPatch = 'K';	// ȭ�鿡 �������� �ʰ� ���������� �ʰ� �Ϸ��� 0�� ������ ��
    //    stObject.x = 62;
    //    stObject.y = 9;
    //    stObject.z = 0;
    //    stObject.reserved = 0;
    //    vecQuestObject.push_back(stObject);
    //}

}
void CQuestInfo::QueryQuest(std::vector<ST_QUEST_DATA*>& vecQuest)
{
}
