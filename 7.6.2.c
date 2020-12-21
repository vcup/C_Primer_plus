#include <stdio.h>

int main(void) {
    char ch;
    int cont = 0;
    printf("input some char:");
    while (ch != '#') {
        if ((ch = getchar()) == '\n') {
            cont = 0;
            continue;
        }
        printf("'%c'-%-4d", ch, ch);
        if ((++cont % 8) == 0)
            putc('\n', stdout);
    }
    if ((cont % 8) != 0)
        putc('\n', stdout);
    return 0;
}
