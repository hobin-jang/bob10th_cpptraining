#include "stdafx.h"

void PrintImage(std::vector<std::string> buffer)
{
    for (auto line : buffer)
        printf("%s\n", line.c_str());
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

        FreeLibrary(hModule);
    } while (FindNextFile(hFind, &stFindData));

    FindClose(hFind);
    return 0;
}
