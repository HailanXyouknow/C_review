#include <stdio.h>
#include <stdlib.h>
#define MAX 30 
/*
    Write a function that receives a string like "book*abacus"
    and splits it into two strings, first and last.
*/

void split(char str[], char first[], char second[]){
    int i=0;
    int j=0;
    while(str[i] != ' '){
        first[j] = str[i];
        i++; j++;
    }
    first[j] = '\0';
    i = i+1;
    j=0;
    while(str[i] != '\0'){
        second[j] = str[i];
        i++; j++;
    }
    second[j] = '\0';
}

int main(){
    char str[] = "book abacus";
    char first[MAX];
    char second[MAX];
    split(str, first, second);
    printf("First Part: %s\n", first);
    printf("Second Part: %s\n", second);
    return 0;
}