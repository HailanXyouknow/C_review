#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, c, max;

    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &a, &b, &c);

	// If else-if
    if (a>b && a>c)
        max = a;
	else if (b > c)
        max = b;
	else
		max = c;

    printf("Max number is %d\n", max);
    return 0;
}