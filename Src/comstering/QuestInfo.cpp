#include "pch.h"
#include "QuestInfo.h"

static CQuestInfo g_QuestInfo;

CQuestInfo::CQuestInfo(void)
{
	ExportAPIEntry(this);
}

CQuestInfo::~CQuestInfo(void) {}

void CQuestInfo::QueryNpcEx(std::vector<ST_QUEST_NPC_DATA>& vecNPC)
{
    ST_QUEST_NPC_DATA npc;
    npc.x = 16;
    npc.y = 17;
    npc.z = 14;
    npc.nNpcID = 158;
    npc.strTrack = "보안제품개발트랙";
    npc.strName = "수면부족 갓한수";
    npc.nAge = 25;
    npc.strMBTI = "ISTJ 소심 꼼꼼";
    npc.cPatch = 'H';
    npc.strMessage = "으아아아....\n"
        "시간이 너무 부족해.....\n"
        "살려줘......";

    npc.vecBigImage.push_back("                         .~;!;-                            ");
    npc.vecBigImage.push_back("                     =;*$$$$$$$#$=:                        ");
    npc.vecBigImage.push_back("                    ;##$$$$$$$$$$$$#*.                     ");
    npc.vecBigImage.push_back("                -*###$$$$$$$$$$$$$$$$#;                    ");
    npc.vecBigImage.push_back("               ~#$$$$$$$$$$$$$$$$$$$$$$=.                  ");
    npc.vecBigImage.push_back("              ~#$$$$$$$$$$$$$$$$$$$$$$$$#,                 ");
    npc.vecBigImage.push_back("             ;$$$$$$$$$$$$$$$$$$$$$$$$$$$#,                ");
    npc.vecBigImage.push_back("            !$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@,               ");
    npc.vecBigImage.push_back("           ~$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@.              ");
    npc.vecBigImage.push_back("          .#$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$#              ");
    npc.vecBigImage.push_back("          #$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$:             ");
    npc.vecBigImage.push_back("         -$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$#.            ");
    npc.vecBigImage.push_back("         $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$;            ");
    npc.vecBigImage.push_back("        -#$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$#            ");
    npc.vecBigImage.push_back("        ;$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$#:           ");
    npc.vecBigImage.push_back("        #$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$*           ");
    npc.vecBigImage.push_back("       .#$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$#           ");
    npc.vecBigImage.push_back("       ~$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$#.          ");
    npc.vecBigImage.push_back("       :$$$#$$$$$$$$$$#$$$$$$$$$$$$$$$$$$$$$$$##~          ");
    npc.vecBigImage.push_back("       ;$$$#$$$$$$$$$$#$$$$$$$$$$$$$$$#$$$$$$$##;          ");
    npc.vecBigImage.push_back("       ;$$$#$$$$$$$$$$@$$$##$$$$$$$$$$#$$$$$$$##;          ");
    npc.vecBigImage.push_back("       ;$$$#$$$$$$$$$$*$$$##$$$$@$$$$$@$$$$$$$##;          ");
    npc.vecBigImage.push_back("       ;$$$#$$#$##$$$# #$##$$#$$@#$$$$#$$$$$#$##~          ");
    npc.vecBigImage.push_back("       :$$$$#$#$##$$$# $$@$;##$$=##$####$#$$#$#@.          ");
    npc.vecBigImage.push_back("       -#$$$@$#$!!###; ,#@#!:###.##$######$$#$#*           ");
    npc.vecBigImage.push_back("        #$$$####*;#@#:~,*##= $@@,###@$#=@@#$#$$,           ");
    npc.vecBigImage.push_back("        *$$$$##$: !;#  .,$;$  ~= ..==~* *:@$#$!            ");
    npc.vecBigImage.push_back("        ~#$$$@#!~  .;     :             .-#@$#~            ");
    npc.vecBigImage.push_back("         @$$##~                            @$@*            ");
    npc.vecBigImage.push_back("        ~#$@#$:                            =#:!:           ");
    npc.vecBigImage.push_back("        $.##,#,  .;$#$;          *##=:     ;@..=           ");
    npc.vecBigImage.push_back("       .# .@,  ,$#!@-@@!.      :#@;!@;@*   ~$  #           ");
    npc.vecBigImage.push_back("       ,$  !#   ; ~@=@@:.      ~$@;#@  *   !~  #           ");
    npc.vecBigImage.push_back("       .#  .$   . -@@@@.        *@@@@      $.  #           ");
    npc.vecBigImage.push_back("        =-  @      =@@#         .@@@:      #  ~*           ");
    npc.vecBigImage.push_back("        -#. #.      ,~            ~.      .= .#,           ");
    npc.vecBigImage.push_back("         ~#-=-                            ;:-#~            ");
    npc.vecBigImage.push_back("           *#=                            ##*.             ");
    npc.vecBigImage.push_back("             @.         ;,~=*,-,         .@                ");
    npc.vecBigImage.push_back("             !*                          #-                ");
    npc.vecBigImage.push_back("              $;                        =$                 ");
    npc.vecBigImage.push_back("              .=$.                    ,$=                  ");
    npc.vecBigImage.push_back("                :#=~                ~=#~                   ");
    npc.vecBigImage.push_back("                  :=@=!:,      ,:!=@*~                     ");
    npc.vecBigImage.push_back("                     ,:=@~....-@*:,                        ");
    npc.vecBigImage.push_back("                      != *....!~@;                         ");
    npc.vecBigImage.push_back("                    .#!: .:  :.-##*.                       ");
    npc.vecBigImage.push_back("                   .#~~=  ~-:,-@###=                       ");
    npc.vecBigImage.push_back("                  .$~~~#   !:-@$##$**                      ");
    npc.vecBigImage.push_back("                  =~~~~!! **$@$$$$$~!;                     ");
    npc.vecBigImage.push_back("                 !:~~~~:!!;*~=$$$#:~:=,                    ");
    npc.vecBigImage.push_back("                :;~~~~~~::!*$!$$#:;~~;*                    ");
    npc.vecBigImage.push_back("               .*~~:~~~~~:==$$*#;~;:~:*.                   ");
    npc.vecBigImage.push_back("               *!~~;~~~~:$#*$#*=~~::~:!!                   ");
    npc.vecBigImage.push_back("              -!*~~;~~~~$$$#**$:~;:~~:;=                   ");
    npc.vecBigImage.push_back("              =~;!~!~~:$$$$$#=;!=;~~~:;*                   ");
    npc.vecBigImage.push_back("             :;~~*:*~~=$$!;@$**:~:~:::;*                   ");
    npc.vecBigImage.push_back("             =:::;!=:*$$* ,*;*::::~~::;*                   ");
    npc.vecBigImage.push_back("            =;::::*=!#$$$ *:;!*~:::::;;*                   ");
    npc.vecBigImage.push_back("            #:::::;$#$$$#:=:;::::::::;;=                   ");
    npc.vecBigImage.push_back("           ;;:::::!@$$$$=$!;;!::::::;;!~                   ");
    npc.vecBigImage.push_back("           @::::::#$$$$=:;$;!;;::;;;;;=                    ");
    npc.vecBigImage.push_back("          .$:::::;#$$$$:::**;;;;;;;;;=*                    ");
    npc.vecBigImage.push_back("          ,*;;:;:;#$$#;:::;=*;;;;;;;$=*                    ");
    npc.vecBigImage.push_back("           #;**;;;###;:::::;=$======!;=                    ");
    npc.vecBigImage.push_back("           -$!=;*!##;;;:;:;;;;;!!;;;;;$                    ");
    npc.vecBigImage.push_back("            @;;;!*#!;;;;;;;;;;;;;;;;;;$                    ");
    npc.vecBigImage.push_back("            *##$= ;;;;;;;;;;;;;;;;;;;;=                    ");
    npc.vecBigImage.push_back("             :  ~ !;;;;;;;;;;;;;;;;;;!=                    ");
    npc.vecBigImage.push_back("              ~=  *@@@@#######$######;                     ");
    npc.vecBigImage.push_back("                  :#$$$$$$$=#$$$$$$$#~                     ");
    npc.vecBigImage.push_back("                  :#$$$$$$#:;$$$$$$$#~                     ");
    npc.vecBigImage.push_back("                  :#$$$$$$#.-#$$$$$$#-                     ");
    npc.vecBigImage.push_back("                  ~#$$$$$$$  @$$$$$$#,                     ");
    npc.vecBigImage.push_back("                  ~@$$$$$$;  =$$$$$$#.                     ");
    npc.vecBigImage.push_back("                  -@$#$$$#~  ~#$$$$$@                      ");
    npc.vecBigImage.push_back("                  ,@$$$$$@   ,@$$$$$@                      ");
    npc.vecBigImage.push_back("                   @$$$$$#    @$$$$$@                      ");
    npc.vecBigImage.push_back("                   @$#$$$;    #$$$$$$                      ");
    npc.vecBigImage.push_back("                   =$$$$#~    ~$$$$#!                      ");

    npc.vecSmallImage.push_back("      ,..            ");
    npc.vecSmallImage.push_back("    ..,...           ");
    npc.vecSmallImage.push_back("  ,..,,.,.   .       ");
    npc.vecSmallImage.push_back("  -.,..... . .       ");
    npc.vecSmallImage.push_back(" ,~.,,,,,,.,  .      ");
    npc.vecSmallImage.push_back(" .-.#*-.,.-#- .      ");
    npc.vecSmallImage.push_back(" .-,--,... -         ");
    npc.vecSmallImage.push_back(" .-...,=$-.          ");
    npc.vecSmallImage.push_back("  .....$$=.  .       ");
    npc.vecSmallImage.push_back("   ,...,!..          ");
    npc.vecSmallImage.push_back("   .....:..   .      ");
    npc.vecSmallImage.push_back("   ...... .          ");
    npc.vecSmallImage.push_back("   ....  .....       ");
    npc.vecSmallImage.push_back("   .....,  . .       ");
    npc.vecSmallImage.push_back("   ..... .  ...      ");
    npc.vecSmallImage.push_back("   ....  ....    .   ");
    npc.vecSmallImage.push_back("   ...,  .....  .    ");
    npc.vecSmallImage.push_back("   ..,.. . .,.  ..   ");
    npc.vecSmallImage.push_back("   .,.-,..,,..  ..   ");
    npc.vecSmallImage.push_back("   ...,.,,. ..  ,.   ");
    npc.vecSmallImage.push_back("   ,...-,,  ..  ..   ");
    npc.vecSmallImage.push_back("   ,,-,,..  ..  ...  ");
    npc.vecSmallImage.push_back("   ..,.-.   ..  -,,  ");
    npc.vecSmallImage.push_back("  ,-,,,.   ,...      ");
    npc.vecSmallImage.push_back("  -....   .,..,      ");

    npc.strContents1 =
        "여긴 어디지....\n"
        "아니 여긴 BoB 센터...?!?!?!?!\n"
        "...\n"
        "이게 뭐야... 나는 분명히 수료했다구!!!\n"
        "아니 이게뭐야 내가 왜 다시 이 BoB 센터에 와있는거야?!?!?!\n"
        "아니야.... 이건 꿈이야!!!!\n"
        "...\n"
        "......\n"
        "꿈이 아닌건가....\n"
        "정신 똑바로 차려보자!!\n"
        "그래! 이미 한 번 수료했었는데 또 못할거야 없지!\n"
        "그때 보다 더 열심히 해서 다시 수료해보자!\n"
        ;

    npc.strContents2 = "작성중...";
    npc.strContents3 = "작성중...";
    npc.strContents4 = "작성중...";
    vecNPC.push_back(npc);
}

