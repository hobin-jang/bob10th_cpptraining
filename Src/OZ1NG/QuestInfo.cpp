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


/*
void CQuestInfo::QueryNpc(std::vector<ST_NPC_INFO>& vecNPC)
{
    ST_NPC_INFO npc;
    strcpy_s(npc.szName, 21, "홍택균 멘티");
    npc.patch = 'O';
    strcpy_s(npc.szGreetMessage, 61, "안녕하세요 10기 취약점분석트랙 홍택균입니다 :) 다들 화이팅입니다!!");

	vecNPC.push_back(npc);
}
*/

void CQuestInfo::QueryNpcEx(std::vector<ST_QUEST_NPC_DATA>& vecNPC)
{
    ST_QUEST_NPC_DATA npc;
    npc.x = 3;
    npc.y = 20;
    npc.z = 23;
    npc.nNpcID = 1019;
    npc.strTrack = "취약점분석트랙";
    npc.strName = "퍼징교 신자 홍택균(OZ1NG)";
    npc.nAge = 28;
    npc.strMBTI = "INTP입니다 :)";
    npc.cPatch = 'Z';
    npc.strMessage = "퍼저는 신이야! 너도 퍼징교에 들어오지 않을래? \n"
        "너도 취약점을 찾을 수 있을지도 몰라! ";

    npc.strContents1 = "";

    npc.vecBigImage.resize(60);

    npc.vecBigImage[0] = "                          ....                             ";
    npc.vecBigImage[1] = "                       .-~;;~~~-.                          ";
    npc.vecBigImage[2] = "                    .~*===$===*=;!~~::~.                   ";
    npc.vecBigImage[3] = "                  .;====================:                  ";
    npc.vecBigImage[4] = "                 :========$$$==$$===$$===!                 ";
    npc.vecBigImage[5] = "                *=$==$=$$$$$$$$$$$$$$$$$$=;                ";
    npc.vecBigImage[6] = "              .*=$=$$$$$$$$$$$$$$$$$$$$$$$!.               ";
    npc.vecBigImage[7] = "              *=$=$$$$$$$$$$$$$$$=$$$$$$$$=:               ";
    npc.vecBigImage[8] = "             *==$$$$$$$$$$$$$$$$$=$$$$$$$$$=~              ";
    npc.vecBigImage[9] = "            :==$$$$$$$$$$$$$$$$$$$$$$$$$$$$$=              ";
    npc.vecBigImage[10] = "            ===$$$$$$$$$$$$$$$$=$$$$$$$$$$$$$,             ";
    npc.vecBigImage[11] = "           :===$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$=             ";
    npc.vecBigImage[12] = "           *===$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$.            ";
    npc.vecBigImage[13] = "           ==$$$$$$$$$$$$$$$$$$$=$=$$$$$$$$$$$;            ";
    npc.vecBigImage[14] = "           ===$$$$$$$$$$$$$$=$=$$$$$$$$$$$$$$$=            ";
    npc.vecBigImage[15] = "           ==$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$            ";
    npc.vecBigImage[16] = "           ==$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$            ";
    npc.vecBigImage[17] = "           *$$$$$$$$$$$$$$$$$$$$$$===$$$$$$$$$$.           ";
    npc.vecBigImage[18] = "           *=$$$$$$$$$$$$$$$$$$$$$=====$$=$=$$$.           ";
    npc.vecBigImage[19] = "           *=$$$$$$$$$$$$=$$$$$$$====*======$$$.           ";
    npc.vecBigImage[20] = "           *=$$$$$$$$$$$$$$$$$$$$=*=****====$$$.           ";
    npc.vecBigImage[21] = "           !=$$$$$$$$$$$$$$$=$$$==****!**===$$=            ";
    npc.vecBigImage[22] = "           !=$$=**==$$$====*!$=**=!!**!;;!*====            ";
    npc.vecBigImage[23] = "           ,=$$:~:*!*=*:~;:::!!:!;~~:-,-,,-=$$;            ";
    npc.vecBigImage[24] = "            *==---:;!!**!;-,,--,-~::::~-...*==.            ";
    npc.vecBigImage[25] = "            ;==---~;~---;;:-,..-:;*:--~;...;=*.            ";
    npc.vecBigImage[26] = "           .,!=---~--,,..,~-,..,~~-,. ..-. ~!..            ";
    npc.vecBigImage[27] = "           .,:!~-:--~;!!-,,;;;;:~--;;-...-.-!..            ";
    npc.vecBigImage[28] = "            .-;,!--~:~!=:~,:,,,~-~!=!-~,..;,=              ";
    npc.vecBigImage[29] = "            .~:,,-,,,,-~---:-..---~:,..  ...*,             ";
    npc.vecBigImage[30] = "            .:~,,-,,,,,,,,-~-..-~,,,..   . .;,             ";
    npc.vecBigImage[31] = "            .~-,,~,,,....,--,. .-.....   ~ .~              ";
    npc.vecBigImage[32] = "             ,-,,,-,.....,--,.  .,....  .  ..              ";
    npc.vecBigImage[33] = "             ,,-,,,~....----,.  .,,... ,.  .               ";
    npc.vecBigImage[34] = "              ,-,,,,--,-,,-,,    ,,~,,-    .               ";
    npc.vecBigImage[35] = "              ,,,,,......,,,,.   ...       .               ";
    npc.vecBigImage[36] = "              .,,,,......,,:~,,~..         .               ";
    npc.vecBigImage[37] = "               ,,,,,.....,,,,,...         .                ";
    npc.vecBigImage[38] = "               ,,,,,......,,..            .                ";
    npc.vecBigImage[39] = "               ,,,,,,....,,,...           .                ";
    npc.vecBigImage[40] = "               .,,,,,,,,,,,,..   ...     ..                ";
    npc.vecBigImage[41] = "                ,,,,,,,~:~~--,,,,,~-     .                 ";
    npc.vecBigImage[42] = "                .,,,,,,----,... .  ... . .                 ";
    npc.vecBigImage[43] = "                 ,,,,,,,,,,,,...   ......                  ";
    npc.vecBigImage[44] = "                  -,,,,,,,,,,,,.   ......                  ";
    npc.vecBigImage[45] = "                  .--,-,,,,,,...   .....                   ";
    npc.vecBigImage[46] = "                  .-----,,,,,.     ...,                    ";
    npc.vecBigImage[47] = "                  ,------,,,,..  ...,,,                    ";
    npc.vecBigImage[48] = "                  ,,--~----,,,....,-,,.                    ";
    npc.vecBigImage[49] = "                  ,,---~~----------,...                    ";
    npc.vecBigImage[50] = "                  ,,-,---~::::~~-,,.....                   ";
    npc.vecBigImage[51] = "                 ,,,,--,--~~~~-,,.......                   ";
    npc.vecBigImage[51] = "               ~---,,--,,-----,......  ..!.                ";
    npc.vecBigImage[52] = "              ,,--,,,,,,,----,.....    ..,=.               ";
    npc.vecBigImage[53] = "           ..,,,--,,,,,,,-,,,,.....     .,=                ";
    npc.vecBigImage[54] = "         .,,,,,,,--,,,,,,,-,,,.....     .!.   .            ";
    npc.vecBigImage[56] = "       .,,,,,,,,,,,-,,,,,,,,,.....      ,,                 ";
    npc.vecBigImage[57] = "     .,,,,,,,,,,,,,,,,,,,,,........    ,.    .             ";
    npc.vecBigImage[58] = "   .,,,,,,,,,..,,,,,,.,,,,,,..........,     .              ";
    npc.vecBigImage[59] = " .,,.,..........,,,,,,....,,..........     .               ";
    npc.vecBigImage[59] = ".......................,...........                         ";

    npc.vecSmallImage;	// 위엣것 참조.
    npc.vecSmallImage.resize(25);

    npc.vecSmallImage[0]   = "@@@@@@@@@@@@@&&&&&&&&&&&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@";
    npc.vecSmallImage[1]   = "@@@@@@@@@@...@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@...&@@@@@@@";
    npc.vecSmallImage[2]   = "@@@@@@@@@@@@@@.@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@,@@@@@@@@@@@@";
    npc.vecSmallImage[3]   = "@@@@@@@@@@@@@@@,&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@.@@@@@@@@@@@@@";
    npc.vecSmallImage[4]   = "@@@@@@@@@@@@@@@@,.@%,.......    .......,%@@@#.@@@@@@@@@@@@@@";
    npc.vecSmallImage[5]   = "@@@@@@@@@@@@@#...                   ...   ....*@@@@@@@@@@@@@";
    npc.vecSmallImage[6]   = "@@@@@@@@@#..   .........................  ......../@@@@@@@@@";
    npc.vecSmallImage[7]   = "@@@@@@%..............................................(@@@@@@";
    npc.vecSmallImage[8]   = "@@@@(..................................................,@@@@";
    npc.vecSmallImage[9]   = "@@@......................................................&@@";
    npc.vecSmallImage[10]  = "@&.......@      @..........................%(    *&.......#@";
    npc.vecSmallImage[11]  = "@......@          %......................@          @......@";
    npc.vecSmallImage[12]  = "/.....,      @     (....................,      #     /.....,";
    npc.vecSmallImage[13]  = ",......@          @......................@          %.......";
    npc.vecSmallImage[14]  = "&........&*    ,@..........................@      &,.......(";
    npc.vecSmallImage[15]  = "@..........................................................@";
    npc.vecSmallImage[16]  = "@@........................................................@@";
    npc.vecSmallImage[17]  = "@@@&....................................................#@@@";
    npc.vecSmallImage[18]  = "&&&&&#................................................/@@@@@";
    npc.vecSmallImage[19]  = "&&&&&@@@...*,..................................,,*..@@@@@@@@";
    npc.vecSmallImage[20]  = "@@@@@@@@..&(..,,,,,,,,,............,,,,,,,,,,,../@...@@@@@@@";
    npc.vecSmallImage[21]  = "@@@@@@@@....../@(....,,,,,,,,,,,,,,,,,,..../@(.......%@@@@@@";
    npc.vecSmallImage[22]  = "@@@@@@@@..,.......&@@@@@@&%#/**/(%&@@@@@@@,......,...@@@@@@@";
    npc.vecSmallImage[23]  = "@@@@@@@@@..,,,,,,,..#@@@@@@@@@@@@@@@@@@@@...,,,,,,,,@@@@@@@@";
    npc.vecSmallImage[24]  = "@@@@@@@@@@@@@@&&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@#(#@@@@@@@@@@@@";

    npc.strContents1 =
        "어? 내가 왜 이곳에..."
        ;

    vecNPC.push_back(npc);


}

