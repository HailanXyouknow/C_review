#include <stdio.h>

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    switch(n) {
        case 1: printf("One\n");
            break;
        case 2: printf("Two\n");
            break;
        case 3: printf("Three\n");
            break;
        default: printf("Invalid Number\n");
    }

    // Do not use switch for range testing
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    switch(age){
        case 13:
        case 14:
        case 15:
        case 16:
        case 17:
        case 18:
        case 19: printf("Teen age!!\n");
                 break;
        default: printf("Not teen age!\n");
    }

    return 0;
}