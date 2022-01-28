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
    ST_NPC_INFO npc;
    strcpy_s(npc.szName, 21, "김진욱 멘티");
    npc.patch = 'p';
    strcpy_s(npc.szGreetMessage, 61, "저희가 만든 게임 재밌을거에요~");

    npc.vecBuffer.resize(70);
    npc.vecBuffer[0] = "                                                            ";
    npc.vecBuffer[1] = "                             .,.                            ";
    npc.vecBuffer[2] = "                         ~~.~;**!;-                         ";
    npc.vecBuffer[3] = "                      ,;==****=====*~.                      ";
    npc.vecBuffer[4] = "                    .;**============**:                     ";
    npc.vecBuffer[5] = "                   -=========$====$====*,                   ";
    npc.vecBuffer[6] = "                  !====$$=$$==$=**=$=====:                  ";
    npc.vecBuffer[7] = "                ,*====$=$$====$=**=$======;.                ";
    npc.vecBuffer[8] = "               ~*===$===$$=$========$$=====!.               ";
    npc.vecBuffer[9] = "              ,;=====$==$$===$=========$==$=:               ";
    npc.vecBuffer[10] = "              :=$===$===*==**======$==$$$$==*,              ";
    npc.vecBuffer[11] = "             -*=========**=*=========$=$$$$$=:              ";
    npc.vecBuffer[12] = "             :=======*==**=============$$$$$$=.             ";
    npc.vecBuffer[13] = "             !=$$========*===$=======$===$$$$=;             ";
    npc.vecBuffer[14] = "            .*===========***=$$======$====$$$=*.            ";
    npc.vecBuffer[15] = "            ,====$==*==*!**====$====$$====$$$==,            ";
    npc.vecBuffer[16] = "            ,=======****!**==========$$=$===$==.            ";
    npc.vecBuffer[17] = "            ,*===*===!!****====*======$$$$====*.            ";
    npc.vecBuffer[18] = "             !====!!*~.,-~~~;!*****===$$$$$===!             ";
    npc.vecBuffer[19] = "             ;==*,..----,.   ..,-;*!;!**=$$$==:             ";
    npc.vecBuffer[20] = "             ,**; .-~~::~,    ..-~:~-~~~~*$$==.             ";
    npc.vecBuffer[21] = "              ;*~ .........   .,,,,,,,,-,-$$=~              ";
    npc.vecBuffer[22] = "              -!.  ..,~:,..   ,,,,:~~-,,,,;$!               ";
    npc.vecBuffer[23] = "              .:   .,,.;!,.   .,,-*:-~-,.,~*-               ";
    npc.vecBuffer[24] = "             . -    ...:-,    ..,,:-,-,..,-~,.              ";
    npc.vecBuffer[25] = "             . .      ....    ...,.,,,....,,..              ";
    npc.vecBuffer[26] = "              ..              ............,,..              ";
    npc.vecBuffer[27] = "              .               ...     ...,,...              ";
    npc.vecBuffer[28] = "              . .             ...     ...,,..               ";
    npc.vecBuffer[29] = "                .             ....    ...,,..               ";
    npc.vecBuffer[30] = "                .            .....  .....,,..               ";
    npc.vecBuffer[31] = "                          ,-,,--.........,...               ";
    npc.vecBuffer[32] = "                            .,,,.........,..                ";
    npc.vecBuffer[33] = "                           ....,...........                 ";
    npc.vecBuffer[34] = "                        .    ...,,,......                   ";
    npc.vecBuffer[35] = "                       .,,....----,......                   ";
    npc.vecBuffer[36] = "                       ........,,,,......                   ";
    npc.vecBuffer[37] = "                            ...........,                    ";
    npc.vecBuffer[38] = "                           ..,,....,,,,                     ";
    npc.vecBuffer[39] = "                    ...    .......,,,,.                     ";
    npc.vecBuffer[40] = "                    ...    ......,,,,,.                     ";
    npc.vecBuffer[41] = "                     ...     ...,,,,,,.                     ";
    npc.vecBuffer[42] = "                     ....  ....,,,,--,.                     ";
    npc.vecBuffer[43] = "                      ......,,,,,---,,.                     ";
    npc.vecBuffer[44] = "                      ...,,,-------,,,.                     ";
    npc.vecBuffer[45] = "                       ...,-~~~~--,,,,,                     ";
    npc.vecBuffer[46] = "                 :!     ..,,-----,,,.,~*,                   ";
    npc.vecBuffer[47] = "               ,*$;     ...,,,-,,,,.,,,*$~.                 ";
    npc.vecBuffer[48] = "               !=-.      ...,,,,,,...,,-*=*-                ";
    npc.vecBuffer[49] = "            . .;! .       ...,,,,,...,,-:==~,,.             ";
    npc.vecBuffer[50] = "           .....!          ...,,.....,,-:==~,,,,..          ";
    npc.vecBuffer[51] = "           . .  ..         ..........,,,;$*,,,,,,,,.        ";
    npc.vecBuffer[52] = "             ..  ..        .........,,,,!*-,,,,,,,,,,..     ";
    npc.vecBuffer[53] = "    .. .      .  ...       .........,,,,;,,,,,,,,,,,,,,...  ";
    npc.vecBuffer[54] = "  . .. ..        .....    ........,.,,,,,,,,,,,,,,,,,,,,,,,.";
    npc.vecBuffer[55] = " ..... . .       .............,,,,,,,......,,,,,,,,,,,,,,,,,";
    npc.vecBuffer[56] = " .    .            . .......,..,.........,,,,,,,.,.,,,..,,,,";
    npc.vecBuffer[57] = " .              .    .........,,..........,,,,,,.,,.,,,.....";
    npc.vecBuffer[58] = "  ..         .    ............................,,,.........,.";
    npc.vecBuffer[59] = " .... .  .        ......... ....  ........,................,";
    npc.vecBuffer[60] = " ..            ... . ...... ..................,,..........,,";
    npc.vecBuffer[61] = "    .      ...  .......... ..................,............,,";
    npc.vecBuffer[62] = "   ...     .    .  ............................,..........,,";
    npc.vecBuffer[63] = "           ...   ...................................,,....,,";
    npc.vecBuffer[64] = ".    .     ..     ........................................,,";
    npc.vecBuffer[65] = "..   .     .. .   ........................................,,";
    npc.vecBuffer[66] = ".    .    ....   ...................................,.....,,";
    npc.vecBuffer[67] = ".   ..    ..... . ........................................-,";
    npc.vecBuffer[68] = ".   .     ....    ........................................-,";
    npc.vecBuffer[69] = ".    .    ....   .....................................,...-,";
    vecNPC.push_back(npc);
}

