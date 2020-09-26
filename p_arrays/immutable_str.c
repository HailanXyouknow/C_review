#include <stdio.h>
#include <stdlib.h>

int main(){
    char *str = "Hello"; //this is immutable

    printf("%s\n", str);
    // *(str+1) = 'o';  // you cannot do this
    // printf("%s\n", str);
    return 0;
}