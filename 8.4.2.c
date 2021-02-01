#include <stdio.h>

#define kuang 10
#define Input stdin
#define Output stdout

int main(void) {
    char bol;
    for (int conut = 0; (bol = getc(Input)) != EOF; conut++) {
        if (conut >= kuang) {
            putc('\n', Output);
            conut = 0;
        }
        if (bol < ' ') {
            switch (bol) {
                case '\n':
                    fputs("\\n  ", Output);
                    break;
                case '\t':
                    fputs("\\t  ", Output);
                    break;
                default:
                    fprintf(Output, "^%c  ", bol + 64);
            }
        } else {
            fprintf(Output, "%-3d ", bol);
        }
    }
    fputc('\n', Output);
    return 0;
}

