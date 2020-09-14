#include <stdio.h>

int main(){
    int lines, i, j;

    printf("Enter how many lines: ");
    scanf("%d", &lines);

    // for(i=1;i<=lines; i++){
    //     for(j=0; j<i; j++){
    //         printf("%5d", (i-1+j)%2);
    //     }
    //     printf("\n");
    // }

    for(i=0;i<lines; i++){
        for(j=0; j<i+1; j++){
            printf("%5d", (i+j)%2);
        }
        printf("\n");
    }
}