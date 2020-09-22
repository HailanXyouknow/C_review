#include <stdio.h>

int main(){
    char str[80];
    printf("Enter your name: ");

    // ^ => match any keyboard character
    // \n => tells scanf where to terminate
    // %[^A] => accept all char except 'A'
    scanf("%[^\n]", str); //Dave
    printf("Welcome, %s\n", str);
    return 0;
}