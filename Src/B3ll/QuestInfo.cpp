#include "pch.h"
#include "QuestInfo.h"

static QuestInfo g_QuestInfo;

QuestInfo::QuestInfo(void)
{
	ExportAPIEntry(this);
}

QuestInfo::~QuestInfo(void)
{
}


void QuestInfo::QueryNpcEx(std::vector<ST_QUEST_NPC_DATA>& vecNPC)
{
	{
		ST_QUEST_NPC_DATA npc;
		npc.x = 10;
		npc.y = 4;
		npc.z = 6;
		npc.nNpcID = 144;
		npc.strTrack = "취약점분석트랙";
		npc.strName = "정종배";
		npc.nAge = 23;
		npc.strMBTI = "INFP가 맞나?";
		npc.cPatch = 'J';
		npc.strMessage =
			"안녕하세요 취분트랙 정종배라고 합니다.\n" \
			"Slipknot의 Eyeless라는 노래를 굉장히 좋아합니다.\n" \
			"드림핵도 열심히 하고 있으니 보이면 친추해주시면 정말 기쁠 것 같습니다\n"\
			"(B3ll 이라는 닉을 사용하고 있어요)\n"\
			"시나리오 짜기 너무 힘드네요\n허허...";

		npc.vecBigImage.push_back("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");
		npc.vecBigImage.push_back("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");
		npc.vecBigImage.push_back("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@   @@@@@@@@@");
		npc.vecBigImage.push_back("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@        @@@@@@");
		npc.vecBigImage.push_back("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@          @@@@@");
		npc.vecBigImage.push_back("@@@@@@@@@@@@@@@@@@@@@@@@.   @@@@ ..            @@@");
		npc.vecBigImage.push_back("@@@@@@@@@     @@@@              .               @@");
		npc.vecBigImage.push_back("@@@@@@@@..    @@@                               @@");
		npc.vecBigImage.push_back("@@@@@@,                                         @@");
		npc.vecBigImage.push_back("@@@@@@                                          @@");
		npc.vecBigImage.push_back("@@@@@.                                          @@");
		npc.vecBigImage.push_back("@@@@@.                                      .   @@");
		npc.vecBigImage.push_back("@@@@@                                      ..   @@");
		npc.vecBigImage.push_back("@@@@@.                                    .     @@");
		npc.vecBigImage.push_back("@@@@@.                                  ......,@@@");
		npc.vecBigImage.push_back("@@@@@,.                                  ,,,-,.@@@");
		npc.vecBigImage.push_back("@@@@@...                    :;~          ----@@@@@");
		npc.vecBigImage.push_back("@@@@@,...  .               :=$=;         ,- @@@@@@");
		npc.vecBigImage.push_back("@@@@@@,,  :*               ;=$**.         .@@@@@@@");
		npc.vecBigImage.push_back("@@@@@@@.  =$,              ;=#=*.          @@@@@@@");
		npc.vecBigImage.push_back("@@@@@@@  .=$~    .=!       -$$$!           @@@@@@@");
		npc.vecBigImage.push_back("@@@@@@@. .=$.    !$$,       -;~           @@@@@@@@");
		npc.vecBigImage.push_back("@@@@@@@.. !*     :$$.                     @@@@@@@@");
		npc.vecBigImage.push_back("@@@@@@@.. .      ,$$,    .                @@@@@@@@");
		npc.vecBigImage.push_back("@@@@@@@, .      .*;:$~   .                @@@@@@@@");
		npc.vecBigImage.push_back("@@@@@@@-..      ~!. -~  ..      .        .@@@@@@@@");
		npc.vecBigImage.push_back("@@@@@@@@....  .      ...,....... ...     @@@@@@@@@");
		npc.vecBigImage.push_back("@@@@@@@@,............,-,......,.......   @@@@@@@@@");
		npc.vecBigImage.push_back("@@@@@@@@@.......,,---,,....,,,,,,,,,....;@@@@@@@@@");
		npc.vecBigImage.push_back("@@@@@@@@@,........,....,,,,,,,,,,,,,,,..@@@@@@@@@@");
		npc.vecBigImage.push_back("@@@@@@@@@@.....,.....,,,,,,,,,,---,,,,,@@@@@@@@@@@");
		npc.vecBigImage.push_back("@@@@@@@@@@@....,.,.,,,,,,,---------,,,@@@@@@@@@@@@");
		npc.vecBigImage.push_back("@@@@@@@@@@@@..,--~:;;:::::::~~~~----*,@@@@@@@@@@@@");
		npc.vecBigImage.push_back("@@@@@@@@@@@@, !#@@@@@$===#@@@###*:~:@@@@@@@@@@@@@@");
		npc.vecBigImage.push_back("@@@@@@@@@@@@-$##@@@@@@@@@@@@@@@@@#@@@@@@@@@@@@@@@@");
		npc.vecBigImage.push_back("@@@@@@@@@@@#$###@@@@@@@@@@@@@@@@@#$@@@@@@@@@@@@@@@");
		npc.vecBigImage.push_back("@@@@@@@@@@#$$####@@@@@@@@@@@@@@@@@##@@@@@@@@@@@@@@");
		npc.vecBigImage.push_back("@@@@@@@@@@#########@@@@@@@@@@@@@@###@@@@@@@@@@@@@@");
		npc.vecBigImage.push_back("@@@@@@@@@@$#########@@@@@@@#@@@@@@##@@@@@@@@@@@@@@");
		npc.vecBigImage.push_back("@@@@@@@@@@###########@@@@@@##@@@@@@##@@@@@@@@@@@@@");
		npc.vecBigImage.push_back("@@@@@@@@@####################@#@@@@##@@@@@@@@@@@@@");
		npc.vecBigImage.push_back("@@@@@@@@@######################@@@@@#@@@@@@@@@@@@@");
		npc.vecBigImage.push_back("@@@@@@@@@###################=####@@##@@@@@@@@@@@@@");
		npc.vecBigImage.push_back("@@@@@@@@@#################$, $###@@@##@@@@@@@@@@@@");
		npc.vecBigImage.push_back("@@@@@@@@######@#########$:   $###@####@@@@@@@@@@@@");
		npc.vecBigImage.push_back("@@@@@@@@###############*     $###@@@##@@@@@@@@@@@@");
		npc.vecBigImage.push_back("@@@@@@@@####@#@######;.      =###@@@#$@@@@@@@@@@@@");
		npc.vecBigImage.push_back("@@@@@@@@##########$;,        ;###@#@#$@@@@@@@@@@@@");
		npc.vecBigImage.push_back("@@@@@@@@#########$.          -##@@###$@@@@@@@@@@@@");
		npc.vecBigImage.push_back("@@@@@@@@####@@##@:            ###@@###@@@@@@@@@@@@");

		npc.vecSmallImage.push_back("@@@@@@@@@@@@@@@@@@@@@@@@@");
		npc.vecSmallImage.push_back("@@@@@@@@@@@@@@@@@@@  @@@@");
		npc.vecSmallImage.push_back("@@@@@@@@@@@@@ @@@.     @@");
		npc.vecSmallImage.push_back("@@@@                    @");
		npc.vecSmallImage.push_back("@@@                     @");
		npc.vecSmallImage.push_back("@@.                     @");
		npc.vecSmallImage.push_back("@@.                  .  @");
		npc.vecSmallImage.push_back("@@.                 .,,.@");
		npc.vecSmallImage.push_back("@@..         .*~     --@@");
		npc.vecSmallImage.push_back("@@@. *       :$=     .@@@");
		npc.vecSmallImage.push_back("@@@. $  -*.   *:      @@@");
		npc.vecSmallImage.push_back("@@@. ;  -$-          @@@@");
		npc.vecSmallImage.push_back("@@@,.   : = .       .@@@@");
		npc.vecSmallImage.push_back("@@@@.......,....... .@@@@");
		npc.vecSmallImage.push_back("@@@@@....,,..,,,,,..@@@@@");
		npc.vecSmallImage.push_back("@@@@@..,..,,,,,--,,,@@@@@");
		npc.vecSmallImage.push_back("@@@@@@.;!**;!***:-;@@@@@@");
		npc.vecSmallImage.push_back("@@@@@#=#@@@@@@@@@#@@@@@@@");
		npc.vecSmallImage.push_back("@@@@@####@@@@@@@@#@@@@@@@");
		npc.vecSmallImage.push_back("@@@@@#####@@@#@@###@@@@@@");
		npc.vecSmallImage.push_back("@@@@@##########@@@#@@@@@@");
		npc.vecSmallImage.push_back("@@@@@########*:#@@#@@@@@@");
		npc.vecSmallImage.push_back("@@@@#######$; -#@@#@@@@@@");
		npc.vecSmallImage.push_back("@@@#######-   -#@##@@@@@@");
		npc.vecSmallImage.push_back("@@@@##@#$     ,#@@#@@@@@@");

		npc.strContents1 =
			"(눈을 떠보니 낯선 천장....\n" \
			"이 아니라 하늘이다.)\n" \
			"어라? 내가 어제 밖에서 잤었나?\n"\
			"(주위를 둘러 보며)\n"\
			"일단 움직여 보자\n";
		npc.strContents2 =
			"아직까진 버틸만 하구만\n";
		npc.strContents3 =
			"아.......\n"\
			"집 가고 싶다....\n";
		npc.strContents4 =
			"고생했다...\n"\
			"이제 집가자....\n";

		vecNPC.push_back(npc);
	}
}

