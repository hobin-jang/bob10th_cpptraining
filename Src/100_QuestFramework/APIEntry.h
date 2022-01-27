#pragma once

#include <vector>
#include "QuestStruct.h"
#include "IQuestInfo.h"

#define DLL_API extern "C" __declspec(dllexport)

void ExportAPIEntry(IQuestInfo* pIntance);

typedef int (*FP_QueryNpcEx)(std::vector<ST_QUEST_NPC_DATA>& vecNpcInfo);
DLL_API int QueryNpcEx(std::vector<ST_QUEST_NPC_DATA>& vecNpcInfo);

typedef void (*FP_QueryQuestObject)(std::vector<ST_QUEST_OBJECT>& vecQuestObject);
DLL_API void QueryQuestObject(std::vector<ST_QUEST_OBJECT>& vecQuest);

typedef int (*FP_QueryQuest)(std::vector<ST_QUEST_DATA>& vecQuest);
DLL_API void QueryQuest(std::vector<ST_QUEST_DATA>& vecQuest);
