#include <stdio.h>

int sum(int a, float b) {
    int sum = (int) a+b;
    return sum;
}

void myFunction();

float toCelsius(float fahrenheight){
    return (5.0 / 9.0)*(fahrenheight - 32.0);
}

int main() {
    int a = 3;
    float b = 3.5;
    int sum1 = sum(a, b);
    printf("%i\n", sum1);
    printf("%f", toCelsius(100.0));
    myFunction();
}

void myFunction() {
    printf("\nI just created smth");
}