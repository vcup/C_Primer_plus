#include <stdio.h>
#include <ctype.h>

#define Input stdin
#define Output stdout

int position(char ch);

int main() {
    char ch;
    int pos;
    int conut = 0;
    fputs("输入任意字符，程序将报告其在字母表中的位置(EOF退出)\n:", Output);
    while ((ch = getc(Input))!= EOF) {
        pos = position(ch);
        if (isspace(ch)) {
            if (ch == '\n') fputs("\n:", Output);
            continue;
        } else if (pos == -1) {
            fprintf(Output, "%c 不是一个字母", ch);
            continue;
        }

        if (conut > 10) {
            putc('\n', Output);
            conut = 0;
        }
        fprintf(Output, "%c -> %d  ", ch, pos);
        conut++;
    }
    putc('\n', Output);
    return 0;
}

int position(char ch) {
    ch = tolower(ch);
    if ('a' <= ch && ch <= 'z')
        return (ch - 'a') + 1;
    else return -1;
}

