#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Good programming practice: initialize variable when we declare them
    int age = 0;

    printf("Enter age: ");
    scanf("%u", &age);
    printf("Age is %d\n", age);


    int x, y, i;
    printf("Enter two integers: ");
    i = scanf(" %d %d", &x, &y);
    printf("x = %d, y = %d, i = %d\n", x, y, i);
    return 0;
}