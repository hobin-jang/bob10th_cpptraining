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

void CQuestInfo::QueryNpc(std::vector<ST_NPC_INFO>& vecNPC)
{
}

void CQuestInfo::QueryNpcEx(std::vector<ST_QUEST_NPC_DATA>& vecNPC)
{
    {
        ST_QUEST_NPC_DATA npc;
        npc.x = 6;
        npc.y = 5;
        npc.z = 5;
        npc.nNpcID = 129;
        npc.strTrack = "µðÁöÅÐÆ÷·»½ÄÆ®·¢";
        npc.strName = "±è´ë±â (D_wit)";
        npc.nAge = 25;
        npc.strMBTI = "Á¤»ó";
        npc.cPatch = 'D';
        npc.strMessage = "¹ä¼ÜÀº ÄíÃ¾...";
        npc.strMessage = "ÄíÄí´Â À§ÇèÇØ... ÇÔºÎ·Î °ÇµéÁö ¸¶...";


        npc.vecBigImage.push_back("                                        ");
        npc.vecBigImage.push_back("                                        ");
        npc.vecBigImage.push_back("               .~;=$$=:,                ");
        npc.vecBigImage.push_back("             -!*===$$==**~              ");
        npc.vecBigImage.push_back("            ;====$$=$*==***             ");
        npc.vecBigImage.push_back("          ,*====$$$$$==#$$$*            ");
        npc.vecBigImage.push_back("         .=$#$$==$$####@##$$!           ");
        npc.vecBigImage.push_back("         *=###$#######@@@@##=.          ");
        npc.vecBigImage.push_back("        ,=#@#$#@@@#@@@@@@@@@#*          ");
        npc.vecBigImage.push_back("        *$@@@#@@@###@##@@#@@@$,         ");
        npc.vecBigImage.push_back("        *$@@@#@@@###@##@@#@@@$,         ");
        npc.vecBigImage.push_back("        =#@@@######@@@#@@@#@##~         ");
        npc.vecBigImage.push_back("       *$#@#$=**==$####@#@#@##~         ");
        npc.vecBigImage.push_back("       =###=~--,-~:*##@@#@@@##*         ");
        npc.vecBigImage.push_back("       #@##:,.......-::;*##@##=         ");
        npc.vecBigImage.push_back("       :##$-...........,-~;#@#*         ");
        npc.vecBigImage.push_back("        ##=,...   ..  ..,,-!##~         ");
        npc.vecBigImage.push_back("        $$~,,,,,.   .,-~~~--#$.         ");
        npc.vecBigImage.push_back("        -$-.-----,..,--,~~--=!          ");
        npc.vecBigImage.push_back("         =-...,,,...,,:;-,,,;~          ");
        npc.vecBigImage.push_back("         *-.,~~$~.  .,.*~-,,:~          ");
        npc.vecBigImage.push_back("         :,.   ..   . .,...,~.          ");
        npc.vecBigImage.push_back("         --         ..    .,-.          ");
        npc.vecBigImage.push_back("         ,-.     .  ..    .,,.          ");
        npc.vecBigImage.push_back("         .,.     .. .,.  ..,.           ");
        npc.vecBigImage.push_back("          ..    . ;.;,,  ..,.           ");
        npc.vecBigImage.push_back("           ,.    ...,.   ..-            ");
        npc.vecBigImage.push_back("           ..     .........,            ");
        npc.vecBigImage.push_back("            ..  ..,,,,,....             ");
        npc.vecBigImage.push_back("            ,. .,~---~,..,,             ");
        npc.vecBigImage.push_back("            .,......,...,,              ");
        npc.vecBigImage.push_back("             ,,....,,,..,-              ");
        npc.vecBigImage.push_back("             ,,,......,,--              ");
        npc.vecBigImage.push_back("             .,-,....,-~--              ");
        npc.vecBigImage.push_back("            ,..,-----~~-,,:             ");
        npc.vecBigImage.push_back("           =,...,--~~~-,,,-$            ");
        npc.vecBigImage.push_back("        -$$;,.....,,-,,,,,--$*          ");
        npc.vecBigImage.push_back("      ,$$##$,.......,,,,,,--##$*-       ");
        npc.vecBigImage.push_back("    ~$$$@###~.......,,..,,-~@@##$$:.    ");
        npc.vecBigImage.push_back("  :=$$#@@@@##~......,..,,,-$@@@###$$!   ");
        npc.vecBigImage.push_back(".$####@@@@@#@#*,.......,-~$@@@@@#####$! ");
        npc.vecBigImage.push_back("#####@@@@@@@@@@@$--,,,-;#@@@@@@@#@@####=");
        npc.vecBigImage.push_back("#@@@@@@@@@@@@@@@@@@##@@@@@@@@@@@@@#@####");
        npc.vecBigImage.push_back("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@##");
        npc.vecBigImage.push_back("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@#");
        npc.vecBigImage.push_back("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");
        npc.vecBigImage.push_back("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");
        npc.vecBigImage.push_back("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");
        npc.vecBigImage.push_back("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");
        npc.vecBigImage.push_back("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");
        npc.vecBigImage.push_back("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");
        npc.vecBigImage.push_back("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");
        npc.vecBigImage.push_back("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");

        vecNPC.push_back(npc);
    }
}

void CQuestInfo::QueryQuestObject(std::vector<ST_QUEST_OBJECT>& vecQuestObject)
{
}

void CQuestInfo::QueryQuest(std::vector<ST_QUEST_DATA>& vecQuest)
{
}