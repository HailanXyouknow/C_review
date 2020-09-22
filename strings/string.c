#include <stdio.h>
#include <string.h>

int main(){
    // end of array is marked by \0 (null character)
    char str[80] = "Hello World";

    // automatic allocation of (length of string + 1) size
    char str2[] = "hi";

    // ILLEGAL:
    // char str3[10];
    // str3 = "a string here";

    char str4[30];
    strcpy(str4, "Hello World");

    printf("Message is %s\n", str4);
    return 0;
}