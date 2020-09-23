#include <stdio.h>

void toggleChar(char *ptr){
    int i;
    printf("Content of array: ");
    for(i=0; *(ptr+i) != '\0'; i++){
        if (*(ptr+i) >= 'A' && *(ptr+i)<='Z')
            *(ptr+i) = *(ptr+i) + 32;
        else if (*(ptr+i) >= 'a' && *(ptr+i)<='z')
            *(ptr+i) = *(ptr+i) - 32;

    }
}

int main(){
    // name of the arrame is always the pointer to the first element by default
    char str[100];

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    toggleChar(str);
    printf("%s", str);
    return 0;
}