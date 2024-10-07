#include <stdio.h>

int main() {
    
    // Memory addresses and pointers
    int myAge = 19;
    int* ptr = &myAge;
    printf("%i\n", myAge);
    printf("%p\n", &myAge);
    printf("%p\n", ptr);
    

    // Arrays
    char myArray[4] = {1,2,4,6};
    printf("%d\n", *(myArray + 1));
    printf("%d\n", *(myArray + 2));

    return 0;
}