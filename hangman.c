#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

char getLetter();
bool ifMatch();
char getWord();

char words[10][10] = {"cat", "dog", "house", "sun", "moon", "pen", "chair", "phone", "bird", "crocodile"};


int main(){
    char* word = getWord();
    

    return 0;
}

char getLetter(){
    char ch;
    scanf("%c\n", &ch);
};

bool ifMatch(){
    return true;
};

char getWord(){

    int n = rand() % (sizeof(words)/sizeof(*words));
    const char* ch = words[n];
    return ch;
}