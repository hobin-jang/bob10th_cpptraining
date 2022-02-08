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

    npc.vecBigImage.push_back(",,-,,,,,,,,,,,,,,,,,,---:!!!;~,,,,,,,,,,,,,,,,,,,,");
    npc.vecBigImage.push_back(",,-,,,,,,,,,,,,,,,-;====$$$$$$=;,,,,,,,,,,,,,,,,,,");
    npc.vecBigImage.push_back(",,-,,,,,,,,,,,,,,:=$$$$$$$$$$$$$*~,,,,,,,,,,,,,,,,");
    npc.vecBigImage.push_back(",,-,,,,,,,,,,,,,;$$$$$$$$$$$$$$$$=~,,,,,,,,,,,,,,,");
    npc.vecBigImage.push_back(",,-,,,,,,,,,,,,:$$$$$####$$$$$$$$$=-,,,,,,,,,,,,,,");
    npc.vecBigImage.push_back("-,-,,,,,,,,,,,-$##$#############$$$!,,,,,,,,,,,,,,");
    npc.vecBigImage.push_back("---,,,,,,,,,,,!$##################$=:,,,,,,,,,,,,,");
    npc.vecBigImage.push_back("----,,,,,,,,,~=###################$$!,,,,,,,,,,,,,");
    npc.vecBigImage.push_back("----,,,,,,,,,:$########$$$########$$=-,,,,,,,,,,,,");
    npc.vecBigImage.push_back("-----,,,,,,,,!########=;:*$#########=~,,,,,,,,,,,,");
    npc.vecBigImage.push_back("-----,,,,,,,,!#######$!~-~!$########=~,,,,,,,,,,,,");
    npc.vecBigImage.push_back("-------,,,,,,!######$=:---~*########=~,,,,,,,,,,,,");
    npc.vecBigImage.push_back("-------,,,,,,;######$!----~*########=-,,,,,,,,,,,,");
    npc.vecBigImage.push_back("-------,,,,,,:$######*:---!#########*,,,,,,,,,,,,,");
    npc.vecBigImage.push_back("-------,,,,,,-*######=;:--*########$:,,,,,,,,,,,,,");
    npc.vecBigImage.push_back("-------,,,,,,,-=$=$$=;~---~!$#$$*;=!,,,,,,,,,,,,,,");
    npc.vecBigImage.push_back("-------,,,,,,,-;*~~:;!;~-,,-;*;~--;:,,,,,,,,,,,,,,");
    npc.vecBigImage.push_back("-------,,,,,,,-~!---~;:~,,,,~;~-,,;-,,,,,,,,,,,,,,");
    npc.vecBigImage.push_back("--------,,,,,,--:-,,,,,,,,,,,,,,,,~-,,.,,,,,,,,,,,");
    npc.vecBigImage.push_back("--~-----,,,,,,,---,,,,,,,,..,,,,,,,,,..,,,,,,,,,,,");
    npc.vecBigImage.push_back("--~-----,,,,,,,---,,,,,,,,,,,..,,,,,,,,,,,,,,,,,,,");
    npc.vecBigImage.push_back("--~-----,,,,,,,,--,,,,,,,,,,,,,.,,,,,.,,,,,,,,,,,,");
    npc.vecBigImage.push_back("--~------,,,,,,,,-,,,,,-~---,,,,,,,,,.,,,,,,,,,,,,");
    npc.vecBigImage.push_back("--~------,,,,,,,,,,,,,,,-,,,,,,,,,,,..,,,,,,,,,,,,");
    npc.vecBigImage.push_back("--~------,,,,,,,,,-,,,,,-,,,,,,,,,,,,,,,,,,,,,,,,,");
    npc.vecBigImage.push_back("--~-------,,,,,,,,-,,,~~~---~-,,,,..,,,,,,,,,,,,,,");
    npc.vecBigImage.push_back("--~-------,,,,,,,,,-,,---,,,-,,,,,...,,,,,,,,,,,,,");
    npc.vecBigImage.push_back("--~-------,,,,,,,,,--,,,,--,,,,,,....,,,,,,,,,,,,,");
    npc.vecBigImage.push_back("~~~-------,,,,,,,,,---,,,,,,,,-,,...,,,,,,,,,,,,,,");
    npc.vecBigImage.push_back("~~~--------,,,,,,,,---,,-,,,,,-,,..,,,,,,,,,,,,,,,");
    npc.vecBigImage.push_back("~~~--------,,,,,,,,------------,,..,,,,,,,,,,,,,,,");
    npc.vecBigImage.push_back("~~~---------,,,,,,,----~~:~~---,,,,,,,,,,,,,,,,,,,");
    npc.vecBigImage.push_back("~~~---------,,,,,,------~~~----,,,,.,,,,,,,,,,,,,,");
    npc.vecBigImage.push_back("~~~~--------,,,,,-------,,-----,,-,,,,,,,,,,,,,,,,");
    npc.vecBigImage.push_back("~~~---------,,-~::-------,---,,,-~;-,,,,,,,,,,,,,,");
    npc.vecBigImage.push_back("~~~----------:*$$:---------,,,,,,,!=*:-,,,,,,,,,,,");
    npc.vecBigImage.push_back("~~~~------~!=####!--------,,,,,,,-=##$*;-,,,,,,,,,");
    npc.vecBigImage.push_back("~~~----~;*$######$;------,,,,,,,,:$####$=;-,,,,,,,");
    npc.vecBigImage.push_back("~~~-~:*=##########$:----,,,,,,,,~=######$$=!~,,,,,");
    npc.vecBigImage.push_back("~~~;=##############$!~--,,,,,,-:=########$$$$*:-,,");
    npc.vecBigImage.push_back("~~!##################=!:~---~:*$#########$$$$$=;,,");
    npc.vecBigImage.push_back("~~*#####################$==$$############$$$$$$!,,");
    npc.vecBigImage.push_back("~~*#####################################$$$$$$$!,,");

    npc.vecSmallImage.push_back("@@@@@@@@@@@@@@@");
    npc.vecSmallImage.push_back("@@@@@@@@@@;::::");
    npc.vecSmallImage.push_back(":;!*@@@@@@;:::~");
    npc.vecSmallImage.push_back("~:;@@@@@@@@;:::");
    npc.vecSmallImage.push_back("::~@@@@@@@@@ ~:");
    npc.vecSmallImage.push_back(":;@@@@@@@@@@@;;");
    npc.vecSmallImage.push_back(";!@@@@@@@@@@@::");
    npc.vecSmallImage.push_back(";; @@@@@@@@@;::");
    npc.vecSmallImage.push_back(";;;@@@@@@@;::::");
    npc.vecSmallImage.push_back(":;;;*@@@@@::::;");
    npc.vecSmallImage.push_back("@;!;;;!;~@;;;;;");
    npc.vecSmallImage.push_back("@@;::;;~~-,~::~");
    npc.vecSmallImage.push_back("@@:;;;::-,~:!;:");
    npc.vecSmallImage.push_back("@@~;!;;:-,~!;;:");
    npc.vecSmallImage.push_back("@@:;!!!:::!!!*;");
    npc.vecSmallImage.push_back("@@~!!!*====**!;");
    npc.vecSmallImage.push_back("@@@~:;*****;~@@");
    npc.vecSmallImage.push_back("@@@@,-:!=$*:,@@");
    npc.vecSmallImage.push_back("@@@@@-:!**!:,@@");
    npc.vecSmallImage.push_back("@@@@@,~::~~~,@@");
    npc.vecSmallImage.push_back("@@@@@--:;~~-,@@");
    npc.vecSmallImage.push_back("@@@@@@---~,, @@");
    npc.vecSmallImage.push_back("@@@@@@ ,.,,,@@@");
    npc.vecSmallImage.push_back("@@@@@@@,.,,@@@@");
    npc.vecSmallImage.push_back("@@@@@@@@@,@@@@@");

    npc.strContents1 =
        "끼예ㅔㅔㅔㅔ에엑!(뭐야)\n"
        "우워어ㅓㅓㅓ어ㅓ(왜 이래!)\n"
        "...\n"
        "야ㅑ!(설마!)\n"
        "으아ㅏㅏㅏ아아아아아ㅏ!!?(진짜 순록이 된거야!!?)?\n"
        "꾸워어...어ㅓㅓㅓ어어!(드디어 정신이 나갔나보군)\n"
        "케켘ㅋ케케켘ㅋ켘케!(ㅋㅋㅋㅋㅋㅋㅋㅋㅋ)\n"
        "(흠)\n"
        "(어떡하면 다시 인간으로 돌아갈 수 있지?)\n"
        "(...)\n"
        "(에이 모르겠다 일단 여길 돌아다녀보자)\n"
        "(그러다 보면 답이 나오겠지)\n"
        "(어우 배고파...)\n"
        "으ㅏ아아아아ㅏ아아ㅏ(너무 서럽다 서러워!!)\n"
        "우워어엉ㅇㅇ어어ㅠㅜㅜ어어엉우ㅜㅡㅜㅠ\n"
        "어어ㅠㅜㅜ어어엉우ㅜㅡㅜㅠ\n"
        "우워ㅠㅜㅜㅇ엉엉ㅇ으ㅜㅠ어엉ㅠ\n"
        "ㅠㅜㅠㅜㅠㅠㅜㅠㅜㅠ\n"
        "(누군진 모르겠지만 이렇게 만든 사람을 찾아내겠어...)\n"
        "(복수할꺼야... 반드시!!!!!!)\n"
        "(근데 짐승이면 군대 안가도 괜찮은거 아냐?)\n"
        ;

    npc.strContents2 = "작성중";
    npc.strContents3 = "작성중";
    npc.strContents4 = "작성중";
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