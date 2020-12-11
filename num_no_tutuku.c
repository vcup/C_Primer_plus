#include <stdio.h>

#define tsutsuku 10

int main(){
    int tutuku;
    int num;
    printf("input a number:");
    while (scanf("%d", &num)) {
        printf("%d ", num);
        for (tutuku = tsutsuku; tutuku > 0; tutuku --) {
            printf("%d ", ++num);
        }
        printf("\nnext number(q to quit):");
    }
    return 0;
}
