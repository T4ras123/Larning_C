#include <stdio.h>

int main() {

    /*
    Arrays
    */
    int array[] = {1,1,2,3,2}; // Data in the array must be of the same datatype.
    array[0] = 33;
    int i;
    int len = sizeof(array)/sizeof(array[0]);

    for (i; i<len;i++){
        printf("%d\n", array[i]);
    }

    printf("%lu\n", sizeof(array)); // Prints a memory size, not the len
    printf("%d\n", array[0]);

    /*
    Multidimentional arrays
     */
    int matrix[2][3] = { {2, 3, 4}, {1, 1, 1} };

    int j, k;
    for (j=0; j<2; j++) {
        for (k=0; k<3; k++) {
            printf("%i", matrix[j][k]);
        }
    }


    return 0;
}