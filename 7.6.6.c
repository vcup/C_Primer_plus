#include <stdio.h>

int main(void) {
    char ch_old;
    char ch;
    unsigned int cont = 0;
    puts("input some char:");
    for (cont = 0; (ch = getchar()) != '#'; ch_old = ch) {
        if (ch_old == 'e' && ch == 'i')
            cont++;
    }
    printf("your input string have %u 'ei'\n", cont);
    return 0;
}
