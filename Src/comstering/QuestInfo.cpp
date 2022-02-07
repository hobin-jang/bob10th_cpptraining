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
    npc.z = 18;
    npc.nNpcID = 158;
    npc.strTrack = "보안제품개발트랙";
    npc.strName = "갓한수";
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

void CQuestInfo::QueryQuest(std::vector<ST_QUEST_DATA>& vecQuest)
{

}