#include "stdafx.h"

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

        FP_QueryNpc fpQueryNpc = (FP_QueryNpc)GetProcAddress(hModule, "QueryNpc");
        if (fpQueryNpc)
        {
            ST_NPC_INFO stNpcInfo;
            fpQueryNpc(&stNpcInfo);

            printf("필드 문자: %c\n", stNpcInfo.patch);
            printf("이름: %s\n", stNpcInfo.szName);
            printf("인사말: %s\n", stNpcInfo.szGreetMessage);

            for (std::string strLine : stNpcInfo.vecBuffer)
                printf("%s\n", strLine.c_str());
        }

        FreeLibrary(hModule);
    } while (FindNextFile(hFind, &stFindData));

    FindClose(hFind);
    return 0;
}
