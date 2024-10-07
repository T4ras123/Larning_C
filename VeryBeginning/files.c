#include <stdio.h>

FILE *fptr ;
FILE *newton;


int main(){

    // Open a file to append to it
    fptr = fopen("test.txt", "a");
    fprintf(fptr, "\nJava bad");

    // Read from a file (every line)
    char wisdom[100];
    newton = fopen("toReadFrom.txt", "r");
    while(fgets(wisdom, 100, newton)) {
        printf("%s", wisdom);
    }

    // Good practice 
    if (newton==NULL){
        printf("Cant open file");
    }

    // Closing all the used files
    fclose(fptr);
    fclose(newton);
    return 0;
}