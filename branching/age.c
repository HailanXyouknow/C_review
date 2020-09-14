#include <stdio.h>

int main() {
    int age = 0;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 13 && age <=19) {
        printf("Teenage\n");
    } else {
        printf("Not teenage\n");
    }

    return 0;
}