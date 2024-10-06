#include <stdio.h>


int main(){
    int x = 10;
    int y = 20;
    float r;
    r = (x^2 + y^2);

    if (r > 100){
        printf("too bad\n");
    } else {
        printf("nice! %.1f \n", r);
    }

    (x == 10) ? printf("x is 10\n") : printf("x is not 10\n");

}