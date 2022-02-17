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
		npc.strTrack = "������м�Ʈ��";
		npc.strName = "������";
		npc.nAge = 23;
		npc.strMBTI = "INFP�� �³�?";
		npc.cPatch = 'J';
		npc.strMessage =
			"�ȳ��ϼ��� ���Ʈ�� �������� �մϴ�.\n" \
			"Slipknot�� Eyeless��� �뷡�� ������ �����մϴ�.\n" \
			"�帲�ٵ� ������ �ϰ� ������ ���̸� ģ�����ֽø� ���� ��� �� �����ϴ�\n"\
			"(B3ll �̶�� ���� ����ϰ� �־��)\n"\
			"�ó����� ¥�� �ʹ� ����׿�\n����...";

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
			"(���� ������ ���� õ��....\n" \
			"�� �ƴ϶� �ϴ��̴�.)\n" \
			"���? ���� ���� �ۿ��� �����?\n"\
			"(������ �ѷ� ����)\n"\
			"�ϴ� ������ ����\n";
		npc.strContents2 =
			"�������� ��ƿ�� �ϱ���\n";
		npc.strContents3 =
			"��.......\n"\
			"�� ���� �ʹ�....\n";
		npc.strContents4 =
			"����ߴ�...\n"\
			"���� ������....\n";

		vecNPC.push_back(npc);
	}
}

void QuestInfo::QueryQuestObject(std::vector<ST_QUEST_OBJECT>& vecQuestObject)
{
	ST_QUEST_OBJECT stObject;
	stObject.nQuestObjectId = 262;
	stObject.strName = "������S 21 Ultra";
	stObject.cPatch = 'S';
	stObject.x = 21;
	stObject.y = 17;
	stObject.z = 5;
	stObject.reserved = 0;
	vecQuestObject.push_back(stObject);
}

void QuestInfo::QueryQuest(std::vector<ST_QUEST_DATA>& vecQuest)
{
	// ������
	{
		ST_QUEST_DATA stQuest;
		stQuest.nNpcId = 144;
		stQuest.StartCondition = ST_FILTER(144, 0X0000, 0X0001);
		stQuest.vecMessages.push_back("����.....");
		stQuest.vecMessages.push_back("�̳� �ǰ��ϳ�\nù ���� �������� ��¡�̶��....");
		stQuest.vecMessages.push_back("�׳����� �� �� ��𿡴ٰ� ����Ʈ����?");
		stQuest.vecMessages.push_back("ģ���� Ȥ�� �� �ڵ��� �� ������ �� �־�??");
		stQuest.vecMessages.push_back("�Ƹ� 5�� (21, 17)������ �ΰ� �� �� ����");
		stQuest.ClearCondition = ST_FILTER(144, 0x0003);
		vecQuest.push_back(stQuest);
	}

	// ����Ʈ��
	{
		ST_QUEST_DATA stQuest;
		stQuest.nNpcId = 262;
		stQuest.StartCondition = ST_FILTER(144, 0x0001, 0x0003);
		stQuest.vecMessages.push_back("�׸� ������ �ִ�.");
		stQuest.vecMessages.push_back("�̰ǰ�?");
		stQuest.vecMessages.push_back("[������S 21 Ultra]�� ȹ���߽��ϴ�.");
		stQuest.ClearCondition = ST_FILTER(144, 0x0007);
		vecQuest.push_back(stQuest);
	}

	// ������
	{
		ST_QUEST_DATA stQuest;
		stQuest.nNpcId = 144;
		stQuest.StartCondition = ST_FILTER(144, 0x0003, 0x0007);
		stQuest.vecMessages.push_back("�� ����");
		stQuest.vecMessages.push_back("�̰� ������ QRüũ���� ���ϰŵ�");
		stQuest.vecMessages.push_back("�������� ���Ϳ� �Դµ� �ٽ� ���ư� �� ����");
		stQuest.ClearCondition = ST_FILTER(144, 0x000F);
		vecQuest.push_back(stQuest);

	}
}