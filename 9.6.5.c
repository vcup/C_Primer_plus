//题目:编写并测试一个函数larger_of()，该函数把两个double类型的变量替换成二者之中的较大值
#include <stdio.h>

#define SHOW_X_Y fprintf(stdout, "%lf, %lf\n", x, y)
#define LARGER_OF(x, y) x = y = (x < y ? y : x) // 宏函数也可实现,而且参数不限于double

void larger_of(double * x, double * y);

int main(void) {
    double x = 5;
    double y = 10;
    larger_of(&x, &y);
    SHOW_X_Y;
    x = 5;
    y = 10;
    LARGER_OF(x, y);
    SHOW_X_Y;
}

void larger_of(double * x, double * y) {
    *x = *y = (*x < *y ? *y : *x);
    return;
}

