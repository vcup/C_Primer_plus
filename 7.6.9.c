#include <stdio.h>

int main(void) {
    unsigned int cont = 0;
    unsigned int prime_cont = 0;
    unsigned int num;
    printf("input a number:");
    while (scanf("%u", &num) && num != 0) {
        for (prime_cont = 0, puts("prime number have:"); prime_cont <= num; prime_cont++) {
            for (cont = 0; ++cont <= prime_cont;) {
                if (cont == 1) {
                    if (prime_cont == 1)
                        printf("%-3u ", prime_cont);
                    continue;
                }
                if (cont == prime_cont)
                    printf("%-3u ", prime_cont);
                if (cont != 1 && (prime_cont % cont) == 0) break;
            }
        }
        printf("\ninput next number(0 to quit)");
    }
    return 0;
}