void CQuestInfo::QueryQuestObject(std::vector<ST_QUEST_OBJECT>& vecQuestObject)
{
    ST_QUEST_OBJECT stObject;
    stObject.nQuestObjectId = 282;
    stObject.strName = "수면부족안대";
    stObject.cPatch = 0;	// 화면에 보이지도 않고 만져지지도 않게 하려면 0을 넣으면 됨
    stObject.x = 16;
    stObject.y = 17;
    stObject.z = 11;
    stObject.reserved = 0;
    vecQuestObject.push_back(stObject);
}

void CQuestInfo::QueryQuest(std::vector<ST_QUEST_DATA>& vecQuest)
{
    // 최한수 id: 158
    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 158;
        stQuest.StartCondition = ST_FILTER(158, 0x0000, 0x0001);
        stQuest.vecMessages.push_back("으아 피곤해 피곤해 피곤해....");
        stQuest.vecMessages.push_back("");
        stQuest.vecMessages.push_back("며칠동안 밤새고 쪽잠자는 건지.....");
        stQuest.vecMessages.push_back("어 거기 지나가는 길에 미안한데 혹시 커피숍에 가서 에너지 드링크 하나만 사다줄 수 있을까?");
        stQuest.vecMessages.push_back("BoB 과제한다고 며칠밤을 계속 샜더니 피곤해서... 부탁할게");
        stQuest.ClearCondition = ST_FILTER(158, 0x0003);
        vecQuest.push_back(stQuest);
    }
    
    // 커피숍에서 에너지 드링크를 샀을 때 
    {
       ST_QUEST_DATA stQuest;
       stQuest.nNpcId = 11;
        stQuest.StartCondition = ST_FILTER(158, 0x0001, 0x002);
        vecQuest.push_back(stQuest);
    }

    // 최한수
    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 158;
        stQuest.StartCondition = ST_FILTER(158, 0x0002, 0x0003);
        stQuest.vecMessages.push_back("와 에너지 드링크 정말 고마워!!!");
        stQuest.vecMessages.push_back("");
    }

    // 수면안대 id: 282
    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 282;
        stQuest.StartCondition = ST_FILTER(128, 0x0001, 0x0003);
        stQuest.vecMessages.push_back("시원하게 분수가 쏟아져 나오고 있다.");
        stQuest.vecMessages.push_back("이걸 말하는건가?");
        stQuest.vecMessages.push_back("근데 왜 하필 분수대 물을 마시지..? ;;");
        stQuest.vecMessages.push_back("마침 버려진 종이컵이 여기 있군.");
        stQuest.vecMessages.push_back("[분수대의 시원한 물]을 획득했습니다.");
        stQuest.vecMessages.push_back("다시 방황하는전상현에게로 돌아가자.");
        stQuest.ClearCondition = ST_FILTER(128, 0x0007);
        vecQuest.push_back(stQuest);
    }


    // 어린 전상현
    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 128;
        stQuest.StartCondition = ST_FILTER(128, 0x0003, 0x0007);
        stQuest.vecMessages.push_back("엇? 정말 떠온거야?");
        stQuest.vecMessages.push_back("[분수대의 시원한 물]을 전달했습니다.");
        stQuest.vecMessages.push_back("정말 고마워 잘 마실게.");
        stQuest.vecMessages.push_back("꿀꺽 꿀꺽 꿀꺽");
        stQuest.vecMessages.push_back("꿀꺽 꿀꺽 꿀꺽 꿀꺽 꿀꺽 꿀꺽");
        stQuest.vecMessages.push_back("꿀꺽 꿀꺽 꿀꺽 꿀꺽 꿀꺽 꿀꺽 꿀꺽 꿀꺽 꿀꺽");
        stQuest.vecMessages.push_back("...");
        stQuest.vecMessages.push_back("푸핫~ 살것 같다. 나 방금 죽을 뻔 했었어.");
        stQuest.vecMessages.push_back("응?");
        stQuest.vecMessages.push_back("도대체 왜 그지경이 될 때까지 코딩했냐고?");
        stQuest.vecMessages.push_back("그건... 전상현 멘토님께 여쭤봐.");
        stQuest.ClearCondition = ST_FILTER(128, 0x000F);
        vecQuest.push_back(stQuest);
    }


    // 전상현 멘토
    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 27;
        stQuest.StartCondition = ST_FILTER(128, 0x0007, 0x000F);
        stQuest.vecMessages.push_back("뭐야? C++ 공부하러 온거야?");;
        stQuest.vecMessages.push_back("...");
        stQuest.vecMessages.push_back("... 아니 그렇게까지 머리를 거칠게 흔들 필요는 없잖아.");
        stQuest.vecMessages.push_back("뭐? 누가 나한테 물어보라고 했다고?");
        stQuest.vecMessages.push_back("그게 또다른 전상현이라고?");
        stQuest.vecMessages.push_back("하하하하");
        stQuest.vecMessages.push_back("하하하하하하하하");
        stQuest.vecMessages.push_back("하하하하하하하하하하하하하하하하");
        stQuest.vecMessages.push_back("말 같잖은 소리. 자네는 아무래도 공상과학 영화를 너무 많이 본것 같네.");
        stQuest.vecMessages.push_back("혹시 모르지 어떤 증거가 있으면 내가 믿을지도.");
        stQuest.ClearCondition = ST_FILTER(128, 0x001F);
        vecQuest.push_back(stQuest);
    }

    // 어린 전상현
    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 128;
        stQuest.StartCondition = ST_FILTER(128, 0x000F, 0x001F);
        stQuest.vecMessages.push_back("사정은 잘 들어봤어?");
        stQuest.vecMessages.push_back("전상현 멘토님이 날 안 믿는다고?");
        stQuest.vecMessages.push_back("뭐야 미래에는 물리학과 생물학이 아직 발달하지 않은거야?");
        stQuest.vecMessages.push_back("2022년쯤 되면 얼마든지 시공간을 자유자재로 다닐 수 있어야 하는것 아니던가.");
        stQuest.vecMessages.push_back("멍게소리냐고?");
        stQuest.vecMessages.push_back("난 사실 과거에서 왔어.");
        stQuest.vecMessages.push_back("이 쪽지를 가지고 전상현 멘토님께 가봐.");
        stQuest.vecMessages.push_back("[어린 전상현의 쪽지]를 획득했다.");
        stQuest.vecMessages.push_back("기다리고 있을게.");
        stQuest.ClearCondition = ST_FILTER(128, 0x003F);
        vecQuest.push_back(stQuest);
    }

    // 전상현 멘토
    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 27;
        stQuest.StartCondition = ST_FILTER(128, 0x001F, 0x003F);
        stQuest.vecMessages.push_back("또 왔네?");
        stQuest.vecMessages.push_back("이번엔 증거를 들고 왔다고?");
        stQuest.vecMessages.push_back("[어린 전상현의 쪽지]를 건네준다.");
        stQuest.vecMessages.push_back("앗 이건...");
        stQuest.vecMessages.push_back("이... 지렁이가 기어가는 악필");
        stQuest.vecMessages.push_back("형편없는 글 솜씨...");
        stQuest.vecMessages.push_back("분명 내가 맞군. 믿을 수가 없지만 사실이야..!!");
        stQuest.vecMessages.push_back("응? 그래서 그 친구가 왜 48시간동안 코딩하다 왔냐고 대답들어보라 했다고?");
        stQuest.vecMessages.push_back("아 그 시절인가.");
        stQuest.vecMessages.push_back("내가 갓 25살이 되던 때 외주 개발로 게임개발을 했었지.");
        stQuest.vecMessages.push_back("일정이 한참이나 지났찌만 버그가 득실득실해서 도저히 오픈할 수가 없었어.");
        stQuest.vecMessages.push_back("그래.. 도저히.");
        stQuest.vecMessages.push_back("그러던 중 조폭들이 움직인거야.");
        stQuest.vecMessages.push_back("알고보니 우리가 맡았던 프로젝트가 조폭들의 돈으로 굴러가던 것이었지.");
        stQuest.vecMessages.push_back("아마 그당시는 48시간 동안 죽도록 코딩하고 간신히 탈출해온 그 시점인 것 같다.");
        stQuest.vecMessages.push_back("아마도 타임머신 기술이 불완전해서 과거가 아니라 미래로 와버렸나보군.");
        stQuest.vecMessages.push_back("원기 회복시켜주고 같이 플젝해봐.");
        stQuest.vecMessages.push_back("쓸만할지도..?");
        stQuest.vecMessages.push_back("무식해도 노력파니까.");
        stQuest.ClearCondition = ST_FILTER(128, 0x007F);
        vecQuest.push_back(stQuest);
    }

    // 어린 전상현
    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 128;
        stQuest.StartCondition = ST_FILTER(128, 0x003F, 0x007F);
        stQuest.vecMessages.push_back("후후 그 놀란 표정을 보니 잘 확인하고 왔나보군.");
        stQuest.vecMessages.push_back("진짜 어린 전상현이 맞다구.");
        stQuest.vecMessages.push_back("난 25살이야.");
        stQuest.vecMessages.push_back("너희와 같은 또래지.");
        stQuest.vecMessages.push_back("즉 BoB 교육과정을 멘티로서 같이 보낼 수 있다는 말이야.");
        stQuest.vecMessages.push_back("나와 팀하자. C++ 개발은 확실히 서포트 해줄게.");
        stQuest.vecMessages.push_back("나를 캐릭터로 선택하면 나와 함께 BoB를 수료할 수 있어.");
        stQuest.ClearCondition = ST_FILTER(128, 0x00FF);
        vecQuest.push_back(stQuest);
    }
}