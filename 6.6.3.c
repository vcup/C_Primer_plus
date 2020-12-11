#include <stdio.h>

int main(){
    int l, w, lim;
    for (l = lim = 0; l <= 5; l++, lim++){
        char bol = 'F';
        for (w = lim; w >= 0; w--, bol--) {
            printf("%c", bol);
        }
        printf("\n");
    }
    return 0;
}
