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
    npc.x = 12;
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
        "수면이 너무 부족해.....\n"
        "살려줘......\n";

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

    npc.strContents2 =
        "하.... 한 번 했던 짓을 또하려니 또 힘드네;;;\n"
        "분명 한 번 했던 것 같은데 왜 처음하는 것 같지...?\n"
        "휴....\n"
        "그래 내가 정신 똑바로 차리면 더 쉽게 이겨낼 수 있을 거야!!\n"
        "이제 팀프로젝트인가.....\n?"
        "이전의 나는 PM을 맡아서 프로젝트 팀을 잘 이끌었는데....\n"
        "그때의 기억을 되살려서 다시 한 번 더 좋은 결과물을 내보도록 하자!!\n"
        "하지만 팀프로젝트를 하려면 팀을 구해야하는데....\n"
        "아무도 없나.....?\n"
        "에이.. 설마 아무도 없겠어...불안한데...빨리 팀원들 구해서 팀프로젝트로 가자!!\n";
    npc.strContents3 =
        "헉..헉...정말 며칠밤을 새면서 코딩을 했는지 모르겠다....\n"
        "정말 죽을 듯이 했는데..."
        "후... 역시나 팀프로젝트는 많이 힘들구나....\n"
        "그래도 이번 프로젝트에서도 좋은 결과물이 나온 것 같아 기쁘다..."
        "이제 3차 교육인가..."
        "이제 이번 교육만 마치면 BoB 수료다!! 정말 보안인으로써 나아가보자!!"
        "다시 한 번 몸을 아끼지말고 불태워보자!!";
    npc.strContents4 = 
        "후아후아후아....."
        "난 살아남은건가....?"
        "드디어 BoB의 모든 교육을 마친 거야...?"
        "정말 죽는 줄 알았어...."
        "와 드디어 BoB 수료다!!!!"
        "이제 나도 최고의 전문가가 된 것인가?!?!?!"
        "하지만 이 BoB를 또다시 하는 건 절대로 반대다...."
        "아 아니지??"
        "나만 이런 경험을 하게 할 순 없지"
        "내 친구들 지인들 선후배들 모두에게 BoB를 가라고 말해야겠어...!!ㅋㅋㅋㅋ"
        "나만 이런 고통을 느낄 순 없지!!!";
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
        stQuest.vecMessages.push_back("수면부족 갓한수: 으아 피곤해 피곤해 피곤해....");
        stQuest.vecMessages.push_back("Me: (어디서 이상한 소리가 들린다....)");
        stQuest.vecMessages.push_back("수면부족 갓한수: 며칠동안 밤새고 쪽잠자는 건지.....");
        stQuest.vecMessages.push_back("수면부족 갓한수: 어 거기 지나가는 길에 미안한데 혹시 커피숍에 가서 에너지 드링크 하나만 사다줄 수 있을까?");
        stQuest.vecMessages.push_back("Me: (지금 나한테 하는 소리인가...?)");
        stQuest.vecMessages.push_back("수면부족 갓한수: BoB 과제한다고 며칠밤을 계속 샜더니 피곤해서... 부탁할게");
        stQuest.vecMessages.push_back("Me: 어..어.. 네.. 넵!! 커피숍에서 사다드리면 될까요....?");
        stQuest.vecMessages.push_back("수면부족 갓한수: 어어 부탁할게..!!");
        stQuest.vecMessages.push_back("Me: 아이씨... 잘못 걸렸네;; 그래도 많이 피곤해보이는데 그냥 빨리 사다주고 과제하러가자!");
        stQuest.ClearCondition = ST_FILTER(158, 0x0003);
        vecQuest.push_back(stQuest);
    }
    
    // 커피숍에서 에너지 드링크를 샀을 때 
    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 10011;
        stQuest.StartCondition = ST_FILTER(158, 0x0001, 0x003);
        stQuest.vecMessages.push_back("에너지 드링크 하나였지..? 빨리 사서 갖다주자.");
        stQuest.vecMessages.push_back("[에너지 드링크]를 획득했다.");
        stQuest.ClearCondition = ST_FILTER(158, 0x0003);
        vecQuest.push_back(stQuest);
        
    }

    // 최한수
    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 158;
        stQuest.StartCondition = ST_FILTER(158, 0x0003, 0x0007);
        stQuest.vecMessages.push_back("Me: 에너지 드링크 여기 있어요.");
        stQuest.vecMessages.push_back("수면부족 갓한수: 와 에너지 드링크 정말 고마워!!!");
        stQuest.vecMessages.push_back("수면부족 갓한수: (꿀꺽 꿀꺽 꿀꺽...)");
        stQuest.vecMessages.push_back("Me: (이제 과제하러 가볼까..)");
        stQuest.vecMessages.push_back("수면부족 갓한수: 으아아아.... 안대... 잠이 안 깨.....ㅠㅠㅠ");
        stQuest.vecMessages.push_back("수면부족 최한수: 안되겠어 잠을 조금 자야겠다....");
        stQuest.vecMessages.push_back("수면부족 최한수: 어라... 내 \'수면부족안대\' 어디갔지...?");
        stQuest.vecMessages.push_back("수면부족 최한수: 아! 11층에 놔두고 왔지... 어떡하지....");
        stQuest.vecMessages.push_back("Me: (음...? 설마.....?)");
        stQuest.vecMessages.push_back("수면부족 최한수: 저기 혹시.....");
        stQuest.vecMessages.push_back("Me: 네..넵...?");
        stQuest.vecMessages.push_back("수면부족 최한수: 정말 미안한데 내 \'수면부족 안대\'를 찾아와줄 수 있을까..?");
        stQuest.vecMessages.push_back("수면부족 최한수: 내가 11층 우측아래쪽에 두고 온 것 같아... 부탁할게...");
        stQuest.vecMessages.push_back("Me: (하..씨.....) 아...네! 그럼요! 찾아다 드릴게요!");
        stQuest.ClearCondition = ST_FILTER(158, 0x000F);
        vecQuest.push_back(stQuest);
    }

    //

    // 수면안대 id: 282
    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 282;
        stQuest.StartCondition = ST_FILTER(158, 0x0007, 0x000F);
        stQuest.vecMessages.push_back("여기 어디쯤에 수면안대가 있을 것 같은데....");
        stQuest.vecMessages.push_back("어 찾았다!!!");
        stQuest.vecMessages.push_back("근데 수면부족 안대가 뭔가 했더니 수면안대 앞에 수면부족이라고 써져있자나ㅋㅋㅋㅋ;;");
        stQuest.vecMessages.push_back("[수면부족 안대]를 획득했습니다.");
        stQuest.vecMessages.push_back("이제 진짜 이것만 가져다 주고 과제하러 가야겠다!");
        stQuest.vecMessages.push_back("다시 수면부족 갓한수에게로 돌아가자.");
        stQuest.ClearCondition = ST_FILTER(158, 0x001F);
        vecQuest.push_back(stQuest);
    }


    // 최한수
    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 158;
        stQuest.StartCondition = ST_FILTER(158, 0x000F, 0xFFFF);
        stQuest.vecMessages.push_back("수면부족 갓한수: 와! 정말 고마워! 이걸로 잠깐 잠을 자야지 해결될 것 같아");
        stQuest.vecMessages.push_back("수면부족 갓한수: 아! 그러로 보니 너의 이름도 안물어보고 이렇게 부탁만 했네;;");
        stQuest.vecMessages.push_back("수면부족 갓한수: 여기 있는 거 보니 너 BoB 교육생이구나?!?!");
        stQuest.vecMessages.push_back("수면부족 갓한수: 나두 그렇게 교육생시절이 있었는데.. 아 과제는 어때 많이 힘들어??");
        stQuest.vecMessages.push_back("수면부족 갓한수: 내 정신 좀 봐 안힘들면 말이 안되지..");
        stQuest.vecMessages.push_back("Me: (아니 나도 말좀....);;");
        stQuest.vecMessages.push_back("수면부족 갓한수: 마자 BoB 과제는 어렵지 그럼그럼...");
        stQuest.vecMessages.push_back("수면부족 갓한수: 음... 그러면 조금의 도움을 줘볼까....");
        stQuest.vecMessages.push_back("수면부족 갓한수: 내가 BoB 교육과 과제들을 조금 정리한 것이 있어!");
        stQuest.vecMessages.push_back("수면부족 갓한수: 정리한 건 내 B..L...O....G 에 있으니까 궁금하면 한 번 와보면 좋을 거야!");
        stQuest.vecMessages.push_back("수면부족 갓한수: 그럼 난 자러 가볼게... 화이팅해....");
        stQuest.vecMessages.push_back("Me: 아니..!!! BLOG가 어디있는지 말해줘야 가든지 말든지 하지!! 저기요...?!?!?");
        stQuest.vecMessages.push_back("그렇게 그는 잠에 들어 미동도 없었다....");
        stQuest.vecMessages.push_back("휴... 결국 그냥 혼자 알아서 하라는 거네...ㅠㅠ 과제하러 다시 가자...");
        stQuest.ClearCondition = ST_FILTER(158, 0xFFFF);
        vecQuest.push_back(stQuest);
    }
}