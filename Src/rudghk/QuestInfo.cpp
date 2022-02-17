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

        npc.strContents1 = "BoB 합격이닷!!\n어떤 생활을 할지 기대 반 걱정 반이네..\n작년 수료생 말로는 과제는 제출하고 제출해도 계속 리필된다던데 진짜일까,,\n초반에 열심히 하면 최종적으로 좋은 결과를 낼 수 있다던데\n그렇담 열심히 해야징! BoB 생활 기대돼!!!";
        npc.strContents2 = "트랙 선택잘한거겠지?..\n잘한거야\n잘했어\n재밌는 내용 알려주시면 좋겠다!";
        npc.strContents3 = "짧은 시간 안에 하느라 좀 힘들었지만 좋은 팀원 덕분에 잘 마무리했네\n작년 수료생 말대로 미리 주제랑 팀원 생각해두길 잘했어. 아주 도움되는 정보였어!";
        npc.strContents4 = "와 드디어 수료다!!!\n길고 긴 시간이었지만 나름 많은 걸 배울 수 있는 뜻깊은 시간이었어\n이젠 취직 준비해야지...\n모두들 화이팅!!";

        vecNPC.push_back(npc);
    }
}

void CQuestInfo::QueryQuestObject(std::vector<ST_QUEST_OBJECT>& vecQuestObject)
{
    ST_QUEST_OBJECT stObject;
    stObject.nQuestObjectId = 276;
    stObject.strName = "손목보호대";
    stObject.cPatch = 'S';
    stObject.x = 50;
    stObject.y = 21;
    stObject.z = 0;
    stObject.reserved = 0;
    vecQuestObject.push_back(stObject);
}

void CQuestInfo::QueryQuest(std::vector<ST_QUEST_DATA>& vecQuest)
{
    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 136;
        stQuest.StartCondition = ST_FILTER(136, 0x0000, 0x0001);
        stQuest.vecMessages.push_back("과제의 연속.. 역시 쉽지만은 않네..");
        stQuest.vecMessages.push_back("손목이 왜 이렇게 아프냐");
        stQuest.vecMessages.push_back("아 망했다.. 아까 만남의 광장 구석에서 친구랑 이야기 하다가 손목 보호대를 잃어버렸나 본데?!..");
        stQuest.vecMessages.push_back("손목 아픈데.. 아 과제 오늘 안에 끝내야하는데.. ");
        stQuest.vecMessages.push_back("혹시 나 대신 내 손목 보호대 좀 찾아줄 수 있겠니?");
        stQuest.ClearCondition = ST_FILTER(136, 0x0003);
        vecQuest.push_back(stQuest);
    }

    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 276;
        stQuest.StartCondition = ST_FILTER(136, 0x0001, 0x0003);
        stQuest.vecMessages.push_back("어 이건가");
        stQuest.vecMessages.push_back("[잃어버린 손목 보호대]를 획득했습니다.");
        stQuest.vecMessages.push_back("왜 이렇게 새 것처럼 보이지??");
        stQuest.vecMessages.push_back("이거 손목 아픈 거 BoB하다가 생긴건가 본데.. 나도 이렇게 되는거 아냐?!..");
        stQuest.vecMessages.push_back("여튼 얼른 정경화 멘티에게 가져다줘야겠다.");
        stQuest.ClearCondition = ST_FILTER(136, 0x0007);
        vecQuest.push_back(stQuest);
    }

    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 136;
        stQuest.StartCondition = ST_FILTER(136, 0x0003, 0x0007);
        stQuest.vecMessages.push_back("찾았어?!");
        stQuest.vecMessages.push_back("[잃어버린 손목 보호대]를 전달했습니다.");
        stQuest.vecMessages.push_back("고마워! 너 덕분에 과제 할 수 있겠어.");
        stQuest.vecMessages.push_back("응? 너 갔다올 동안 과제 안했냐고?");
        stQuest.vecMessages.push_back("손목 아픈게 신경쓰여서 과제를 못하겠더라구ㅎ..");
        stQuest.vecMessages.push_back("이제 해야지.. 너가 보호대도 찾아줬는데..ㅎㅎ");
        stQuest.vecMessages.push_back("너 덕분에 과제 빨리 해서 낼 수 있겠어! 고마워!!");
        stQuest.ClearCondition = ST_FILTER(136, 0xFFFF);
        vecQuest.push_back(stQuest);
    }
}
