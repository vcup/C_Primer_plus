#include <stdio.h>

int main() {
    int l, w;
    char bol = 'A';
    for (l = 0; l <= 5; l++) {
        for (w = 0; w <= l; w++, bol++) {
            printf("%c", bol);
        }
        printf("\n");
    }
    return 0;
}
