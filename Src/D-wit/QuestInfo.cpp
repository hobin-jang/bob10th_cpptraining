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
        npc.x = 6;
        npc.y = 5;
        npc.z = 5;
        npc.nNpcID = 129;
        npc.strTrack = "디지털포렌식트랙";
        npc.strName = "김대기 (D_wit)";
        npc.nAge = 25;
        npc.strMBTI = "정상";
        npc.cPatch = 'D';
        npc.strMessage = "밥솥은 쿠첸...";
        npc.strMessage = "쿠쿠는 위험햐... 함부로 건들지 말어...";


        npc.vecBigImage.push_back("                                                                ");
        npc.vecBigImage.push_back("                                                                ");
        npc.vecBigImage.push_back("                          . :PbZPj77.                           ");
        npc.vecBigImage.push_back("                      :JdQBMBBBBBBBBBBQqi                       ");
        npc.vecBigImage.push_back("                    rPQQBQbQQMgZdDSZPggRQBK.                    ");
        npc.vecBigImage.push_back("                 .IQMdMQZRQRMEPPDDdPEQQgggBQs                   ");
        npc.vecBigImage.push_back("                5QMBQRZQgE5ggMgQQBQBQBBBQQQBQB.                 ");
        npc.vecBigImage.push_back("               XBdBBBQgEgQQQQQBQBQQQBQBBBQBQBBB                 ");
        npc.vecBigImage.push_back("              IBBBBBRMgQBBBBQBQBQBQBQQQBQBQBBBBB                ");
        npc.vecBigImage.push_back("             7BBBBBQBQBQBBBQBQQRBQBQQQQQQMQQBQBBQ               ");
        npc.vecBigImage.push_back("            .BBBQBBBBBBBBBBBBBBBQBQBQQQQQQMQQBQBB               ");
        npc.vecBigImage.push_back("            gBBQBBBQgDDZDPEMBBBQBBBBBBBBBQBQQQQQB:              ");
        npc.vecBigImage.push_back("            QBBQQBgv.. .   .:irYXQBBQBQBBBBBQQQBBX              ");
        npc.vecBigImage.push_back("            QBBRBBs . . .....     .:::ir2RBBBBQBBq              ");
        npc.vecBigImage.push_back("            7BBBBB:..... . .......     ..::vQBQBB:              ");
        npc.vecBigImage.push_back("             QBBB7..:.....  ..... ..::::i::.7BBBR               ");
        npc.vecBigImage.push_back("              BBZ..:vJvvv2sr:::::i7Usv7LYYi:.2BB                ");
        npc.vecBigImage.push_back("              :BP..::.....::i:::iri.::i:::::.rBL                ");
        npc.vecBigImage.push_back("               BZ...:7s5BBri:...:::7qBQ5Kv:..iBL                ");
        npc.vecBigImage.push_back("               QP...:i::Svr:.. .:::::i:.:::..:Qi                ");
        npc.vecBigImage.push_back("               jq...        ....::.  . ......iK:                ");
        npc.vecBigImage.push_back("               vg.... . . ..:...:ii.  ....:.:i7:                ");
        npc.vecBigImage.push_back("               .ri.... ....i:....:i7:.....::ir:                 ");
        npc.vecBigImage.push_back("                .ii.......:i:j7:rPvri.....::r:                  ");
        npc.vecBigImage.push_back("                  :i........:i..:ri......::i:                   ");
        npc.vecBigImage.push_back("                   ::......   . ..........:i.                   ");
        npc.vecBigImage.push_back("                    ::....:irLs1U2ujr:::.::i                    ");
        npc.vecBigImage.push_back("                    :::..:i7uYujuuIYi:::::r                     ");
        npc.vecBigImage.push_back("                    .r::......:::::....:i7.                     ");
        npc.vecBigImage.push_back("                    .iii:.....:::.:...:i7r                      ");
        npc.vecBigImage.push_back("                    .::r7r:.........:i7vrr                      ");
        npc.vecBigImage.push_back("                    .:.:rvYri:::iir7JJvi:i                      ");
        npc.vecBigImage.push_back("                  .J:....:ivsUU5IX5Ivr:::iiQY                   ");
        npc.vecBigImage.push_back("               iqDBi:.....:::ir7vv7i:.:::::iBBr.                ");
        npc.vecBigImage.push_back("           .YQBBQBB  ..........:::::::.::::. BBBBKi             ");
        npc.vecBigImage.push_back("        iSBBBQBQBQBE. ..........:.:::.::i::.:BBBBBBBBqv.        ");
        npc.vecBigImage.push_back("    .sQBBBBBBBQBBBBBBr   ........:::...:::..EBBBBBBBQBQBBRv.    ");
        npc.vecBigImage.push_back("  uBBBBBBQBBBQBQQQBBBBBL.       ...  ....:LBBBBBBQBQQBBBBBBBBj. ");
        npc.vecBigImage.push_back("gBBBBBQQQBQBQBQBQBQBBBBBBBPYi:     .:v2bMBBBBBQQQBQBQQQQQBQBBBBb");
        npc.vecBigImage.push_back("BBBBBQQQBBBBBBBQBQBQBBBBBBBQBBBQBQBBBBBBBBBQBQQQBQBQQQQQQQQQBQBB");
        npc.vecBigImage.push_back("BQQBQBQBQBQBQBBBBBQBQBQBBBBBQBBBBBBBBBBBQBQBQQQBQBQBQBQBQBQQQBQR");
        npc.vecBigImage.push_back("BQQQBQBBBQBQBQBBBQBQBQBQBQBQBBBQBBBQBBBQBQBQBQBQBQBQBQBQQQQQBQBR");
        npc.vecBigImage.push_back("QQQBQBBBQBQBQBQBQBBBQBQBQQQBQBQBQBQBQBQBQQQBQBQBQQQBQBQQQBQQQBQQ");
        npc.vecBigImage.push_back("QQBQBQBQBQBBBQQQBQBQQQBQBQBQBQBQBQBQBQBQBQBQBQBQBQBQQQBQQQQQBQQM");
        npc.vecBigImage.push_back("QBQBQBQBBBQBQBQBQBQBQBQQQBQBQBQBQBQBQBBBQQQBQBQBQBQBQQQBQBQBQBQQ");
        npc.vecBigImage.push_back("BQBBBBBQBBBQBQBQBQBQBQBQBQBQBQBQBQBQBQBQBQBQBQBBBQBBQQQQBQBQQQBM");
        npc.vecBigImage.push_back("QBQBQBQBBBQBQBQBQBQBQBQBQBQBQQQBQBQBQBQBQBQQQQQBQBQBQBQQQBQBQQQQ");
        npc.vecBigImage.push_back("BQQQBBBQBQBQBBBQBQBQBQBQQQQQQQQQBQBQBQQQBQQQQQQQBQBQBQBQBQBQBQBR");
        npc.vecBigImage.push_back("QQQBQBQBQBQBQBQQQQQQQBQBQBQBQQRQQQMQRQQQQQQQQBQBQBQQQQQQQQQQQBQQ");


        npc.vecSmallImage.push_back("                         ");
        npc.vecSmallImage.push_back("            :.           ");
        npc.vecSmallImage.push_back("        jBBBBBBBD:       ");
        npc.vecSmallImage.push_back("      2BBBBBQBBBBBI      ");
        npc.vecSmallImage.push_back("     uBBBBBQBBBQBQBr     ");
        npc.vecSmallImage.push_back("     BBQ...ir5KdBBBR     ");
        npc.vecSmallImage.push_back("     PB:        :sBr     ");
        npc.vecSmallImage.push_back("      Q.:UU:.:15:.g      ");
        npc.vecSmallImage.push_back("     U. .: .....:v       ");
        npc.vecSmallImage.push_back("       :   :.r. .r       ");
        npc.vecSmallImage.push_back("        :..:77:.i.       ");
        npc.vecSmallImage.push_back("        .i.:rr:ii        ");
        npc.vecSmallImage.push_back("        .ir:ii77:        ");
        npc.vecSmallImage.push_back("     .2q  .irvi..vI.     ");
        npc.vecSmallImage.push_back("  rdBBBB1       .uBBBRI. ");
        npc.vecSmallImage.push_back("QBBBBBBBBBgSYLUMQBBBBBBBB");
        npc.vecSmallImage.push_back("BBBBBQBBBBBBBQBBBBBQBBBBB");
        npc.vecSmallImage.push_back("QBBBQBQBQBBBBBBBQBQBQBQBQ");
        npc.vecSmallImage.push_back("BQBQBQBQBQBQQQQQBQBQQQQQQ");


        vecNPC.push_back(npc);
    }
}

