#include <stdio.h>
#include <ctype.h>

#define Input stdin
#define Output stdout

#define MESSAGE1 "输入第一个数字:"
#define MESSAGE2 "输入第二个数字:"
#define ADD_MESSAGE "%.2f+%.2f=%.2f\n"
#define SUB_MESSAGE "%.2f-%.2f=%.2f\n"
#define MUL_MESSAGE "%.2fx%.2f=%.2f\n"
#define DIV_MESSAGE "%.2f/%.2f=%.2f\n"
#define ERROR_CHOICE "%c 不是一个合法的选项，请重新选择\n"
#define ERROR_NUMBER " 不是数字，请重新输入\n:"
#define ERROR_DIV_SECOND "请输入一个0以外的数字\n:"
#define OWARI_MESSAGE "bye~☺\n"

void show_menu(void);
char get_choice(void);
float get_float(const char * message);

int main() {
    char choice;
    float first_float;
    float second_float;
    for (choice = get_choice(); choice != 'q'; choice = get_choice()) {
        first_float = get_float(MESSAGE1);
        second_float = get_float(MESSAGE2);
        switch (choice) {
            case 'a':
                fprintf(Output, ADD_MESSAGE, first_float, second_float, first_float + second_float);
                break;
            case 's':
                fprintf(Output, SUB_MESSAGE, first_float, second_float, first_float - second_float);
                break;
            case 'm':
                fprintf(Output, MUL_MESSAGE, first_float, second_float, first_float * second_float);
                break;
            case 'd':
                while (!second_float) {
                    second_float = get_float(ERROR_DIV_SECOND);
                }
                fprintf(Output, DIV_MESSAGE, first_float, second_float, first_float / second_float);
                break;
        }
    }
    fputs(OWARI_MESSAGE, Output);
    return 0;
}

void show_menu(void) {
    char ch1[] = "\n选择一个算术运算"
                 "\n加:a    减:s"
                 "\n乘:m    除:d"
                 "\n退出:q\n:";
    fputs(ch1, Output);
    return;
}

char get_choice(void) {
    char choice;
    do_choice:
    show_menu();
    do {
        choice = tolower(getc(Input));
    } while (isspace(choice));
    while (!isspace(getc(Input)));
    switch (choice) {
        case 'a':
        case 's':
        case 'm':
        case 'd':
        case 'q':break;
        default:
            fprintf(Output, ERROR_CHOICE, choice);
            goto do_choice;
    }
    return choice;
}

float get_float(const char * message) {
    char ch;
    float result;
    fputs(message, Output);
    while (scanf("%f", &result) != 1) {
        while ((ch = getc(Input)) != '\n') {
            putc(ch, Output);
        }
        fputs(ERROR_NUMBER, Output);
    }
    return result;
}

