#include <stdio.h>

int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    getchar();

    if (ch>='A' && ch<='Z')
    {
        printf("Corresponding lowercase character: %c\n", ch+32);
    } 
    else if (ch>='a' && ch<='z')
    {
        printf("Corresponding uppercase character: %c\n", ch-32);
    }
    else
    {
        printf("'%c' is not an alphabetic character\n", ch);
    }
    
    return 0;
}