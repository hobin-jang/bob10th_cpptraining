#pragma once

#include <vector>
#include "Struct.h"
#include "IQuestInfo.h"

#define DLL_API extern "C" __declspec(dllexport)

void ExportDllMain(void);
void ExportAPIEntry(IQuestInfo* pIntance);


typedef int (*FP_QueryNpc)(ST_NPC_INFO* pInfo);
DLL_API int QueryNpc(ST_NPC_INFO* outInfoArr);

typedef int (*FP_QueryNpcEx)(ST_QUEST_NPC_DATA* pInfo);
DLL_API int QueryNpcEx(ST_QUEST_NPC_DATA* outInfoArr);

typedef int (*FP_QueryQuest)(int nQuestID, int* pTargetNpcID, ST_QUEST_SEQUENCE* outInfoArr);
DLL_API int QueryQuest(int nQuestID, int* pTargetNpcID, ST_QUEST_SEQUENCE* outInfoArr);
