#include <stdio.h>

int main(){
    float in;
    float cm;
    
    for (printf("input a int of in: ");
         scanf("%f", &in);){
    cm = in * 2.54;
    printf("result is %f\n\n more?(q to quit):", cm);
    }
    return 0;
}

