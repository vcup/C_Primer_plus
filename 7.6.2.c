#include <stdio.h>

int main(void) {
    char ch;
    int cont;
    printf("input some char:");
    while ((ch = getchar()) != '#') {
        if (ch == '\n')
            continue;
        printf("'%c'-%-4d", ch, ch);
        if ((++cont % 8) == 0)
            putc('\n', stdout);
    }
    putc('\n', stdout);
    return 0;
}
