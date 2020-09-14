#include <stdio.h>

int main(){
    int i, j;

    printf("Enter how many lines: ");
    scanf("%d", &i);

    for(;i >=1; i--){
        for(j=0; j<i; j++){
            printf("*");
        }
        printf("\n");
    }
}