void CQuestInfo::QueryQuestObject(std::vector<ST_QUEST_OBJECT>& vecQuestObject)
{
    //SSD
    {
        ST_QUEST_OBJECT stObject;
        stObject.nQuestObjectId = 266;
        stObject.strName = "512GB짜리 M.2 SSD";
        stObject.cPatch = 'S';	// 화면에 보이지도 않고 만져지지도 않게 하려면 0을 넣으면 됨
        stObject.x = 5;
        stObject.y = 19;
        stObject.z = 3;
        stObject.reserved = 0;
        vecQuestObject.push_back(stObject);
    }

    //택배박스
    {
        ST_QUEST_OBJECT stObject;
        stObject.nQuestObjectId = 274;
        stObject.strName = "뜯어진 택배박스";
        stObject.cPatch = 'C';	// 화면에 보이지도 않고 만져지지도 않게 하려면 0을 넣으면 됨
        stObject.x = 18;
        stObject.y = 9;
        stObject.z = 3;
        stObject.reserved = 0;
        vecQuestObject.push_back(stObject);
    }
}

void CQuestInfo::QueryQuest(std::vector<ST_QUEST_DATA>& vecQuest)
{
    //D-wit
    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 129;
        stQuest.StartCondition = ST_FILTER(129, 0x0000, 0x0001);
        stQuest.vecMessages.push_back("하아... 환장하겄네. 외장하드는 뭐 땜에 자꾸 튕기는겨-");
        stQuest.vecMessages.push_back("읭? 자네는 누구여? 아- 11기여?");
        stQuest.vecMessages.push_back("이이, 마침 잘 만났네. 그... 뭐여, 나 부탁 하나만 해도 댜?");
        stQuest.vecMessages.push_back("아유 이 노트북이 말여, BoB 들어오면 알겨. 멘티들한테 다 주는 건데,");
        stQuest.vecMessages.push_back("스펙이 아주 짱짱햐- 가볍구, 빠르구, 뜨끈하ㄱ... 아 이거는 자랑은 아닌디...");
        stQuest.vecMessages.push_back("뭐, 암튼지간에. 스스디도 512기가나 주는 겨. 노트북 치고는 많이 주는 거잖여, 그지?");
        stQuest.vecMessages.push_back("근데 이게 말여...");
        stQuest.vecMessages.push_back("(본론이 뭐냐고 재촉한다.)");
        stQuest.vecMessages.push_back("아 좀 지둘려 봐아- 뭐 그리 사람이 급혀? 내 얘기 다 들으면 숨졌겄네.");
        stQuest.vecMessages.push_back("그... 워디까지 얘기했드라?");
        stQuest.vecMessages.push_back("아, 겨, 맞어. 에잉, 자네 땜에 까먹을 뻔했잖여!");
        stQuest.vecMessages.push_back("암튼간에. 그 인저, 프로젝트허면서 샌드박스를 깔아서 쓰는디, 이게 용량이 상당햐.");
        stQuest.vecMessages.push_back("공통교육 때 썼던 코드까지 다 늫고 쓰니께 인저 공간이 모잘러.");
        stQuest.vecMessages.push_back("그래가지고 말여, 돌아댕기다가 남는 스스디 있으면 좀 주서다 주면 안 되나?");
        stQuest.vecMessages.push_back("길바닥 보다 보면은 'S'라고 써져 있을겨. 그 스스디 하나만 주서다 줘봐.");
        stQuest.ClearCondition = ST_FILTER(129, 0x0003);
        vecQuest.push_back(stQuest);
    }

    //스스디
    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 266;
        stQuest.StartCondition = ST_FILTER(129, 0x0001, 0x0003);
        stQuest.vecMessages.push_back("NVMe M.2 SSD (512GB). 이건가?");
        stQuest.vecMessages.push_back("근데 이게 왜 땅에 그냥 떨어져 있지?");
        stQuest.vecMessages.push_back("[주인을 알 수 없는 SSD]를 획득했습니다.");
        stQuest.vecMessages.push_back("이거 또 주워가면 문제 생기는 거 아니야...?");
        stQuest.vecMessages.push_back("아 몰라, 그냥 갖다주지 뭐.");
        stQuest.ClearCondition = ST_FILTER(129, 0x0007);
        vecQuest.push_back(stQuest);
    }

    //D-wit
    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 129;
        stQuest.StartCondition = ST_FILTER(129, 0x0003, 0x0007);
        stQuest.vecMessages.push_back("이이? 생각보다 일찍 찾었네? 함 줘봐아.");
        stQuest.vecMessages.push_back("[주인을 알 수 없는 SSD]를 전달했습니다.");
        stQuest.vecMessages.push_back("뭐여, 이거 사놓고 센터서 잃어버린 거 아녀?");
        stQuest.vecMessages.push_back("하이닉스에 512기가면은... 이거 샀다는 동기는 못 봤는듸...");
        stQuest.vecMessages.push_back("아유 또 사람 붙잡어두고 일장연설한다고 그러겄다.");
        stQuest.vecMessages.push_back("있어봐- 껴보고 같이 확인해보자고.");
        stQuest.vecMessages.push_back("(노트북 덮개를 뜯어 SSD를 장착한다.)");
        stQuest.vecMessages.push_back("이이. 잘 되네잉. 덕분에 인저 용량 걱정 안 해도 되겄어.");
        stQuest.vecMessages.push_back("근디... 이게 차암 찜찜하단 말여?");
        stQuest.vecMessages.push_back("만약에 이게 내 게 아니면은 문제가 될 거 아녀?");
        stQuest.vecMessages.push_back("그, 부탁 하나만 더 허자.");
        stQuest.vecMessages.push_back("이게 내 거면은, 주변에 택배 박스 뜯궈놓은 게 있을겨.");
        stQuest.vecMessages.push_back("'B'라고 생겼던 것 같은디... 암튼지간에 그 택배 박스 내 거 맞는지 좀 확인혀줘봐아.");
        stQuest.ClearCondition = ST_FILTER(129, 0x000F);
        vecQuest.push_back(stQuest);
    }

    //택배박스
    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 274;
        stQuest.StartCondition = ST_FILTER(129, 0x0007, 0x000F);
        stQuest.vecMessages.push_back("대한통운... 설마 이거야?");
        stQuest.vecMessages.push_back("SSD 512... 맞네!");
        stQuest.vecMessages.push_back("여기서 SSD 뜯어놓고 아까 거기까지 굴러갔나?");
        stQuest.vecMessages.push_back("알게 뭐야. 어디 보자, 이름은 찢어졌나본데?");
        stQuest.vecMessages.push_back("주소가... 상도로41길...");
        stQuest.vecMessages.push_back("[SSD 주인의 주소]를 획득했습니다.");
        stQuest.vecMessages.push_back("나 참... 이런 것까지 알려줘야 하...겠지?");
        stQuest.ClearCondition = ST_FILTER(129, 0x001F);
        vecQuest.push_back(stQuest);
    }

    //D-wit
    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 129;
        stQuest.StartCondition = ST_FILTER(129, 0x000F, 0x001F);
        stQuest.vecMessages.push_back("잉, 찾은겨? 이름이 읎었어?");
        stQuest.vecMessages.push_back("[SSD 주인의 주소]를 알려줬습니다.");
        stQuest.vecMessages.push_back("상도로41길... 내 거 맞네!");
        stQuest.vecMessages.push_back("고생혔어. 인저 가봐.");
        stQuest.vecMessages.push_back("...라고 허면은 사람이 인정이 좀 읎지?");
        stQuest.vecMessages.push_back("그지, 내 소개는 해야지.");
        stQuest.vecMessages.push_back("나는 저기... 포렌식트랙 10기여. 이름은 얘기 안할겨.");
        stQuest.vecMessages.push_back("여기서는 NPC면서 캐릭터도 가능햐.");
        stQuest.vecMessages.push_back("그러니께 다시 말하면은, 나를 갖고 이 게임서 플레이도 가능허다- 이거지.");
        stQuest.vecMessages.push_back("아, 그리구 실지로는 이 정도로 사투리 안햐.");
        stQuest.vecMessages.push_back("말도 원체 이렇게 답답허지도 않여. 게임이니께 이러지.");
        stQuest.vecMessages.push_back("뭐... 암튼지간에, 궁금허면은 나 캐릭터로 써봐아.");
        stQuest.vecMessages.push_back("...생각 읎음 말구. 암튼 내 부탁도 잘 들어줬으니께 분명 잘 수료할겨.");
        stQuest.vecMessages.push_back("응원할테니께, 열심히 햐!");
        stQuest.ClearCondition = ST_FILTER(129, 0x003F);
        vecQuest.push_back(stQuest);
    }
}