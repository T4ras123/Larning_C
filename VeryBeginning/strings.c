#include <stdio.h>
#include <string.h>

int main() {

    // Simple string
    char greeting[] = "hello World";
    printf("%s\n", greeting);

    // Iterate over string
    char cool[] = "Cowboy Bebop";
    int i;
    for (i = 0; i<12; i++) {
        printf("%c", cool[i]);
    }

    // Output 2 strings
    char message[] = "Good to see you,";
    char person[] = "Github wanderer!";
    char empty[50];
    printf("\n%s %s\n", message, person);

    // Concatenate and copy 
    strcat(message, person);
    strcpy(empty, message);
    printf("%lu\n", strlen(message));

    // Compare
    char str1[] = "Hello";
    char str2[] = "Hello";
    char str3[] = "Hi";
    printf("%d\n", strcmp(str1, str2)); 

    return 0;
}