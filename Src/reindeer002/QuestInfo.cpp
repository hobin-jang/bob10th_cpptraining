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
    strcpy_s(npc.szName, 21, "이성진 멘티");
    npc.patch = 'S';
    strcpy_s(npc.szGreetMessage, 61, "도망쳐... 어서 이곳은 정글이야!!");

    npc.vecBuffer.resize(60);
    npc.vecBuffer[0] = ",,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,...";
    npc.vecBuffer[1] = ",,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,.";
    npc.vecBuffer[2] = ",,---------,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,.";
    npc.vecBuffer[3] = ",,-,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,";
    npc.vecBuffer[4] = ",,-,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,";
    npc.vecBuffer[5] = ",,-,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,";
    npc.vecBuffer[6] = ",,-,,,,,,,,,,,,,,,,,,---:!!!;~,,,,,,,,,,,,,,,,,,,,";
    npc.vecBuffer[7] = ",,-,,,,,,,,,,,,,,,-;====$$$$$$=;,,,,,,,,,,,,,,,,,,";
    npc.vecBuffer[8] = ",,-,,,,,,,,,,,,,,:=$$$$$$$$$$$$$*~,,,,,,,,,,,,,,,,";
    npc.vecBuffer[9] = ",,-,,,,,,,,,,,,,;$$$$$$$$$$$$$$$$=~,,,,,,,,,,,,,,,";
    npc.vecBuffer[10] = ",,-,,,,,,,,,,,,:$$$$$####$$$$$$$$$=-,,,,,,,,,,,,,,";
    npc.vecBuffer[11] = "-,-,,,,,,,,,,,-$##$#############$$$!,,,,,,,,,,,,,,";
    npc.vecBuffer[12] = "---,,,,,,,,,,,!$##################$=:,,,,,,,,,,,,,";
    npc.vecBuffer[13] = "----,,,,,,,,,~=###################$$!,,,,,,,,,,,,,";
    npc.vecBuffer[14] = "----,,,,,,,,,:$########$$$########$$=-,,,,,,,,,,,,";
    npc.vecBuffer[15] = "-----,,,,,,,,!########=;:*$#########=~,,,,,,,,,,,,";
    npc.vecBuffer[16] = "-----,,,,,,,,!#######$!~-~!$########=~,,,,,,,,,,,,";
    npc.vecBuffer[17] = "-------,,,,,,!######$=:---~*########=~,,,,,,,,,,,,";
    npc.vecBuffer[18] = "-------,,,,,,;######$!----~*########=-,,,,,,,,,,,,";
    npc.vecBuffer[19] = "-------,,,,,,:$######*:---!#########*,,,,,,,,,,,,,";
    npc.vecBuffer[20] = "-------,,,,,,-*######=;:--*########$:,,,,,,,,,,,,,";
    npc.vecBuffer[21] = "-------,,,,,,,-=$=$$=;~---~!$#$$*;=!,,,,,,,,,,,,,,";
    npc.vecBuffer[22] = "-------,,,,,,,-;*~~:;!;~-,,-;*;~--;:,,,,,,,,,,,,,,";
    npc.vecBuffer[23] = "-------,,,,,,,-~!---~;:~,,,,~;~-,,;-,,,,,,,,,,,,,,";
    npc.vecBuffer[24] = "--------,,,,,,--:-,,,,,,,,,,,,,,,,~-,,.,,,,,,,,,,,";
    npc.vecBuffer[25] = "--~-----,,,,,,,---,,,,,,,,..,,,,,,,,,..,,,,,,,,,,,";
    npc.vecBuffer[26] = "--~-----,,,,,,,---,,,,,,,,,,,..,,,,,,,,,,,,,,,,,,,";
    npc.vecBuffer[27] = "--~-----,,,,,,,,--,,,,,,,,,,,,,.,,,,,.,,,,,,,,,,,,";
    npc.vecBuffer[28] = "--~------,,,,,,,,-,,,,,-~---,,,,,,,,,.,,,,,,,,,,,,";
    npc.vecBuffer[29] = "--~------,,,,,,,,,,,,,,,-,,,,,,,,,,,..,,,,,,,,,,,,";
    npc.vecBuffer[30] = "--~------,,,,,,,,,-,,,,,-,,,,,,,,,,,,,,,,,,,,,,,,,";
    npc.vecBuffer[31] = "--~-------,,,,,,,,-,,,~~~---~-,,,,..,,,,,,,,,,,,,,";
    npc.vecBuffer[32] = "--~-------,,,,,,,,,-,,---,,,-,,,,,...,,,,,,,,,,,,,";
    npc.vecBuffer[33] = "--~-------,,,,,,,,,--,,,,--,,,,,,....,,,,,,,,,,,,,";
    npc.vecBuffer[34] = "~~~-------,,,,,,,,,---,,,,,,,,-,,...,,,,,,,,,,,,,,";
    npc.vecBuffer[35] = "~~~--------,,,,,,,,---,,-,,,,,-,,..,,,,,,,,,,,,,,,";
    npc.vecBuffer[36] = "~~~--------,,,,,,,,------------,,..,,,,,,,,,,,,,,,";
    npc.vecBuffer[37] = "~~~---------,,,,,,,----~~:~~---,,,,,,,,,,,,,,,,,,,";
    npc.vecBuffer[38] = "~~~---------,,,,,,------~~~----,,,,.,,,,,,,,,,,,,,";
    npc.vecBuffer[39] = "~~~~--------,,,,,-------,,-----,,-,,,,,,,,,,,,,,,,";
    npc.vecBuffer[40] = "~~~---------,,-~::-------,---,,,-~;-,,,,,,,,,,,,,,";
    npc.vecBuffer[41] = "~~~----------:*$$:---------,,,,,,,!=*:-,,,,,,,,,,,";
    npc.vecBuffer[42] = "~~~~------~!=####!--------,,,,,,,-=##$*;-,,,,,,,,,";
    npc.vecBuffer[43] = "~~~----~;*$######$;------,,,,,,,,:$####$=;-,,,,,,,";
    npc.vecBuffer[44] = "~~~-~:*=##########$:----,,,,,,,,~=######$$=!~,,,,,";
    npc.vecBuffer[45] = "~~~;=##############$!~--,,,,,,-:=########$$$$*:-,,";
    npc.vecBuffer[46] = "~~!##################=!:~---~:*$#########$$$$$=;,,";
    npc.vecBuffer[47] = "~~*#####################$==$$############$$$$$$!,,";
    npc.vecBuffer[48] = "~~*#####################################$$$$$$$!,,";
    npc.vecBuffer[49] = "~~*#####################################$$$$$$$!,,";
    npc.vecBuffer[50] = "~~*####################################$$$$$$$$!,,";
    npc.vecBuffer[51] = "~~*#####################################$$$$$$$!,,";
    npc.vecBuffer[52] = "~~*@######################################$$$$$!,.";
    npc.vecBuffer[53] = "~~*@@@@###################################$$$$$!,,";
    npc.vecBuffer[54] = "~~*@@@@######################################$$!,,";
    npc.vecBuffer[55] = "~~*@@@@@######################################$!,,";
    npc.vecBuffer[56] = "~~*@@@@@@@@####################################!,,";
    npc.vecBuffer[57] = "~~*@@@@@@@@@###################################!,,";
    npc.vecBuffer[58] = "~~*@@@@@@@@####################################!,,";
    npc.vecBuffer[59] = "~~*@@@@@@@@@@#####################$==##########;,,";
    vecNPC.push_back(npc);
}

