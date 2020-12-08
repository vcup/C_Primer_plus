#include <stdio.h>

int main(){
    printf("%-20s<-第一次打印的内容\n", "vcup moe");
    printf("%-20s<-第二次打印的内容\n%-20s<-仍是第二次打印的内容\n", "vcup", "moe");
    printf("%s", "vcup");
    printf("%-16s<-第三和第四次打印的内容\n", "moe");
    return 0;
}