void CQuestInfo::QueryQuestObject(std::vector<ST_QUEST_OBJECT>& vecQuestObject)
{
    {
        ST_QUEST_OBJECT stObject;
        stObject.nQuestObjectId = 301;
        stObject.strName = "전설의 컴퓨터";
        stObject.cPatch = 1;	// 화면에 보이지도 않고 만져지지도 않게 하려면 0을 넣으면 됨
        stObject.x = 22;
        stObject.y = 22;
        stObject.z = 6;
        stObject.reserved = 0;
        vecQuestObject.push_back(stObject);
    }

    {
        ST_QUEST_OBJECT stObject;
        stObject.nQuestObjectId = 302;
        stObject.strName = "전설의 USB";
        stObject.cPatch = 1;	// 화면에 보이지도 않고 만져지지도 않게 하려면 0을 넣으면 됨
        stObject.x = 5;
        stObject.y = 20;
        stObject.z = 3;
        stObject.reserved = 0;
        vecQuestObject.push_back(stObject);
    }
}

void CQuestInfo::QueryQuest(std::vector<ST_QUEST_DATA>& vecQuest)
{
    // 퍼징교 신자 홍택균
    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 1019;
        stQuest.StartCondition = ST_FILTER(1019, 0x0000, 0x0001);
        stQuest.vecMessages.push_back("그 소문 들었어?");
        stQuest.vecMessages.push_back("과거 퍼징의 신께서 전설의 USB와 전설의 컴퓨터를 이 건물 어딘가에 숨겨두셨대!");
        stQuest.vecMessages.push_back("그것만 있으면 취약점 찾는 것 따위는 식은죽 먹기겠지...?");
        stQuest.vecMessages.push_back("너 시간도 많아보이는데 한번 찾아봐!");
        stQuest.ClearCondition = ST_FILTER(1019, 0x0003);
        vecQuest.push_back(stQuest);
    }

    // 전설의 컴퓨터 // 전설의 USB 찾기 전
    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 301;
        stQuest.StartCondition = ST_FILTER(1019, 0x0001, 0x0001);
        stQuest.vecMessages.push_back("방치된 오랜된 컴퓨터가 있다.");
        stQuest.vecMessages.push_back("툭툭 치니 갑자기 빛이 나며 켜지기 시작한다.");
        stQuest.vecMessages.push_back("화면에 '전설의 컴퓨터'라는 문구가 띄워져있다.");
        stQuest.vecMessages.push_back("이게... 전설의 컴퓨터..?");
        stQuest.vecMessages.push_back("전설의 컴퓨터를 찾았다. 하지만 전설의 USB가 없다...");
        stQuest.vecMessages.push_back("컴퓨터는 바로 꺼지고 말았다.");
        stQuest.ClearCondition = ST_FILTER(1019, 0x0003);
        vecQuest.push_back(stQuest);
    }

    // 전설의 USB
    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 302;
        stQuest.StartCondition = ST_FILTER(1019, 0x0001, 0x0003);
        stQuest.vecMessages.push_back("이 영롱한 빛깔...");
        stQuest.vecMessages.push_back("아무래도 전설의 USB를 찾은 것 같다.");
        stQuest.vecMessages.push_back("[전설의 USB]를 획득했습니다.");
        stQuest.vecMessages.push_back("이걸 전설의 컴퓨터에 꽂으면 엄청난 일이 일어날 것만 같다.");
        stQuest.ClearCondition = ST_FILTER(1019, 0x0007);
        vecQuest.push_back(stQuest);
    }

    // 전설의 컴퓨터 // 전설의 USB 찾은 후
    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 301;
        stQuest.StartCondition = ST_FILTER(1019, 0x0003, 0x0007);
        stQuest.vecMessages.push_back("방치된 오랜된 컴퓨터가 있다.");
        stQuest.vecMessages.push_back("컴퓨터를 켜고 전설의 USB를 꽂았다.");
        stQuest.vecMessages.push_back("갑자기 컴퓨터가 엄청난 빛을 내기 시작했다.");
        stQuest.vecMessages.push_back("단숨에 전설의 USB의 엄청난 아이디어들이 펼쳐지며 머릿속에 들어왔다.");
        stQuest.vecMessages.push_back("[퍼징신의 가호]를 얻었습니다.");
        stQuest.vecMessages.push_back("전설의 컴퓨터는 서서히 빛을 잃다가 완전히 꺼져버렸다.");
        stQuest.vecMessages.push_back("무슨일이 일어난거지...? [퍼징교 신자 홍택균]에게 돌아가 물어보자");
        stQuest.ClearCondition = ST_FILTER(1019, 0x000f);
        vecQuest.push_back(stQuest);
    }

    // 퍼징교 신자 홍택균 // 클리어
    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 1019;
        stQuest.StartCondition = ST_FILTER(1019, 0x0007, 0x000f);
        stQuest.vecMessages.push_back("홍택균에게 무슨일이 있었는지 설명했다.");
        stQuest.vecMessages.push_back("뭐...? 그런 일이 있었다니...");
        stQuest.vecMessages.push_back("아무래도 너는 '퍼징신의 가호'를 받은 것 같아");
        stQuest.vecMessages.push_back("축하해! 어떤 취약점이라도 무난히 찾을 수 있을거야");
        stQuest.vecMessages.push_back("잘 되길 빌어줄께! 나 대신 찾아줘서 고마워! :)");
        stQuest.ClearCondition = ST_FILTER(1019, 0x001f);
        vecQuest.push_back(stQuest);
    }
}

