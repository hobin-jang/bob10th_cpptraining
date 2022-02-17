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
    npc.strTrack = "������ǰ����Ʈ��";
    npc.strName = "������� ���Ѽ�";
    npc.nAge = 25;
    npc.strMBTI = "ISTJ �ҽ� �Ĳ�";
    npc.cPatch = 'H';
    npc.strMessage = "���ƾƾ�....\n"
        "�ð��� �ʹ� ������.....\n"
        "������ �ʹ� ������.....\n"
        "�����......\n";

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
        "���� �����....\n"
        "�ƴ� ���� BoB ����...?!?!?!?!\n"
        "...\n"
        "�̰� ����... ���� �и��� �����ߴٱ�!!!\n"
        "�ƴ� �̰Թ��� ���� �� �ٽ� �� BoB ���Ϳ� ���ִ°ž�?!?!?!\n"
        "�ƴϾ�.... �̰� ���̾�!!!!\n"
        "...\n"
        "......\n"
        "���� �ƴѰǰ�....\n"
        "���� �ȹٷ� ��������!!\n"
        "�׷�! �̹� �� �� �����߾��µ� �� ���Ұž� ����!\n"
        "�׶� ���� �� ������ �ؼ� �ٽ� �����غ���!\n"
        ;

    npc.strContents2 =
        "��.... �� �� �ߴ� ���� ���Ϸ��� �� �����;;;\n"
        "�и� �� �� �ߴ� �� ������ �� ó���ϴ� �� ����...?\n"
        "��....\n"
        "�׷� ���� ���� �ȹٷ� ������ �� ���� �̰ܳ� �� ���� �ž�!!\n"
        "���� ��������Ʈ�ΰ�.....\n?"
        "������ ���� PM�� �þƼ� ������Ʈ ���� �� �̲����µ�....\n"
        "�׶��� ����� �ǻ���� �ٽ� �� �� �� ���� ������� �������� ����!!\n"
        "������ ��������Ʈ�� �Ϸ��� ���� ���ؾ��ϴµ�....\n"
        "�ƹ��� ����.....?\n"
        "����.. ���� �ƹ��� ���ھ�...�Ҿ��ѵ�...���� ������ ���ؼ� ��������Ʈ�� ����!!\n";
    npc.strContents3 =
        "��..��...���� ��ĥ���� ���鼭 �ڵ��� �ߴ��� �𸣰ڴ�....\n"
        "���� ���� ���� �ߴµ�..."
        "��... ���ó� ��������Ʈ�� ���� ���鱸��....\n"
        "�׷��� �̹� ������Ʈ������ ���� ������� ���� �� ���� ��ڴ�..."
        "���� 3�� �����ΰ�..."
        "���� �̹� ������ ��ġ�� BoB �����!! ���� ���������ν� ���ư�����!!"
        "�ٽ� �� �� ���� �Ƴ������� ���¿�����!!";
    npc.strContents4 = 
        "�ľ��ľ��ľ�....."
        "�� ��Ƴ����ǰ�....?"
        "���� BoB�� ��� ������ ��ģ �ž�...?"
        "���� �״� �� �˾Ҿ�...."
        "�� ���� BoB �����!!!!"
        "���� ���� �ְ��� �������� �� ���ΰ�?!?!?!"
        "������ �� BoB�� �Ǵٽ� �ϴ� �� ����� �ݴ��...."
        "�� �ƴ���??"
        "���� �̷� ������ �ϰ� �� �� ����"
        "�� ģ���� ���ε� ���Ĺ�� ��ο��� BoB�� ����� ���ؾ߰ھ�...!!��������"
        "���� �̷� ������ ���� �� ����!!!";
    vecNPC.push_back(npc);
}

void CQuestInfo::QueryQuestObject(std::vector<ST_QUEST_OBJECT>& vecQuestObject)
{
    ST_QUEST_OBJECT stObject;
    stObject.nQuestObjectId = 282;
    stObject.strName = "��������ȴ�";
    stObject.cPatch = 0;	// ȭ�鿡 �������� �ʰ� ���������� �ʰ� �Ϸ��� 0�� ������ ��
    stObject.x = 16;
    stObject.y = 17;
    stObject.z = 11;
    stObject.reserved = 0;
    vecQuestObject.push_back(stObject);
}

