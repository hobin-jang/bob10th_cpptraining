#include "pch.h"
#include "NpcContainer.h"

CNpcContainer::CNpcContainer(void)
{
}

CNpcContainer::~CNpcContainer(void)
{
}

void CNpcContainer::Load(void)
{
    m_vecNPCInfo.clear();

    WIN32_FIND_DATAA stFindData;

    HANDLE hFind = FindFirstFileA("*.dll", &stFindData);
    if (INVALID_HANDLE_VALUE == hFind)
    {
        printf("Quest DLL is not found.\n");
        return;
    }

    do
    {
        printf("---------- %s\n", stFindData.cFileName);

        HMODULE hModule = LoadLibraryA(stFindData.cFileName);
        if (INVALID_HANDLE_VALUE == hModule)
        {
            printf("LoadLibrary(%s) failure.\n", stFindData.cFileName);
            continue;
        }

        FP_QueryNpc fpQueryNpc = (FP_QueryNpc)GetProcAddress(hModule, "QueryNpc");
        if (fpQueryNpc)
        {
            ST_NPC_INFO stNpcInfo;
            fpQueryNpc(&stNpcInfo);

            m_vecNPCInfo.push_back(stNpcInfo);
        }

        FreeLibrary(hModule);
    } while (FindNextFileA(hFind, &stFindData));

    FindClose(hFind);
}

const ST_NPC_INFO* CNpcContainer::GetNpcInfo(int nIndex)
{
    if (nIndex < m_vecNPCInfo.size())
        return &m_vecNPCInfo[nIndex];

    return nullptr;
}