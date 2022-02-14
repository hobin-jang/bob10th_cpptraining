#include "stdafx.h"

void PrintImage(std::vector<std::string> buffer)
{
	for (auto line : buffer)
		printf("%s\n", line.c_str());
}

void RunMiniGame(HMODULE hModule, CDlgSuper* pDlg)
{
	FP_InitMiniGame fpInitMiniGame = (FP_InitMiniGame)GetProcAddress(hModule, "InitMiniGame");
	if (nullptr == fpInitMiniGame)
	{
		printf("미니게임을 초기화할 수 없습니다.(InitMiniGame을 찾을 수 없음)\n");
		return;
	}

	system("cls");

	ST_GAME_DATA GameData;
	GameData.dwFPS = 30;
	GameData.nConsoleW = 80;
	GameData.nConsoleH = 40;
	GameData.nBackBufferWidth = 78;
	GameData.nBackBufferHeight = 26;
	GameData.input.Register(VK_LEFT, GAMEKEY_LEFT);
	GameData.input.Register(VK_RIGHT, GAMEKEY_RIGHT);
	GameData.input.Register(VK_UP, GAMEKEY_UP);
	GameData.input.Register(VK_DOWN, GAMEKEY_DOWN);
	GameData.input.Register(VK_SPACE, GAMEKEY_SELECT);
	GameData.input.Register(VK_RETURN, GAMEKEY_MENU);
	GameData.input.Register(VK_OEM_3, GAMEKEY_CHAT);
	GameData.input.Register(VK_ESCAPE, GAMEKEY_ESC);
	GameData.strTitle = "미니게임 테스트";
	GameData.dwKeyRepeatInterval = 200;
	InitGame(&GameData);

	fpInitMiniGame(g_pGameData);

	pDlg->DoModal();
}