void CQuestInfo::QueryQuest(std::vector<ST_QUEST_DATA>& vecQuest)
{
    // ���Ѽ� id: 158
    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 158;
        stQuest.StartCondition = ST_FILTER(158, 0x0000, 0x0001);
        stQuest.vecMessages.push_back("������� ���Ѽ�: ���� �ǰ��� �ǰ��� �ǰ���....");
        stQuest.vecMessages.push_back("Me: (��� �̻��� �Ҹ��� �鸰��....)");
        stQuest.vecMessages.push_back("������� ���Ѽ�: ��ĥ���� ����� �����ڴ� ����.....");
        stQuest.vecMessages.push_back("������� ���Ѽ�: �� �ű� �������� �濡 �̾��ѵ� Ȥ�� Ŀ�Ǽ� ���� ������ �帵ũ �ϳ��� ����� �� ������?");
        stQuest.vecMessages.push_back("Me: (���� ������ �ϴ� �Ҹ��ΰ�...?)");
        stQuest.vecMessages.push_back("������� ���Ѽ�: BoB �����Ѵٰ� ��ĥ���� ��� ������ �ǰ��ؼ�... ��Ź�Ұ�");
        stQuest.vecMessages.push_back("Me: ��..��.. ��.. ��!! Ŀ�Ǽ󿡼� ��ٵ帮�� �ɱ��....?");
        stQuest.vecMessages.push_back("������� ���Ѽ�: ��� ��Ź�Ұ�..!!");
        stQuest.vecMessages.push_back("Me: ���̾�... �߸� �ɷȳ�;; �׷��� ���� �ǰ��غ��̴µ� �׳� ���� ����ְ� �����Ϸ�����!");
        stQuest.ClearCondition = ST_FILTER(158, 0x0003);
        vecQuest.push_back(stQuest);
    }
    
    // Ŀ�Ǽ󿡼� ������ �帵ũ�� ���� �� 
    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 10011;
        stQuest.StartCondition = ST_FILTER(158, 0x0001, 0x003);
        stQuest.vecMessages.push_back("������ �帵ũ �ϳ�����..? ���� �缭 ��������.");
        stQuest.vecMessages.push_back("[������ �帵ũ]�� ȹ���ߴ�.");
        stQuest.ClearCondition = ST_FILTER(158, 0x0003);
        vecQuest.push_back(stQuest);
        
    }

    // ���Ѽ�
    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 158;
        stQuest.StartCondition = ST_FILTER(158, 0x0003, 0x0007);
        stQuest.vecMessages.push_back("Me: ������ �帵ũ ���� �־��.");
        stQuest.vecMessages.push_back("������� ���Ѽ�: �� ������ �帵ũ ���� ����!!!");
        stQuest.vecMessages.push_back("������� ���Ѽ�: (�ܲ� �ܲ� �ܲ�...)");
        stQuest.vecMessages.push_back("Me: (���� �����Ϸ� ������..)");
        stQuest.vecMessages.push_back("������� ���Ѽ�: ���ƾƾ�.... �ȴ�... ���� �� ��.....�ФФ�");
        stQuest.vecMessages.push_back("������� ���Ѽ�: �ȵǰھ� ���� ���� �ھ߰ڴ�....");
        stQuest.vecMessages.push_back("������� ���Ѽ�: ���... �� \'��������ȴ�\' �����...?");
        stQuest.vecMessages.push_back("������� ���Ѽ�: ��! 11���� ���ΰ� ����... �����....");
        stQuest.vecMessages.push_back("Me: (��...? ����.....?)");
        stQuest.vecMessages.push_back("������� ���Ѽ�: ���� Ȥ��.....");
        stQuest.vecMessages.push_back("Me: ��..��...?");
        stQuest.vecMessages.push_back("������� ���Ѽ�: ���� �̾��ѵ� �� \'������� �ȴ�\'�� ã�ƿ��� �� ������..?");
        stQuest.vecMessages.push_back("������� ���Ѽ�: ���� 11�� �����Ʒ��ʿ� �ΰ� �� �� ����... ��Ź�Ұ�...");
        stQuest.vecMessages.push_back("Me: (��..��.....) ��...��! �׷���! ã�ƴ� �帱�Կ�!");
        stQuest.ClearCondition = ST_FILTER(158, 0x000F);
        vecQuest.push_back(stQuest);
    }

    //

    // ����ȴ� id: 282
    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 282;
        stQuest.StartCondition = ST_FILTER(158, 0x0007, 0x000F);
        stQuest.vecMessages.push_back("���� ����뿡 ����ȴ밡 ���� �� ������....");
        stQuest.vecMessages.push_back("�� ã�Ҵ�!!!");
        stQuest.vecMessages.push_back("�ٵ� ������� �ȴ밡 ���� �ߴ��� ����ȴ� �տ� ��������̶�� �������ڳ���������;;");
        stQuest.vecMessages.push_back("[������� �ȴ�]�� ȹ���߽��ϴ�.");
        stQuest.vecMessages.push_back("���� ��¥ �̰͸� ������ �ְ� �����Ϸ� ���߰ڴ�!");
        stQuest.vecMessages.push_back("�ٽ� ������� ���Ѽ����Է� ���ư���.");
        stQuest.ClearCondition = ST_FILTER(158, 0x001F);
        vecQuest.push_back(stQuest);
    }


    // ���Ѽ�
    {
        ST_QUEST_DATA stQuest;
        stQuest.nNpcId = 158;
        stQuest.StartCondition = ST_FILTER(158, 0x000F, 0xFFFF);
        stQuest.vecMessages.push_back("������� ���Ѽ�: ��! ���� ����! �̰ɷ� ��� ���� �ھ��� �ذ�� �� ����");
        stQuest.vecMessages.push_back("������� ���Ѽ�: ��! �׷��� ���� ���� �̸��� �ȹ���� �̷��� ��Ź�� �߳�;;");
        stQuest.vecMessages.push_back("������� ���Ѽ�: ���� �ִ� �� ���� �� BoB �������̱���?!?!");
        stQuest.vecMessages.push_back("������� ���Ѽ�: ���� �׷��� ������������ �־��µ�.. �� ������ � ���� �����??");
        stQuest.vecMessages.push_back("������� ���Ѽ�: �� ���� �� �� ������� ���� �ȵ���..");
        stQuest.vecMessages.push_back("Me: (�ƴ� ���� ����....);;");
        stQuest.vecMessages.push_back("������� ���Ѽ�: ���� BoB ������ ����� �׷��׷�...");
        stQuest.vecMessages.push_back("������� ���Ѽ�: ��... �׷��� ������ ������ �ຼ��....");
        stQuest.vecMessages.push_back("������� ���Ѽ�: ���� BoB ������ �������� ���� ������ ���� �־�!");
        stQuest.vecMessages.push_back("������� ���Ѽ�: ������ �� �� B..L...O....G �� �����ϱ� �ñ��ϸ� �� �� �ͺ��� ���� �ž�!");
        stQuest.vecMessages.push_back("������� ���Ѽ�: �׷� �� �ڷ� ������... ȭ������....");
        stQuest.vecMessages.push_back("Me: �ƴ�..!!! BLOG�� ����ִ��� ������� ������ ������ ����!! �����...?!?!?");
        stQuest.vecMessages.push_back("�׷��� �״� �ῡ ��� �̵��� ������....");
        stQuest.vecMessages.push_back("��... �ᱹ �׳� ȥ�� �˾Ƽ� �϶�� �ų�...�Ф� �����Ϸ� �ٽ� ����...");
        stQuest.ClearCondition = ST_FILTER(158, 0xFFFF);
        vecQuest.push_back(stQuest);
    }
}