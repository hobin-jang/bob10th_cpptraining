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
    npc.x = 22;
    npc.y = 9;
    npc.z = 10;
    npc.nNpcID = 154;
    npc.strTrack = "보안제품개발트랙";
    npc.strName = "진우기";
    npc.nAge = 26;
    npc.strMBTI = "ISTP";
    npc.cPatch = 'U';
    npc.strMessage = "팀프로젝트 조는 미리미리 짜고 있지?";
    npc.strContents1 = "안녕~~~";
    npc.strContents2 = "트랙 선택 축하해";
    npc.strContents3 = "드디어 큰 산 하나 넘었구나";
    npc.strContents4 = "고생했다~";

    npc.vecSmallImage.resize(25);
    npc.vecSmallImage[0] = ",,,,,,,,,,,,,,,,,,,,,,,,,";
    npc.vecSmallImage[1] = ",,,,,,,,,,,,,,,,,,,,,,,,,";
    npc.vecSmallImage[2] = ",,,,,,,,,,,,,,,,,,,,,,,,,";
    npc.vecSmallImage[3] = ",,,,,,,,,-.....:,,,,,,,,,";
    npc.vecSmallImage[4] = ",,,,,,,:.,     ~.,,,,,,,,";
    npc.vecSmallImage[5] = ",,,,,,-,         .,,,,,,,";
    npc.vecSmallImage[6] = ",,,,,,.   .~:-.   ;,,,,,,";
    npc.vecSmallImage[7] = ",,,,,:.           .,,,,,,";
    npc.vecSmallImage[8] = ",,,,,.            ,!,,,,,";
    npc.vecSmallImage[9] = ",,,,,             .:,,,,,";
    npc.vecSmallImage[10] = ",,,,,             .~,,,,,";
    npc.vecSmallImage[11] = ",,,,,              ~-,,,,";
    npc.vecSmallImage[12] = ",,,,               .:~,,,";
    npc.vecSmallImage[13] = ",,,.                ,-,,,";
    npc.vecSmallImage[14] = ",,,.               . .,,,";
    npc.vecSmallImage[15] = ",,,,,              .,,,,,";
    npc.vecSmallImage[16] = ",,,,-.              ,,,,,";
    npc.vecSmallImage[17] = ",,,,~.              ,,,,,";
    npc.vecSmallImage[18] = ",,,,,               ,,,,,";
    npc.vecSmallImage[19] = ",,,,,.             -,,,,,";
    npc.vecSmallImage[20] = ",,,,,-            .:,,,,,";
    npc.vecSmallImage[21] = ",,,,,-,  -.....   :,,,,,,";
    npc.vecSmallImage[22] = ",,,,,,-!;-,,,,,.~:~,,,,,,";
    npc.vecSmallImage[23] = ",,,,,,,--,,,,,,,--,,,,,,,";
    npc.vecSmallImage[24] = ",,,,,,,,,,,,,,,,,,,,,,,,,";

    npc.vecBigImage.resize(70);
    npc.vecBigImage[0] = "                                                            ";
    npc.vecBigImage[1] = "                             .,.                            ";
    npc.vecBigImage[2] = "                         ~~.~;**!;-                         ";
    npc.vecBigImage[3] = "                      ,;==****=====*~.                      ";
    npc.vecBigImage[4] = "                    .;**============**:                     ";
    npc.vecBigImage[5] = "                   -=========$====$====*,                   ";
    npc.vecBigImage[6] = "                  !====$$=$$==$=**=$=====:                  ";
    npc.vecBigImage[7] = "                ,*====$=$$====$=**=$======;.                ";
    npc.vecBigImage[8] = "               ~*===$===$$=$========$$=====!.               ";
    npc.vecBigImage[9] = "              ,;=====$==$$===$=========$==$=:               ";
    npc.vecBigImage[10] = "              :=$===$===*==**======$==$$$$==*,              ";
    npc.vecBigImage[11] = "             -*=========**=*=========$=$$$$$=:              ";
    npc.vecBigImage[12] = "             :=======*==**=============$$$$$$=.             ";
    npc.vecBigImage[13] = "             !=$$========*===$=======$===$$$$=;             ";
    npc.vecBigImage[14] = "            .*===========***=$$======$====$$$=*.            ";
    npc.vecBigImage[15] = "            ,====$==*==*!**====$====$$====$$$==,            ";
    npc.vecBigImage[16] = "            ,=======****!**==========$$=$===$==.            ";
    npc.vecBigImage[17] = "            ,*===*===!!****====*======$$$$====*.            ";
    npc.vecBigImage[18] = "             !====!!*~.,-~~~;!*****===$$$$$===!             ";
    npc.vecBigImage[19] = "             ;==*,..----,.   ..,-;*!;!**=$$$==:             ";
    npc.vecBigImage[20] = "             ,**; .-~~::~,    ..-~:~-~~~~*$$==.             ";
    npc.vecBigImage[21] = "              ;*~ .........   .,,,,,,,,-,-$$=~              ";
    npc.vecBigImage[22] = "              -!.  ..,~:,..   ,,,,:~~-,,,,;$!               ";
    npc.vecBigImage[23] = "              .:   .,,.;!,.   .,,-*:-~-,.,~*-               ";
    npc.vecBigImage[24] = "             . -    ...:-,    ..,,:-,-,..,-~,.              ";
    npc.vecBigImage[25] = "             . .      ....    ...,.,,,....,,..              ";
    npc.vecBigImage[26] = "              ..              ............,,..              ";
    npc.vecBigImage[27] = "              .               ...     ...,,...              ";
    npc.vecBigImage[28] = "              . .             ...     ...,,..               ";
    npc.vecBigImage[29] = "                .             ....    ...,,..               ";
    npc.vecBigImage[30] = "                .            .....  .....,,..               ";
    npc.vecBigImage[31] = "                          ,-,,--.........,...               ";
    npc.vecBigImage[32] = "                            .,,,.........,..                ";
    npc.vecBigImage[33] = "                           ....,...........                 ";
    npc.vecBigImage[34] = "                        .    ...,,,......                   ";
    npc.vecBigImage[35] = "                       .,,....----,......                   ";
    npc.vecBigImage[36] = "                       ........,,,,......                   ";
    npc.vecBigImage[37] = "                            ...........,                    ";
    npc.vecBigImage[38] = "                           ..,,....,,,,                     ";
    npc.vecBigImage[39] = "                    ...    .......,,,,.                     ";
    npc.vecBigImage[40] = "                    ...    ......,,,,,.                     ";
    npc.vecBigImage[41] = "                     ...     ...,,,,,,.                     ";
    npc.vecBigImage[42] = "                     ....  ....,,,,--,.                     ";
    npc.vecBigImage[43] = "                      ......,,,,,---,,.                     ";
    npc.vecBigImage[44] = "                      ...,,,-------,,,.                     ";
    npc.vecBigImage[45] = "                       ...,-~~~~--,,,,,                     ";
    npc.vecBigImage[46] = "                 :!     ..,,-----,,,.,~*,                   ";
    npc.vecBigImage[47] = "               ,*$;     ...,,,-,,,,.,,,*$~.                 ";
    npc.vecBigImage[48] = "               !=-.      ...,,,,,,...,,-*=*-                ";
    npc.vecBigImage[49] = "            . .;! .       ...,,,,,...,,-:==~,,.             ";
    npc.vecBigImage[50] = "           .....!          ...,,.....,,-:==~,,,,..          ";
    npc.vecBigImage[51] = "           . .  ..         ..........,,,;$*,,,,,,,,.        ";
    npc.vecBigImage[52] = "             ..  ..        .........,,,,!*-,,,,,,,,,,..     ";
    npc.vecBigImage[53] = "    .. .      .  ...       .........,,,,;,,,,,,,,,,,,,,...  ";
    npc.vecBigImage[54] = "  . .. ..        .....    ........,.,,,,,,,,,,,,,,,,,,,,,,,.";
    npc.vecBigImage[55] = " ..... . .       .............,,,,,,,......,,,,,,,,,,,,,,,,,";
    npc.vecBigImage[56] = " .    .            . .......,..,.........,,,,,,,.,.,,,..,,,,";
    npc.vecBigImage[57] = " .              .    .........,,..........,,,,,,.,,.,,,.....";
    npc.vecBigImage[58] = "  ..         .    ............................,,,.........,.";
    npc.vecBigImage[59] = " .... .  .        ......... ....  ........,................,";
    npc.vecBigImage[60] = " ..            ... . ...... ..................,,..........,,";
    npc.vecBigImage[61] = "    .      ...  .......... ..................,............,,";
    npc.vecBigImage[62] = "   ...     .    .  ............................,..........,,";
    npc.vecBigImage[63] = "           ...   ...................................,,....,,";
    npc.vecBigImage[64] = ".    .     ..     ........................................,,";
    npc.vecBigImage[65] = "..   .     .. .   ........................................,,";
    npc.vecBigImage[66] = ".    .    ....   ...................................,.....,,";
    npc.vecBigImage[67] = ".   ..    ..... . ........................................-,";
    npc.vecBigImage[68] = ".   .     ....    ........................................-,";
    npc.vecBigImage[69] = ".    .    ....   .....................................,...-,";


    vecNPC.push_back(npc);
}

