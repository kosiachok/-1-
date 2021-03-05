#include <stdio.h>
#include <math.h>


int main (void){
    double y;
    for (double x = -4; x <= 3; x+=0.01){
        if (x <= 2){
            printf("x = %lf; Функция не определена \n", x);
        }
        else{
            y = 8*log2(x-2)*((3*sin(x))/(3*x+3));
            printf("x = %lf; y = %lf \n", x, y);
        }
    }
return 0;

}
