#include <stdio.h>

#define char_end EOF
#define Input stdin

int main(void) {
    unsigned int conut = 0;
    while (getc(Input) != char_end) {
        conut++;
    }
    printf("have %u char(s)\n", conut);
    return 0;
}

