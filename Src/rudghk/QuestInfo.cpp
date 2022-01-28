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
    strcpy_s(npc.szName, 21, "정경화 멘티");
    npc.patch = 'K';
    strcpy_s(npc.szGreetMessage, 61, "오늘도 화이팅!");

    vecNPC.push_back(npc);
}

void CQuestInfo::QueryNpcEx(std::vector<ST_QUEST_NPC_DATA>& vecNPC)
{
    ST_QUEST_NPC_DATA npc;

    npc.x = 12;
    npc.y = 3;
    npc.z = 25;
    npc.nNpcID = 136;
    npc.strTrack = "보안제품개발";
    npc.strName = "정경화";
    npc.nAge = 24;
    npc.strMBTI = "ISFJ";
    npc.cPatch = 'K';
    npc.strMessage = "오늘도 화이팅!";
    
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
    npc.vecSmallImage[0]  = "@@@@@@@-*...,@@@@@@@@@@@@";
    npc.vecSmallImage[1]  = "@@@@@@....,,,,@@@@@@@@@@@";
    npc.vecSmallImage[2]  = "@@@@@!,..,-.~-,@@@@@@@@@@";
    npc.vecSmallImage[3]  = "@@@@@=,,,.;-!,-$@@@@@@@@@";
    npc.vecSmallImage[4]  = "@@@@@~.,,,##:---@@@@@@@@@";
    npc.vecSmallImage[5]  = "@@@@.~.,..~-,---@@@@@@@@@";
    npc.vecSmallImage[6]  = "@@@@-,,~,,..----@@@@@@@@@";
    npc.vecSmallImage[7]  = "@@@@@:~--------@@@@@@@@@@";
    npc.vecSmallImage[8]  = "@@@@@,--------,*@@@@@@@@@";
    npc.vecSmallImage[9]  = "@@@@@~:~----~-,--@@@@@@@@";
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

    npc.strContents1 = "BoB 합격이닷!!\n어떤 생활을 할지 기대반 걱정반이네!\n작년 수료생 말로는 과제는 제출하고 제출해도 계속 리필된다던데 진짜일까,,\n초반에 열심히 하면 최종적으로 좋은 결과를 낼 수 있다던데\n그렇담 열심히 해야징! BoB 생활 기대돼!!!";
    npc.strContents2 = "트랙 선택잘한거겠지?..\n잘한거야\n잘했어\n재밌는 내용 알려주시면 좋겠다!";
    npc.strContents3 = "짧은 시간 안에 하느라 좀 힘들었지만 좋은 팀원 덕분에 잘 마무리했네\n작년 수료생 말대로 미리 주제랑 팀원 생각해두길 잘했어. 아주 도움되는 정보였어!";
    npc.strContents4 = "와 드디어 수료다!!!\n길고 긴 시간이었지만 나름 많은 걸 배울 수 있는 뜻깊은 시간이었어\n이젠 취직 준비해야지...\n모두들 화이팅!!";

    vecNPC.push_back(npc);
}

void CQuestInfo::QueryQuest(std::vector<ST_QUEST_DATA*>& vecQuest)
{
}
