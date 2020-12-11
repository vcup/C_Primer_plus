#include <stdio.h>
#define min 60

int main(){
    int m;
    int h;
    printf("input a number of min:");
    while (scanf("%d", &m) && m > 0) {
        h = m / min;
        m = m % min;
        printf("%d:%d\nnext number of min(0 to quit):", h, m);
    }
    return 0;
}
