// 编写一个把 double 类型数组中的数据倒序排列的函数，并在一个简单的程序中测试该函数
#include <stdio.h>

void rsort_double_arr(double * source_arr, int arr_len);

int main(void) {
    double source_arr[5] = {9.1, 1.2, 5.3, 7.4, 34.5}; // 34.5, 9.1, 7.4, 5.3, 1.2
    for (int n = 0; n++ < 5; rsort_double_arr(source_arr, 5));
    for (int n = 0; n < 5; printf("%g ", source_arr[n++]));
    putc('\n', stdout);
    return 0;
}

void rsort_double_arr(double * source_arr, int arr_len) {
    double tmp = source_arr[0];
    for (int n = 0; n++ < arr_len;) {
        for (int n = 0; n++ < arr_len; tmp = source_arr[n-1]) {
            if (source_arr[n-1] < source_arr[n]) {
                tmp = source_arr[n];
                source_arr[n] = source_arr[n-1];
                source_arr[n-1] = tmp;
            }
        }
    }
}

