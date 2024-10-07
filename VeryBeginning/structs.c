#include <stdio.h>
#include <string.h>


struct Car {
    long year;
    char name[15]; 
};

int main() {

    struct Car s1;
    s1.year = 2024;
    strcpy(s1.name, "Nissan");
    printf("%s", s1.name);    

    return 0;
}