void CQuestInfo::QueryQuestObject(std::vector<ST_QUEST_OBJECT>& vecQuestObject)
{
    {
        ST_QUEST_OBJECT stObject;
        stObject.nQuestObjectId = 277;
        stObject.strName = "창모의 안주";
        stObject.cPatch = 0;	// 화면에 보이지도 않고 만져지지도 않게 하려면 0을 넣으면 됨
        stObject.x = 22;
        stObject.y = 7;
        stObject.z = 5;
        stObject.reserved = 0;
        vecQuestObject.push_back(stObject);
    } 
    
    {
        ST_QUEST_OBJECT stObject;
        stObject.nQuestObjectId = 278;
        stObject.strName = "병따개";
        stObject.cPatch = 0;	// 화면에 보이지도 않고 만져지지도 않게 하려면 0을 넣으면 됨
        stObject.x = 21;
        stObject.y = 6;
        stObject.z = 5;
        stObject.reserved = 0;
        vecQuestObject.push_back(stObject);
    }
}

void CQuestInfo::QueryQuest(std::vector<ST_QUEST_DATA>& vecQuest)
{
    // 김진욱 만남
    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 154;
        stQuest.StartCondition = ST_FILTER(154, 0x0000, 0x0001);
        stQuest.vecMessages.push_back("내가 여기 센터에 갇힌지도 어연 1년...");
        stQuest.vecMessages.push_back("인줄 알았는데 이제 겨우 트랙별교육 중간밖에 안왔다고?");
        stQuest.vecMessages.push_back("슬슬 지친다... 역시 힘들때는 치킨이지!");
        stQuest.vecMessages.push_back("너희 혹시 여기 지하 1층에 단뽀뽀라고 아니?");
        stQuest.vecMessages.push_back("단뽀뽀의 가라아게가 먹고싶어...");
        stQuest.vecMessages.push_back("뭐어? 지하1층이 사라졌다고?");
        stQuest.vecMessages.push_back("배가 너무 고픈데...ㅠㅠ 혹시 먹을것 좀 없니?");
        stQuest.vecMessages.push_back("술안주같은거라도 괜찮아");
        stQuest.vecMessages.push_back("[5층 이창모 멘티 근처에 있는 안주를 훔쳐오자]");
        stQuest.ClearCondition = ST_FILTER(148, 0x0003);
        vecQuest.push_back(stQuest);
    }

    // 창모의 안주
    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 277;
        stQuest.StartCondition = ST_FILTER(148, 0x0001, 0x0003);
        stQuest.vecMessages.push_back("[술을 먹고 있는 이창모 멘티의 안주이다]");
        stQuest.vecMessages.push_back("[빨리 들고 도망가자]");
        stQuest.vecMessages.push_back("이창모: 어? 내 안주가 어디갔지??");
        stQuest.ClearCondition = ST_FILTER(148, 0x0007);
        vecQuest.push_back(stQuest);
    }

    // 김진욱에게 돌아감
    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 154;
        stQuest.StartCondition = ST_FILTER(148, 0x0003, 0x0007);
        stQuest.vecMessages.push_back("고마워. 맛있겠다!");
        stQuest.vecMessages.push_back("(주섬주섬 뭔가를 꺼낸다.)");
        stQuest.vecMessages.push_back("우리는 코로나 때문에 술을 많이 못마셨어...");
        stQuest.vecMessages.push_back("그게 한이 되어서 항상 주머니에 소주를 하나 들고다니지");
        stQuest.vecMessages.push_back("밥만 먹으면 심심하잖아?");
        stQuest.vecMessages.push_back("어라? 근데 병따개가 없네... 오다가 떨어뜨렸나 보다");
        stQuest.vecMessages.push_back("저기... 병따개도 하나만 찾아서 가져와 주라");
        stQuest.vecMessages.push_back("[5층 이창모 멘티 근처의 병따개를 찾아보자]");
        stQuest.vecMessages.push_back("(근데... 소주먹는데 병따개가 필요했나...?)");
        stQuest.ClearCondition = ST_FILTER(148, 0x000F);
        vecQuest.push_back(stQuest);
    }

    // 병따개
    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 278;
        stQuest.StartCondition = ST_FILTER(148, 0x0007, 0x000F);
        stQuest.vecMessages.push_back("[이창모 멘티가 쓰던 병따개를 발견했다!]");
        stQuest.vecMessages.push_back("(근데... 이사람 근처에 왜 이런것들밖에 없는거야?)");
        stQuest.vecMessages.push_back("[이번에도 눈치채기 전에 빨리 돌아가자]");
        stQuest.ClearCondition = ST_FILTER(148, 0x001F);
        vecQuest.push_back(stQuest);
    }

    // 김진욱
    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 154;
        stQuest.StartCondition = ST_FILTER(148, 0x000F, 0x001F);
        stQuest.vecMessages.push_back("고마워! 술한잔 하자구~ ");
        stQuest.vecMessages.push_back("(주섬주섬 뭔가를 또 꺼낸다.)");
        stQuest.vecMessages.push_back("역시 술은 쏘맥이지~!");
        stQuest.vecMessages.push_back("근데 생각해보니까 이거 어디서 찾은거야?");
        stQuest.vecMessages.push_back("뭐어?? 창모껄 그냥 가져왔다구?");
        stQuest.vecMessages.push_back("괜찮아 나중에 밥 한번 사주지 뭐");
        stQuest.vecMessages.push_back("자 너도 한잔해");
        stQuest.vecMessages.push_back("이제 트랙별 교육도 중간쯤 온 것 같은데, 슬슬 힘들지?");
        stQuest.vecMessages.push_back("많이 지칠꺼야, 나도 그랬었거든.");
        stQuest.vecMessages.push_back("그래도 2차 프로젝트를 향해 달려야지~!");
        stQuest.vecMessages.push_back("슬슬 마음 맞는 친구들을 찾아 두면 나중에 큰 도움이 될 거야");
        stQuest.vecMessages.push_back("큰 그림을 잘 그려 두라구~");
        stQuest.vecMessages.push_back("라떼는 말이야... 솰라솰라솰라솰라....");
        stQuest.vecMessages.push_back("(이사람... 말이 너무 많다... 술주정인가?)");
        stQuest.vecMessages.push_back("난 조용히 살고 싶었는데... 길길멘토님 페북사진때문에...");
        stQuest.vecMessages.push_back("Zzzzzz....");
        stQuest.vecMessages.push_back("(김진욱 멘티가 술에 취해 갑자기 잠들었다. 이틈에 도망가자)");
        stQuest.vecMessages.push_back("[퀘스트를 완료했습니다]");
        stQuest.ClearCondition = ST_FILTER(148, 0x003F);
        vecQuest.push_back(stQuest);
    }
}