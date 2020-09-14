#include <stdio.h>

int main(){
    int lines, i, j;

    printf("Enter how many lines: ");
    scanf("%d", &lines);

    for(i=1;i<=lines; i++){
        for(j=0; j<i; j++){
            printf("%5d", j+1);
        }
        printf("\n");
    }
}