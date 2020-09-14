#include <stdio.h>

int main(){
    int x = 0;

    while(x<10)
    {
        printf("Hello World \n");
        x++;
    }

    // factorial
    int n, sum, i;
    printf("Enter n: ");
    scanf("%d", &n);

    sum = 0;
    i = 1;
    while(i<=n)
    {
        sum += i++;
    }

    printf("Factorial of n: %d\n", sum);
    return 0;
}