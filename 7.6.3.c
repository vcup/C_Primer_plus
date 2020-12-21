#include <stdio.h>

int main(void) {
    unsigned int num;
    unsigned int odd_cont = 0, enev_cont = 0;
    unsigned int odd_sum = 0, enev_sum = 0;
    printf("input some number(0 to quit):");
    
    while (scanf("%d", &num) && num != 0) {
        if ((num % 2) == 0) {
            odd_cont++;
            odd_sum += num;
        }
        else {
            enev_cont++;
            enev_sum += num;
        }
    }
    printf("odd:%u:%.2f\nenev:%u:%.2f\n",
            odd_cont, (float)odd_sum / (float)odd_cont,
            enev_cont, (float)enev_sum / (float)enev_cont);
}
