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
}

void CQuestInfo::QueryQuestMonster(std::vector<ST_QUEST_MONSTER_DATA>& vecQuestMonster)
{
	{
		ST_QUEST_MONSTER_DATA monster;
		monster.dwMonsterId = 20001;
		monster.strName = "최종수료시험";
		monster.btLevel = 99;
		monster.nHP = 1;
		monster.btAttack = 1;
		monster.btDex = 1;
		monster.btVulnerability = JOB_TYPE_MASTER;
		monster.wRewardMoney= 50000;
		monster.dwRewardExp = 9999;
		monster.vecRewardItems.push_back(128);	// 엘릭서
		vecQuestMonster.push_back(monster);
	}
	{
		ST_QUEST_MONSTER_DATA monster;
		monster.dwMonsterId = 20002;
		monster.strName = "3차개발과제";
		monster.btLevel = 99;
		monster.nHP = 1;
		monster.btAttack = 1;
		monster.btDex = 1;
		monster.btVulnerability = JOB_TYPE_DEVELOPER;
		monster.wRewardMoney = 500;
		monster.dwRewardExp = 999;
		monster.vecRewardItems.push_back(3);	// 제육덮밥
		vecQuestMonster.push_back(monster);
	}
	{
		ST_QUEST_MONSTER_DATA monster;
		monster.dwMonsterId = 20003;
		monster.strName = "3차포렌식과제";
		monster.btLevel = 99;
		monster.nHP = 1;
		monster.btAttack = 1;
		monster.btDex = 1;
		monster.btVulnerability = JOB_TYPE_FORENSICER;
		monster.wRewardMoney = 500;
		monster.dwRewardExp = 999;
		monster.vecRewardItems.push_back(6);	// 멘토님과 먹는 제육덮밥
		vecQuestMonster.push_back(monster);
	}
	{
		ST_QUEST_MONSTER_DATA monster;
		monster.dwMonsterId = 20004;
		monster.strName = "3차컨설팅과제";
		monster.btLevel = 99;
		monster.nHP = 1;
		monster.btAttack = 1;
		monster.btDex = 1;
		monster.btVulnerability = JOB_TYPE_CONSULTANT;
		monster.wRewardMoney = 500;
		monster.dwRewardExp = 999;
		monster.vecRewardItems.push_back(7);	// 커피
		vecQuestMonster.push_back(monster);
	}
	{
		ST_QUEST_MONSTER_DATA monster;
		monster.dwMonsterId = 20005;
		monster.strName = "3차분석과제";
		monster.btLevel = 99;
		monster.nHP = 1;
		monster.btAttack = 1;
		monster.btDex = 1;
		monster.btVulnerability = JOB_TYPE_ANALYST;
		monster.wRewardMoney = 500;
		monster.dwRewardExp = 999;
		monster.vecRewardItems.push_back(8);	// 에너지드링크
		vecQuestMonster.push_back(monster);
	}
}

void CQuestInfo::QueryQuest(std::vector<ST_QUEST_DATA>& vecQuest)
{
	{
		ST_QUEST_DATA quest;
		quest.nNpcId = 63;
		quest.StartCondition = ST_FILTER(63, 0x0000, 0x0001);
		quest.ClearCondition = ST_FILTER(63, 0x0001);
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
		quest.vecClearBattleEnemy.push_back(20001);
		quest.vecClearBattleEnemy.push_back(20002);
		quest.vecClearBattleEnemy.push_back(20003);
		quest.vecClearBattleEnemy.push_back(20004);
		quest.vecClearBattleEnemy.push_back(20005);
		vecQuest.push_back(quest);
	}
	{
		ST_QUEST_DATA quest;
		quest.nNpcId = 63;
		quest.StartCondition = ST_FILTER(63, 0x0001, 0xFFFF);
		quest.ClearCondition = ST_FILTER(63, 0xFFFF);
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
}
