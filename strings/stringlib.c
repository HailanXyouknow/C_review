#include <stdio.h>
#include <string.h>

int main(){
    char first[80] = "Chocolate !!!";
    char second[80];

    // destination, source
    strcpy(second, first);
    printf("Copied string %s\n", second);

    // String concatenation
    char third[80] = "Candy";
    strcat(first, third);
    printf("The first array is now: %s\n", first);

    // Compare strings

    printf("%d\n", strcmp("abc", "abc")); // 0
    printf("%d\n", strcmp("abc", "zebra")); // -1
    printf("%d\n", strcmp("zebra", "cat")); // 1
    return 0;
}