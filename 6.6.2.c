#include <stdio.h>

#define bol '$'

int main(){
    int l, w, lim;
    for (l = lim = 0; l <= 5; l++, lim++){
        for (w = lim; w >= 0; w--) {
            printf("%c", bol);
        }
        printf("\n");
    }
    return 0;
}