void CQuestInfo::QueryNpcEx(std::vector<ST_QUEST_NPC_DATA>& vecNPC)
{
    ST_QUEST_NPC_DATA npc;
    npc.x = 4;
    npc.y = 19;
    npc.z = 1;
    npc.nNpcID = 150;
    npc.strTrack = "보안개발트랙";
    npc.strName = "이성진";
    npc.nAge = 23;
    npc.strMBTI = "내 MBTI가... 뭐드라?";
    npc.cPatch = 'S';
    npc.strMessage = "멘토님... 이제 끝인겁니까? (절레절레) 저 앞에 어둠만이 가득하군요...";
    npc.vecSmallImage;	// 위엣것 참조.
    vecNPC.push_back(npc);
}

void CQuestInfo::QueryQuest(std::vector<ST_QUEST_DATA>& vecQuest)
{
    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 150;
        stQuest.StartCondition = ST_FILTER(128, 0x0000, 0x0001);
        stQuest.vecMessages.push_back("잠이... 잠이 온다...");
        stQuest.vecMessages.push_back("해커톤에서 고통받고, 프로젝트에서 고통받았어...");
        stQuest.vecMessages.push_back("그런데 왜 기분이 좋지... 후훗★");
        stQuest.vecMessages.push_back("정신이 이상해진거 같아ㅋㅎ;;");
        stQuest.vecMessages.push_back("커피숍 어딘가에 있는 내가 가장 좋아하는 커피를 찾아줘!\nbob wiki에 보면 내가 좋아하는 커피가 나올꺼야!");
        stQuest.ClearCondition = ST_FILTER(128, 0x0003);
        vecQuest.push_back(stQuest);
    }

    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 257;
        stQuest.StartCondition = ST_FILTER(128, 0x0001, 0x0003);
        stQuest.vecMessages.push_back("여기 카라멜 프라푸치노 하나 주세요!");
        stQuest.vecMessages.push_back("네~ 휘핑크림 올리시나요?");
        stQuest.vecMessages.push_back("네!");
        stQuest.vecMessages.push_back("주문하신 카라멜 프라푸치노 나왔습니다^^");
        stQuest.vecMessages.push_back("[카라멜 프라푸치노]를 획득했습니다.");
        stQuest.vecMessages.push_back("이런걸 왜 좋아하는 거지?");
        stQuest.vecMessages.push_back("우선 다시 이성진 멘티에게 돌아가자!");
        stQuest.ClearCondition = ST_FILTER(128, 0x0007);
        vecQuest.push_back(stQuest);
    }

    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 150;
        stQuest.StartCondition = ST_FILTER(128, 0x0003, 0x0007);
        stQuest.vecMessages.push_back("오! 가져왔구나!");
        stQuest.vecMessages.push_back("...?");
        stQuest.vecMessages.push_back("두꺼운 빨대는?");
        stQuest.vecMessages.push_back("두꺼운... 빨대요?");
        stQuest.vecMessages.push_back("가져다줘 응.애.");
        stQuest.vecMessages.push_back("아니 그냥 그거로 마셔요!");
        stQuest.vecMessages.push_back("응 안해봐~ 퀘스트 성공 안띄우면 그만이야~");
        stQuest.vecMessages.push_back("(제정신이 아니구만 이 사람...)");
        stQuest.vecMessages.push_back("다시 커피숍으로 돌아가서 두꺼운 빨대를 추가로 가져오자...");
        stQuest.ClearCondition = ST_FILTER(128, 0x000f);
        vecQuest.push_back(stQuest);
    }

    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 259;
        stQuest.StartCondition = ST_FILTER(128, 0x0007, 0x000f);
        stQuest.vecMessages.push_back("헉헉... 혹시 두꺼운 빨대 있나요?");
        stQuest.vecMessages.push_back("네 물론이죠~ 하나 드릴까요?");
        stQuest.vecMessages.push_back("네, 하나만요...");
        stQuest.vecMessages.push_back("여기있습니다^^");
        stQuest.vecMessages.push_back("[두꺼운 빨대]를 획득했다.");
        stQuest.vecMessages.push_back("감사합니다!");
        stQuest.vecMessages.push_back("다시 이성진 멘티에게 돌아가자");
        stQuest.ClearCondition = ST_FILTER(128, 0x0001f);
        vecQuest.push_back(stQuest);
    }

    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 150;
        stQuest.StartCondition = ST_FILTER(128, 0x000f, 0x0001f);
        stQuest.vecMessages.push_back("오 그래 가져왔니?");
        stQuest.vecMessages.push_back("여기요...^^");
        stQuest.vecMessages.push_back("오! 그래 이거야!");
        stQuest.vecMessages.push_back("(꿀꺽꿀꺽)");
        stQuest.vecMessages.push_back("캬~ 이제야 정신이 좀 드네!");
        stQuest.vecMessages.push_back("그래, 새로 들어온 뵤비 신입이구나!");
        stQuest.vecMessages.push_back("앞으로 어떤 일이 벌어질지 몰라");
        stQuest.vecMessages.push_back("어떤 것들은 재미있게 다가올 것이고,");
        stQuest.vecMessages.push_back("어떤 일들은 널 괴롭게 만들 수도 있지.");
        stQuest.vecMessages.push_back("하지만 그런 일들을 모두 이겨내면, 정말 많이 성장해 있을꺼야!\n뵤비에 온 걸 환영해!");
        stQuest.vecMessages.push_back("내 괴상한 부탁을 들어준 너라면 모든 사건 사고를 소화해낼 수 있을꺼야! :)");
        stQuest.vecMessages.push_back("너의 그 끈기에 박수를 보낼께! ㅉㅉㅉ!");
        stQuest.vecMessages.push_back("그럼 난 이만...");
        stQuest.vecMessages.push_back("(이성진 멘티는 어둠 속으로 사라졌다. 어둠속에는 희미하게 훈련소라고 쓰여있었다...)");
        stQuest.ClearCondition = ST_FILTER(128, 0x0003f);
        vecQuest.push_back(stQuest);
    }
}

void CQuestInfo::QueryQuestObject(std::vector<ST_QUEST_OBJECT>& vecQuestObject)
{
    {
        ST_QUEST_OBJECT stObject;
        stObject.nQuestObjectId = 257;
        stObject.strName = "카라멜 프라푸치노";
        stObject.cPatch = 0;
        stObject.x = 28;
        stObject.y = 22;
        stObject.z = 0;
        stObject.reserved = 0;
        vecQuestObject.push_back(stObject);
    }

    {
        ST_QUEST_OBJECT stObject;
        stObject.nQuestObjectId = 259;
        stObject.strName = "두꺼운 빨대";
        stObject.cPatch = 0;
        stObject.x = 34;
        stObject.y = 22;
        stObject.z = 0;
        stObject.reserved = 0;
        vecQuestObject.push_back(stObject);
    }
}