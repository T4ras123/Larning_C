#include <stdio.h>
#include <string.h>

int main (){

    int userNumber;
    scanf("%i", &userNumber);
    printf("%i", userNumber);
    

    char firstName[30];
    fgets(firstName, sizeof(firstName), stdin);
    printf("\n%s", firstName);

    return 0;

}