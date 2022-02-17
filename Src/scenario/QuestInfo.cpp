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
}

void CQuestInfo::QueryQuestObject(std::vector<ST_QUEST_OBJECT>& vecQuestObject)
{
	{
		ST_QUEST_OBJECT stObject;
		stObject.nQuestObjectId = 290;
		stObject.strName = "1단계1차시험";
		stObject.cPatch = 'B';
		stObject.x = 12;
		stObject.y = 19;
		stObject.z = 16;
		stObject.reserved = 0;
		vecQuestObject.push_back(stObject);
	}
}

void CQuestInfo::QueryQuestItem(std::vector<ST_QUEST_ITEM_DATA>& vecQuestItem)
{
	{
		ST_QUEST_ITEM_DATA item;
		item.btId = 128;
		item.strName = "엘릭서";
		item.strDesc = "모든 체력과 정신력을 회복시켜준다.";
		item.nHP = 9999;
		item.nMP = 9999;
		vecQuestItem.push_back(item);
	}
	{
		ST_QUEST_ITEM_DATA item;
		item.btId = 129;
		item.strName = "수료메달";
		item.strDesc = "BoB 수료생에게 전달된다. 아무 효과는 없다. 그저 명예일 뿐..";
		item.nHP = 0;
		item.nMP = 0;
		vecQuestItem.push_back(item);
	}
	{
		ST_QUEST_ITEM_DATA item;
		item.btId = 136;
		item.strName = "1단계1차시험통과도장";
		item.strDesc = "1단계1차시험을 통과한 자들에게 주어지는 도장";
		item.nHP = 0;
		item.nMP = 0;
		vecQuestItem.push_back(item);
	}
}

void CQuestInfo::QueryQuestMonster(std::vector<ST_QUEST_MONSTER_DATA>& vecQuestMonster)
{
	{
		ST_QUEST_MONSTER_DATA monster;
		monster.dwMonsterId = 20001;
		monster.strName = "최종수료시험";
		monster.btLevel = 99;
		monster.nHP = 9999;
		monster.btAttack = 30;
		monster.btDex = 7;
		monster.btVulnerability = JOB_TYPE_NOVICE;
		monster.nRewardMoney= 5000;
		monster.nRewardExp = 50000;
		monster.vecRewardItems.push_back(128);	// 엘릭서
		vecQuestMonster.push_back(monster);
	}
	{
		ST_QUEST_MONSTER_DATA monster;
		monster.dwMonsterId = 20002;
		monster.strName = "3차개발과제";
		monster.btLevel = 99;
		monster.nHP = 999;
		monster.btAttack = 50;
		monster.btDex = 7;
		monster.btVulnerability = JOB_TYPE_DEVELOPER;
		monster.nRewardMoney = 5000;
		monster.nRewardExp = 50000;
		monster.vecRewardItems.push_back(3);	// 제육덮밥
		vecQuestMonster.push_back(monster);
	}
	{
		ST_QUEST_MONSTER_DATA monster;
		monster.dwMonsterId = 20003;
		monster.strName = "3차포렌식과제";
		monster.btLevel = 99;
		monster.nHP = 999;
		monster.btAttack = 50;
		monster.btDex = 7;
		monster.btVulnerability = JOB_TYPE_INVESTIGATOR;
		monster.nRewardMoney = 5000;
		monster.nRewardExp = 50000;
		monster.vecRewardItems.push_back(6);	// 뚱마카롱
		vecQuestMonster.push_back(monster);
	}
	{
		ST_QUEST_MONSTER_DATA monster;
		monster.dwMonsterId = 20004;
		monster.strName = "3차컨설팅과제";
		monster.btLevel = 99;
		monster.nHP = 999;
		monster.btAttack = 50;
		monster.btDex = 7;
		monster.btVulnerability = JOB_TYPE_CONSULTANT;
		monster.nRewardMoney = 5000;
		monster.nRewardExp = 50000;
		monster.vecRewardItems.push_back(7);	// 커피
		vecQuestMonster.push_back(monster);
	}
	{
		ST_QUEST_MONSTER_DATA monster;
		monster.dwMonsterId = 20005;
		monster.strName = "3차분석과제";
		monster.btLevel = 99;
		monster.nHP = 999;
		monster.btAttack = 50;
		monster.btDex = 7;
		monster.btVulnerability = JOB_TYPE_ANALYST;
		monster.nRewardMoney = 5000;
		monster.nRewardExp = 50000;
		monster.vecRewardItems.push_back(8);	// 에너지드링크
		vecQuestMonster.push_back(monster);
	}
	{
		ST_QUEST_MONSTER_DATA monster;
		monster.dwMonsterId = 20006;
		monster.strName = "1단계1차시험";
		monster.btLevel = 17;
		monster.nHP = 300;
		monster.btAttack = 25;
		monster.btDex = 5;
		monster.btVulnerability = JOB_TYPE_NOVICE;
		monster.nRewardMoney = 5000;
		monster.nRewardExp = 2000;
		monster.vecRewardItems.push_back(2);
		monster.vecRewardItems.push_back(5);
		vecQuestMonster.push_back(monster);
	}
}

