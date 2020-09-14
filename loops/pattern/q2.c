#include <stdio.h>

int main(){
    int lines, i, j;

    printf("Enter how many lines: ");
    scanf("%d", &lines);

    for(i=1;i<=lines; i++){
        for(j=0; j<i; j++){
            printf("*");
        }
        printf("\n");
    }
    for(i=lines;i >=1; i--){
        for(j=0; j<i; j++){
            printf("*");
        }
        printf("\n");
    }
}