int main()
{
	WIN32_FIND_DATA stFindData;

	HANDLE hFind = FindFirstFile(TEXT("*.dll"), &stFindData);
	if (INVALID_HANDLE_VALUE == hFind)
	{
		printf("Quest DLL is not found.\n");
		return -1;
	}

	do
	{ 
		wprintf(L"---------- %s\n", stFindData.cFileName);

		HMODULE hModule = LoadLibrary(stFindData.cFileName);
		if (INVALID_HANDLE_VALUE == hModule)
		{
			printf("LoadLibrary failure.\n");
			continue;
		}

		FP_QueryNpcEx fpQueryNpcEx = (FP_QueryNpcEx)GetProcAddress(hModule, "QueryNpcEx");
		if (fpQueryNpcEx)
		{
			std::vector<ST_QUEST_NPC_DATA> vecNpcInfo;
			fpQueryNpcEx(vecNpcInfo);

			if (vecNpcInfo.empty())
				printf("Npc가 하나도 없네 :(\n");

			for (ST_QUEST_NPC_DATA& npc : vecNpcInfo)
			{
				printf("[%s] 완성도: %.1lf%%\n", npc.strName.c_str(), npc.CalcLevelOfCompletion());
				
				printf("이름:%s\n", npc.strName.c_str());
				if (npc.strName.empty())
					printf("  ->> 없군요 ㅠㅠ\n");

				printf("트랙:%s\n", npc.strTrack.c_str());
				if (npc.strTrack.empty())
					printf("  ->> 없군요 ㅠㅠ\n");

				printf("MBTI:%s\n", npc.strMBTI.c_str());
				if (npc.strMBTI.empty())
					printf("  ->> 없군요 ㅠㅠ\n");

				printf("인사말:%s\n", npc.strMessage.c_str());
				if (npc.strMessage.empty())
					printf("  ->> 없군요 ㅠㅠ\n");

				printf("화면상 문자:%c\n", npc.cPatch);
				if (npc.cPatch < 'A' || 'Z' < npc.cPatch)
					printf("  ->> 가급적 대문자로 만들어주세요~\n");

				printf("시나리오 대사1\n");
				if (npc.strContents1.empty())
					printf("  ->> 없군요 ㅠㅠ 게임 시작시 인트로멘트로 보여줍니다.\n");

				printf("시나리오 대사2\n");
				if (npc.strContents2.empty())
					printf("  ->> 없군요 ㅠㅠ 전직 후로 보여줍니다.\n");

				printf("시나리오 대사3\n");
				if (npc.strContents3.empty())
					printf("  ->> 없군요 ㅠㅠ 팀 프로젝트 이후로 보여줍니다.\n");

				printf("시나리오 대사4\n");
				if (npc.strContents4.empty())
					printf("  ->> 없군요 ㅠㅠ 엔딩시에 보여줍니다.\n");

				printf("큰그림\n");
				if(npc.vecBigImage.empty())
					printf("  ->> 없군요 ㅠㅠ 게임 캐릭터 고를 때 보여줍니다.\n");
				PrintImage(npc.vecBigImage);
				
				printf("작은그림\n");
				if (npc.vecSmallImage.empty())
					printf("  ->> 없군요 ㅠㅠ 전투나 상태정보 화면에서 보여줍니다.\n");
				PrintImage(npc.vecSmallImage);
				printf("===============================\n\n");
			}
		}

		FP_QueryQuestItem fpQueryQuestItem = (FP_QueryQuestItem)GetProcAddress(hModule, "QueryQuestItem");
		if (fpQueryQuestItem)
		{
			std::vector<ST_QUEST_ITEM_DATA> vecQuestItem;
			fpQueryQuestItem(vecQuestItem);

			printf("[퀘스트 아이템]\n");
			for (ST_QUEST_ITEM_DATA item : vecQuestItem)
			{
				printf("Id:%u\n", item.btId);
				printf("Name:%s\n", item.strName.c_str());
				printf("Desc:%s\n", item.strDesc.c_str());
				printf("HP:%d\n", item.nHP);
				printf("MP:%d\n", item.nMP);
				printf("--------------\n");
			}
		}

		FP_QueryQuestMonster fpQueryQuestMonster = (FP_QueryQuestMonster)GetProcAddress(hModule, "QueryQuestMonster");
		if (fpQueryQuestMonster)
		{
			std::vector<ST_QUEST_MONSTER_DATA> vecQuestMonster;
			fpQueryQuestMonster(vecQuestMonster);

			printf("[퀘스트 몬스터]\n");
			for (ST_QUEST_MONSTER_DATA item : vecQuestMonster)
			{
				printf("Id:%u\n", item.dwMonsterId);
				printf("Name:%s\n", item.strName.c_str());
				printf("Lv:%u\n", item.btLevel);
				printf("HP:%d\n", item.nHP);
				printf("공격력:%u\n", item.btAttack);
				printf("행동속도:%u\n", item.btDex);
				printf("약점:%u\n", item.btVulnerability);
				printf("보상금:%u\n", item.wRewardMoney);
				printf("보상경험치:%u\n", item.dwRewardExp);
				printf("--------------\n");
			}
		}

		FP_QueryQuest fpQueryQuest = (FP_QueryQuest)GetProcAddress(hModule, "QueryQuest");
		if (fpQueryQuest)
		{
			std::vector<ST_QUEST_DATA> vecQuestData;
			fpQueryQuest(vecQuestData);

			printf("[퀘스트 데이터]\n");
			if (vecQuestData.empty())
			{
				printf("  ->> 없군요 ㅠㅠ 캐릭터의 퀘스트를 만들어봅시다.\n");
			}

			for (ST_QUEST_DATA quest : vecQuestData)
			{
				printf("--------------\n");
				for (std::string strMsg : quest.vecMessages)
					printf("퀘스트 대사: %s\n", strMsg.c_str());
				if (quest.pClearGame && IDYES == ::MessageBox(nullptr, TEXT("미니게임을 실행하겠습니까?"), TEXT("걍 궁금"), MB_YESNO))
					RunMiniGame(hModule, quest.pClearGame);
			}
		}

		FreeLibrary(hModule);
	} while (FindNextFile(hFind, &stFindData));

	FindClose(hFind);
	return 0;
}
