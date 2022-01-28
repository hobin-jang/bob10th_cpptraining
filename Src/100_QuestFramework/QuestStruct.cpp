#include "pch.h"
#include "QuestStruct.h"

double ST_QUEST_NPC_DATA::CalcLevelOfCompletion(void)
{
	double dScore = 0;
	double dCount = 0;

	dCount ++;		if (!strTrack.empty())	dScore++;
	dCount ++;		if (!strName.empty())	dScore++;
	dCount ++;		if (!strMBTI.empty())	dScore++;
	dCount ++;		if (!strMessage.empty())	dScore++;
	dCount ++;		if (!vecBigImage.empty())	dScore++;
	dCount ++;		if (!(cPatch < 'A' || 'Z' < cPatch))	dScore++;
	dCount ++;		if (!vecSmallImage.empty())	dScore++;
	dCount ++;		if (!strContents1.empty())	dScore++;
	dCount ++;		if (!strContents2.empty())	dScore++;
	dCount ++;		if (!strContents3.empty())	dScore++;
	dCount ++;		if (!strContents4.empty())	dScore++;

	return dScore / dCount * 100;
}
