#include <stdio.h>
#include <string.h>
int main(){
    char str[80];
    printf("Enter a string: ");
    scanf("%[^\n]", str);

    int i;
    // Option 1:
    // for(i=0; str[i]!='\0'; i++);

    // Option 2:
    i = strlen(str);
    
    printf("Length of string: %d\n", i);
    return 0;
}