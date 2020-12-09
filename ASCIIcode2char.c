#include <stdio.h>
#define HINT "input a ASCII code:"


int main(){
    int ACSIIcode;
    for (printf(HINT); scanf("%d", &ACSIIcode); printf(HINT)) {
        printf("\n%c", ACSIIcode);
    }
}