void QuestInfo::QueryQuestObject(std::vector<ST_QUEST_OBJECT>& vecQuestObject)
{
	ST_QUEST_OBJECT stObject;
	stObject.nQuestObjectId = 262;
	stObject.strName = "갤럭시S 21 Ultra";
	stObject.cPatch = 'S';
	stObject.x = 21;
	stObject.y = 17;
	stObject.z = 5;
	stObject.reserved = 0;
	vecQuestObject.push_back(stObject);
}

void QuestInfo::QueryQuest(std::vector<ST_QUEST_DATA>& vecQuest)
{
	// 정종배
	{
		ST_QUEST_DATA stQuest;
		stQuest.nNpcId = 144;
		stQuest.StartCondition = ST_FILTER(144, 0X0000, 0X0001);
		stQuest.vecMessages.push_back("으어.....");
		stQuest.vecMessages.push_back("겁나 피곤하네\n첫 수업 과제부터 퍼징이라니....");
		stQuest.vecMessages.push_back("그나저나 내 폰 어디에다가 떨어트렸지?");
		stQuest.vecMessages.push_back("친구야 혹시 내 핸드폰 좀 갖다줄 수 있어??");
		stQuest.vecMessages.push_back("아마 5층 (21, 17)지점에 두고 온 거 같아");
		stQuest.ClearCondition = ST_FILTER(144, 0x0003);
		vecQuest.push_back(stQuest);
	}

	// 스마트폰
	{
		ST_QUEST_DATA stQuest;
		stQuest.nNpcId = 262;
		stQuest.StartCondition = ST_FILTER(144, 0x0001, 0x0003);
		stQuest.vecMessages.push_back("네모난 뭔가가 있다.");
		stQuest.vecMessages.push_back("이건가?");
		stQuest.vecMessages.push_back("[갤럭시S 21 Ultra]를 획득했습니다.");
		stQuest.ClearCondition = ST_FILTER(144, 0x0007);
		vecQuest.push_back(stQuest);
	}

	// 정종배
	{
		ST_QUEST_DATA stQuest;
		stQuest.nNpcId = 144;
		stQuest.StartCondition = ST_FILTER(144, 0x0003, 0x0007);
		stQuest.vecMessages.push_back("오 고마워");
		stQuest.vecMessages.push_back("이게 없으면 QR체크인을 못하거든");
		stQuest.vecMessages.push_back("오랜만에 센터에 왔는데 다시 돌아갈 순 없지");
		stQuest.ClearCondition = ST_FILTER(144, 0x000F);
		vecQuest.push_back(stQuest);

	}
}