#include <stdio.h>
#include <string.h>

enum Level {
    HIGH = 1,
    MEDIUM,
    LOW
};

int main(){
    enum Level diff = LOW;

    printf("%i", diff);

    switch (diff)
    {
    case 1:
        printf("\n High level");
        break;
    
    default:
        printf("\n Oppsy");
        break;
    }
    return 0;
}