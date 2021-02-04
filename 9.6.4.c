// 计算两数的调和平均数的函数
#include <stdio.h>

#define RECIPROCAL(NUM) 1 / (NUM) // 计算倒数
#define MEAN(x, y) ((x) + (y)) / 2 // 计算平均数

double harmonic(double x, double y);

int main() {
    double x;
    double y;
    fputs("输入两个数(以空格分隔)\n:", stdout);
    if (scanf("%lg %lg", &x, &y) != 2)
        return 0;
    fprintf(stdout, "%lg 和 %lg 的调和平均数为 %lg\n", x, y, harmonic(x, y));
}

double harmonic(double x, double y) {
    x = RECIPROCAL(x);
    y = RECIPROCAL(y);
    return RECIPROCAL(MEAN(x, y)); // or return 1 / ((1 / x) + (1 / y)/2)
}