void CQuestInfo::QueryQuest(std::vector<ST_QUEST_DATA>& vecQuest)
{
	{
		ST_QUEST_DATA quest;
		quest.nNpcId = 1;
		quest.StartCondition = ST_FILTER(1, 0x0000, 0x0001);
		quest.ClearCondition = ST_FILTER(1, 0x0003);
		quest.vecMessages.push_back("축하하네.");
		quest.vecMessages.push_back("드디어 최종층까지 올라왔구나.");
		quest.vecMessages.push_back("그럼 지금까지의 실력을 한번 평가해볼까?");
		quest.vecMessages.push_back("...");
		quest.vecMessages.push_back(".......");
		quest.vecMessages.push_back("구구궁.......");
		quest.vecMessages.push_back("구구구구궁.......");
		quest.vecMessages.push_back("구구구구구구구구궁.......");
		quest.vecMessages.push_back("(이.. 이건 무슨소리지..?)");
		quest.vecMessages.push_back("(뒤야!!!)");
		quest.vecMessages.push_back("(아니... 이건..!!)");
		quest.vecMessages.push_back("(조심해!! 사방에서 몰려오고 있어!!)");
		quest.vecMessages.push_back("으하하!!!");
		quest.vecMessages.push_back("각오해라!! 최종시련이다------!");
		quest.ClearBattle.btMinPlayerCount = 1;
		quest.ClearBattle.vecMonster.push_back(20001);
		quest.ClearBattle.vecMonster.push_back(20002);
		quest.ClearBattle.vecMonster.push_back(20003);
		quest.ClearBattle.vecMonster.push_back(20004);
		quest.ClearBattle.vecMonster.push_back(20005);
		vecQuest.push_back(quest);
	}
	{
		ST_QUEST_DATA quest;
		quest.nNpcId = 1;
		quest.StartCondition = ST_FILTER(1, 0x0003, 0xFFFF);
		quest.ClearCondition = ST_FILTER(1, 0xFFFF);
		quest.vecMessages.push_back("책임감 있게");
		quest.vecMessages.push_back("임무를 수행해줘서 고맙네");
		quest.vecMessages.push_back("멘티 생활이");
		quest.vecMessages.push_back("토나오게 힘들었을 수도 있었겠지만");
		quest.vecMessages.push_back("들 힘들다 말면 BoB 하는 맛이 떨어지지 않았겠나?");
		quest.vecMessages.push_back("열정을 가지고 살다보면 언젠가는 반드시");
		quest.vecMessages.push_back("번창하는 날이 있을걸세");
		quest.vecMessages.push_back("말해 뭐하겠나");
		quest.vecMessages.push_back("걸어가다 보면 끝이 보일걸세");
		quest.vecMessages.push_back("어디서나 자랑스런 BoB인이라는 것을 잊지 말게나");
		quest.vecRewardItems.push_back(129);
		vecQuest.push_back(quest);
	}
	{
		ST_QUEST_DATA quest;
		quest.nNpcId = 290;
		quest.StartCondition = ST_FILTER(0, 0x000F, 0x001F);
		quest.ClearCondition = ST_FILTER(290, 0x0001);
		quest.vecMessages.push_back("너가 그동안의 수업에 열심히 참여했다면...");
		quest.vecMessages.push_back("나를 쉽게 통과할 수 있을거야!");
		quest.ClearBattle.vecMonster.push_back(20006);
		vecQuest.push_back(quest);
	}
	{
		ST_QUEST_DATA quest;
		quest.nNpcId = 10004;		// 계단 사물 아이디
		quest.StartCondition = ST_FILTER(0, 0x000F, 0x000F);
		quest.ClearCondition = ST_FILTER(290, 0xFFFF);
		quest.vecMessages.push_back("보스가 날 노려보고 있다...");
		vecQuest.push_back(quest);
	}
	{
		ST_QUEST_DATA quest;
		quest.nNpcId = 290;
		quest.StartCondition = ST_FILTER(290, 0x0001, 0xFFFF);
		quest.ClearCondition = ST_FILTER(290, 0xFFFF);
		quest.vecMessages.push_back("와 1단계교육 열심히 들었구나bb");
		quest.vecMessages.push_back("2달 간의 공통교육과 트랙교육은 어땠어?");
		quest.vecMessages.push_back("2차 교육은 3개월간 팀프로젝트를 수행하는 거야.");
		quest.vecMessages.push_back("관심있는 주제를 선택해서 마음 맞는 팀원들과 함께");
		quest.vecMessages.push_back("열심히 하여 좋은 결과를 얻을 수 있길 응원할게!");
		quest.vecRewardItems.push_back(136);
		vecQuest.push_back(quest);
	}
}
