#include <stdio.h>
#include <ctype.h>

#define MIN_INT 1
#define MAX_INT 100
#define PRINT_BEGIN_CHAR() fprintf(Output, "在心中想一个在%d,%d之间的任意数字，我来猜\n", MIN_INT, MAX_INT)
#define PRINT_REQUEST_CHAR() fputs("怎么样，我猜大了还是猜小了(大了:b 小了:m 猜中了:r\n:", Output)
#define PRINT_OWARI_CHAR() fputs("不愧是我√√√√√√√√\n", Output)
#define PRINT_SORRY() fputs("嗯!?(目不识丁)\n:", Output)
#define PRINT_JUST_OEN_POSSIBLE() fputs("uh...可是现在已经没有其他可能性了啊..\n", Output)

#define QUEST_CHAR_1 "我猜你心里想的数字是%-2u\n"
#define QUEST_CHAR_2 "好吧，那我再猜一次，你心里想的数字是%-2u\n"

#define Output stdout
#define Input stdin

char get_a_choice(void);

int main(void) {
    int may_int = MAX_INT / 2;
    int stop = MAX_INT;
    int start = MIN_INT;
    char is;
    for (PRINT_BEGIN_CHAR(), fprintf(Output, QUEST_CHAR_1, may_int), PRINT_REQUEST_CHAR(); (is = get_a_choice());) {
        if (stop == may_int || start == may_int) {
            PRINT_JUST_OEN_POSSIBLE();
            break;
        } else if (is == 'r') {
            PRINT_OWARI_CHAR();
            break;
        } else if (is == 'b') {
            stop = may_int;
        } else {
            start = may_int;
        }
        may_int = (stop + start) / 2;
        fprintf(Output, QUEST_CHAR_2, may_int);
        PRINT_REQUEST_CHAR();
    }
    return 0;
}

char get_a_choice(void) {
    char choice;
    do_choice:
    for (;isspace(choice = getc(Input)););
    for (;!isspace(getc(Input)););
    choice = tolower(choice);
    switch (choice) {
        case 'r':
        case 'b':
        case 'm':break;
        default:
            PRINT_SORRY();
            goto do_choice;
    }
    return choice;
}

