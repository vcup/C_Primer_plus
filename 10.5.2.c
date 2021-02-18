#include <stdio.h>

#define LEN 5
#define Output stdout

void copy_arr(double target[], double source[], int n);
void copy_ptr(double * target, double * source, int n);
void copy_ptrs(double target[], double source[], double source_last[]);
void print_arr(double arr[], int size, char * message);

int main(void) {
    double source[LEN] = {0.1, 0.2, 0.3, 0.4, 0.5};
    double target1[LEN];
    double target2[LEN];
    double target3[LEN];
    copy_arr(target1, source, LEN);
    copy_ptr(target2, source, LEN);
    copy_ptrs(target3, source, source + LEN);

    print_arr(source, LEN, "source:");
    print_arr(target1, LEN, "\ntarget1:");
    print_arr(target2, LEN, "\ntarget2:");
    print_arr(target3, LEN, "\ntarget3:");
    putc('\n', Output);
    return 0;
}

void copy_arr(double target[], double source[], int n) {
    for (int conut = 0; conut < n; conut++) {
        target[conut] = source[conut];
    }
    return;
}

void copy_ptr(double * target, double * source, int n) {
    for (int conut = 0; conut < n; conut++) {
        *(target + conut) = *(source + conut);
    }
    return;
}

void copy_ptrs(double target[], double source[], double source_last[]) {
    for (int conut = 0; source != source_last; conut++, source++) {
        target[conut] = source[0];
    }
    return;
}

void print_arr(double arr[], int size, char * message) {
    fputs(message, Output);
    putc('[', Output);
    for (int conut = 0; conut < size; fprintf(Output, "%g, ", arr[conut++]));
    fputs("\b\b]", Output);
    return;
}

