#include <stdio.h>
#include <ctype.h>

int main(){
    int age;
    char c;

    do {
        printf("Enter age: ");
        scanf(" %d", &age);
        if (age>=13 && age<=19){
            printf("Teenage\n");
        } else {
            printf("No, not teenage\n");
        }
        do {
            printf("Continue? (y/n): ");
            scanf(" %c", &c);
            c = tolower(c);
        } while (c!='n' && c!='y');
    } while (c != 'n');

    return 0;
}