void CQuestInfo::QueryNpcEx(std::vector<ST_QUEST_NPC_DATA>& vecNPC)
{
    ST_QUEST_NPC_DATA npc;
    npc.x = 22;
    npc.y = 9;
    npc.z = 5;
    npc.nNpcID = 154;
    npc.strTrack = "보안제품개발트랙";
    npc.strName = "진-우기";
    npc.nAge = 26;
    npc.strMBTI = "ISTP";
    npc.cPatch = 'U';
    npc.strMessage = "팀프로젝트 조는 미리미리 짜고 있지?.";
    npc.strContents1 = "안녕~~~";
    npc.strContents2 = "트랙 선택 축하해";
    npc.strContents3 = "드디어 큰 산 하나 넘었구나";
    npc.strContents4 = "고생했다~";

    npc.vecSmallImage.resize(25);
    npc.vecSmallImage[0] = ",,,,,,,,,,,,,,,,,,,,,,,,,";
    npc.vecSmallImage[1] = ",,,,,,,,,,,,,,,,,,,,,,,,,";
    npc.vecSmallImage[2] = ",,,,,,,,,,,,,,,,,,,,,,,,,";
    npc.vecSmallImage[3] = ",,,,,,,,,-.....:,,,,,,,,,";
    npc.vecSmallImage[4] = ",,,,,,,:.,     ~.,,,,,,,,";
    npc.vecSmallImage[5] = ",,,,,,-,         .,,,,,,,";
    npc.vecSmallImage[6] = ",,,,,,.   .~:-.   ;,,,,,,";
    npc.vecSmallImage[7] = ",,,,,:.           .,,,,,,";
    npc.vecSmallImage[8] = ",,,,,.            ,!,,,,,";
    npc.vecSmallImage[9] = ",,,,,             .:,,,,,";
    npc.vecSmallImage[10] = ",,,,,             .~,,,,,";
    npc.vecSmallImage[11] = ",,,,,              ~-,,,,";
    npc.vecSmallImage[12] = ",,,,               .:~,,,";
    npc.vecSmallImage[13] = ",,,.                ,-,,,";
    npc.vecSmallImage[14] = ",,,.               . .,,,";
    npc.vecSmallImage[15] = ",,,,,              .,,,,,";
    npc.vecSmallImage[16] = ",,,,-.              ,,,,,";
    npc.vecSmallImage[17] = ",,,,~.              ,,,,,";
    npc.vecSmallImage[18] = ",,,,,               ,,,,,";
    npc.vecSmallImage[19] = ",,,,,.             -,,,,,";
    npc.vecSmallImage[20] = ",,,,,-            .:,,,,,";
    npc.vecSmallImage[21] = ",,,,,-,  -.....   :,,,,,,";
    npc.vecSmallImage[22] = ",,,,,,-!;-,,,,,.~:~,,,,,,";
    npc.vecSmallImage[23] = ",,,,,,,--,,,,,,,--,,,,,,,";
    npc.vecSmallImage[24] = ",,,,,,,,,,,,,,,,,,,,,,,,,";

    npc.vecBigImage.resize(70);
    npc.vecBigImage[0] = "                                                            ";
    npc.vecBigImage[1] = "                             .,.                            ";
    npc.vecBigImage[2] = "                         ~~.~;**!;-                         ";
    npc.vecBigImage[3] = "                      ,;==****=====*~.                      ";
    npc.vecBigImage[4] = "                    .;**============**:                     ";
    npc.vecBigImage[5] = "                   -=========$====$====*,                   ";
    npc.vecBigImage[6] = "                  !====$$=$$==$=**=$=====:                  ";
    npc.vecBigImage[7] = "                ,*====$=$$====$=**=$======;.                ";
    npc.vecBigImage[8] = "               ~*===$===$$=$========$$=====!.               ";
    npc.vecBigImage[9] = "              ,;=====$==$$===$=========$==$=:               ";
    npc.vecBigImage[10] = "              :=$===$===*==**======$==$$$$==*,              ";
    npc.vecBigImage[11] = "             -*=========**=*=========$=$$$$$=:              ";
    npc.vecBigImage[12] = "             :=======*==**=============$$$$$$=.             ";
    npc.vecBigImage[13] = "             !=$$========*===$=======$===$$$$=;             ";
    npc.vecBigImage[14] = "            .*===========***=$$======$====$$$=*.            ";
    npc.vecBigImage[15] = "            ,====$==*==*!**====$====$$====$$$==,            ";
    npc.vecBigImage[16] = "            ,=======****!**==========$$=$===$==.            ";
    npc.vecBigImage[17] = "            ,*===*===!!****====*======$$$$====*.            ";
    npc.vecBigImage[18] = "             !====!!*~.,-~~~;!*****===$$$$$===!             ";
    npc.vecBigImage[19] = "             ;==*,..----,.   ..,-;*!;!**=$$$==:             ";
    npc.vecBigImage[20] = "             ,**; .-~~::~,    ..-~:~-~~~~*$$==.             ";
    npc.vecBigImage[21] = "              ;*~ .........   .,,,,,,,,-,-$$=~              ";
    npc.vecBigImage[22] = "              -!.  ..,~:,..   ,,,,:~~-,,,,;$!               ";
    npc.vecBigImage[23] = "              .:   .,,.;!,.   .,,-*:-~-,.,~*-               ";
    npc.vecBigImage[24] = "             . -    ...:-,    ..,,:-,-,..,-~,.              ";
    npc.vecBigImage[25] = "             . .      ....    ...,.,,,....,,..              ";
    npc.vecBigImage[26] = "              ..              ............,,..              ";
    npc.vecBigImage[27] = "              .               ...     ...,,...              ";
    npc.vecBigImage[28] = "              . .             ...     ...,,..               ";
    npc.vecBigImage[29] = "                .             ....    ...,,..               ";
    npc.vecBigImage[30] = "                .            .....  .....,,..               ";
    npc.vecBigImage[31] = "                          ,-,,--.........,...               ";
    npc.vecBigImage[32] = "                            .,,,.........,..                ";
    npc.vecBigImage[33] = "                           ....,...........                 ";
    npc.vecBigImage[34] = "                        .    ...,,,......                   ";
    npc.vecBigImage[35] = "                       .,,....----,......                   ";
    npc.vecBigImage[36] = "                       ........,,,,......                   ";
    npc.vecBigImage[37] = "                            ...........,                    ";
    npc.vecBigImage[38] = "                           ..,,....,,,,                     ";
    npc.vecBigImage[39] = "                    ...    .......,,,,.                     ";
    npc.vecBigImage[40] = "                    ...    ......,,,,,.                     ";
    npc.vecBigImage[41] = "                     ...     ...,,,,,,.                     ";
    npc.vecBigImage[42] = "                     ....  ....,,,,--,.                     ";
    npc.vecBigImage[43] = "                      ......,,,,,---,,.                     ";
    npc.vecBigImage[44] = "                      ...,,,-------,,,.                     ";
    npc.vecBigImage[45] = "                       ...,-~~~~--,,,,,                     ";
    npc.vecBigImage[46] = "                 :!     ..,,-----,,,.,~*,                   ";
    npc.vecBigImage[47] = "               ,*$;     ...,,,-,,,,.,,,*$~.                 ";
    npc.vecBigImage[48] = "               !=-.      ...,,,,,,...,,-*=*-                ";
    npc.vecBigImage[49] = "            . .;! .       ...,,,,,...,,-:==~,,.             ";
    npc.vecBigImage[50] = "           .....!          ...,,.....,,-:==~,,,,..          ";
    npc.vecBigImage[51] = "           . .  ..         ..........,,,;$*,,,,,,,,.        ";
    npc.vecBigImage[52] = "             ..  ..        .........,,,,!*-,,,,,,,,,,..     ";
    npc.vecBigImage[53] = "    .. .      .  ...       .........,,,,;,,,,,,,,,,,,,,...  ";
    npc.vecBigImage[54] = "  . .. ..        .....    ........,.,,,,,,,,,,,,,,,,,,,,,,,.";
    npc.vecBigImage[55] = " ..... . .       .............,,,,,,,......,,,,,,,,,,,,,,,,,";
    npc.vecBigImage[56] = " .    .            . .......,..,.........,,,,,,,.,.,,,..,,,,";
    npc.vecBigImage[57] = " .              .    .........,,..........,,,,,,.,,.,,,.....";
    npc.vecBigImage[58] = "  ..         .    ............................,,,.........,.";
    npc.vecBigImage[59] = " .... .  .        ......... ....  ........,................,";
    npc.vecBigImage[60] = " ..            ... . ...... ..................,,..........,,";
    npc.vecBigImage[61] = "    .      ...  .......... ..................,............,,";
    npc.vecBigImage[62] = "   ...     .    .  ............................,..........,,";
    npc.vecBigImage[63] = "           ...   ...................................,,....,,";
    npc.vecBigImage[64] = ".    .     ..     ........................................,,";
    npc.vecBigImage[65] = "..   .     .. .   ........................................,,";
    npc.vecBigImage[66] = ".    .    ....   ...................................,.....,,";
    npc.vecBigImage[67] = ".   ..    ..... . ........................................-,";
    npc.vecBigImage[68] = ".   .     ....    ........................................-,";
    npc.vecBigImage[69] = ".    .    ....   .....................................,...-,";


    vecNPC.push_back(npc);
}

void CQuestInfo::QueryQuest(std::vector<ST_QUEST_DATA*>& vecQuest)
{
}
