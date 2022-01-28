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

void CQuestInfo::QueryNpc(std::vector<ST_NPC_INFO>& vecNPC)
{
    ST_NPC_INFO npc;
    
    strcpy_s(npc.szName, 21, "�̱��� ������");
    npc.patch = 'V';
    strcpy_s(npc.szGreetMessage, 61, "�λ��� �����̴� �����ϼ���");
    npc.vecBuffer.resize(60);
    npc.vecBuffer[0] =  "                   .,;=*$$*!~,                    ";
    npc.vecBuffer[1] =  "                 .!==$==$$$###=.                  ";
    npc.vecBuffer[2] =  "                ===$$$##$$@$$##$*                 ";
    npc.vecBuffer[3] =  "              ,*$$$$$###$########=;               ";
    npc.vecBuffer[4] =  "             ~$$##$$###$$$$$####$#$:              ";
    npc.vecBuffer[5] =  "            ~=#$###$$$$$#$$$$$##$$#$;             ";
    npc.vecBuffer[6] =  "            $######$$$$$$#$$$$$$#$#$$;            ";
    npc.vecBuffer[7] =  "           *######$#$##$$###$$$$#$$$$$            ";
    npc.vecBuffer[8] =  "           =###########$$##$$$#$$$#$$$*           ";
    npc.vecBuffer[9] =  "          .$#########$$$$#$$$$$=$$=$$$$           ";
    npc.vecBuffer[10] =  "          .$######$$$==$$$$$$==$$===#=$           ";
    npc.vecBuffer[11] =  "           #@##@##$==*$#$$$=====$$#$$=$           ";
    npc.vecBuffer[12] =  "           $######=!!!==#=##$#######$$*           ";
    npc.vecBuffer[13] =  "           *#####$=*!!!;=*!#$########$;           ";
    npc.vecBuffer[14] =  "           .$$#$=!;;;!:-,:-;=$$=#$##$=            ";
    npc.vecBuffer[15] =  "            =##=~,....,.  .,,,..~!*##:            ";
    npc.vecBuffer[16] =  "           .,$$~,,,!$...        ..-$=.            ";
    npc.vecBuffer[17] =  "           ..-$-,,--!,,.    ,=~-. .=,..           ";
    npc.vecBuffer[18] =  "             .=,...    .          .*              ";
    npc.vecBuffer[19] =  "           . .:,.                 .:              ";
    npc.vecBuffer[20] =  "             .~,.                 .-              ";
    npc.vecBuffer[21] =  "            ..~,.      .          ..              ";
    npc.vecBuffer[22] =  "              ,-..    ..          -               ";
    npc.vecBuffer[23] =  "              .~,.    .           ~               ";
    npc.vecBuffer[24] =  "               .,..   .-,.,      .,               ";
    npc.vecBuffer[25] =  "                ,,.              .                ";
    npc.vecBuffer[26] =  "                ,,..             .                ";
    npc.vecBuffer[27] =  "                ,,.......  ..    .                ";
    npc.vecBuffer[28] =  "                 ,,..,,,.....   .                 ";
    npc.vecBuffer[29] =  "                 ,,.....        .                 ";
    npc.vecBuffer[30] =  "                  ,....        .                  ";
    npc.vecBuffer[31] =  "                  ,,..        ..                  ";
    npc.vecBuffer[32] =  "                  ,,,..      ...                  ";
    npc.vecBuffer[33] =  "                  ,,,,,.......                    ";
    npc.vecBuffer[34] =  "                  ...,,---,,.                     ";
    npc.vecBuffer[35] =  "                  ....,,,,..    .                 ";
    npc.vecBuffer[36] =  "                 .........                        ";
    npc.vecBuffer[37] =  "                 .......                          ";
    npc.vecBuffer[38] =  "                 ,..  .          .                ";
    npc.vecBuffer[39] =  "              .*,....              =:             ";
    npc.vecBuffer[40] =  "             *#,....               *##=           ";
    npc.vecBuffer[41] =  "           ,$##-....               #####*-        ";
    npc.vecBuffer[42] =  "         -*#####...               ;#######*,      ";
    npc.vecBuffer[43] =  "       -######@#~..              ,##########=,    ";
    npc.vecBuffer[44] =  "     -###########-              ,#############$   ";
    npc.vecBuffer[45] =  "   .=############$~            :################= ";
    npc.vecBuffer[46] =  "  ;################!-        ;=###################";
    npc.vecBuffer[47] =  ":#####################*:~~;#######################";
    npc.vecBuffer[48] =  "####################@#############################";
    npc.vecBuffer[49] =  "##################################################";
    npc.vecBuffer[50] =  "##################################################";
    npc.vecBuffer[51] =  "##################################################";
    npc.vecBuffer[52] =  "##################################################";
    npc.vecBuffer[53] =  "##############################################@###";
    npc.vecBuffer[54] =  "##################################################";
    npc.vecBuffer[55] =  "###############################################@##";
    npc.vecBuffer[56] =  "###############################################@##";
    npc.vecBuffer[57] =  "##################################################";
    npc.vecBuffer[58] =  "##################################################";
    npc.vecBuffer[59] =  "##################################################";
    vecNPC.push_back(npc);

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

    vecNPC.push_back(npc);
}

void CQuestInfo::QueryQuest(std::vector<ST_QUEST_DATA*>& vecQuest)
{
}
