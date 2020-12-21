#include <stdio.h>

int main(void){
    char ch;
    int space = 0;
    int next_line = 0;
    int hokano = 0;
    puts("input some char:");
    while ((ch = getchar()) != '#'){
        if (ch == ' ')
            space++;
        else if (ch == '\n')
            next_line++;
        else
            hokano++;
    }
    printf("input %4d space; %4d \\n; %4d char\n", space, next_line, hokano);
    return 0;
}
