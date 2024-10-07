#include <stdio.h>
#include <stdlib.h>

int main(){

    int myInt;
    float myFloat;
    double myDouble;
    char myChar;

    printf("%lu\n", sizeof(myInt));      // 4 bytes
    printf("%lu\n", sizeof(myFloat));    // 4 bytes
    printf("%lu\n", sizeof(myDouble));   // 8 bytes
    printf("%lu\n", sizeof(myChar));     // 1 byte

    int *ptr1 = malloc(1);     // Allocates 1 byte in memory
    int *ptr2 = calloc(4, 8);  // Allocates 8 bytes for each of 4 elements

    // Allocate proper amount of memory at the pointer
    int *ptr3, *ptr4;
    ptr3 = malloc(sizeof(*ptr3)); 
    ptr4 = calloc(1, sizeof(*ptr4));

    // Make life MORE EFFICIENT with dynamic memory
    int students[20];
    int *students1;
    int numStudents = 12;
    students1 = calloc(numStudents, sizeof(*students));
    printf("%ld", numStudents * sizeof(*students));

    // Free the allocated memory
    free(ptr1);
    free(ptr2);
    free(ptr3);
    free(ptr4);
    free(students1);
    ptr1 = ptr2 = ptr3 = ptr4 = students1 = NULL; // Best practice

    return 0;

}