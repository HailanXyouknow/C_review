#include <stdio.h>

void printArray(int *p_arr, int n){
    int i;
    printf("Content of array: ");
    for(i=0; i<n; i++){
        printf("%4d", *(p_arr+i));
    }
    printf("\n");
}

int main(){
    // name of the arrame is always the pointer to the first element by default
    int x[] = {10, 20, 30, 40, 50};

    printArray(x, 5);
    return 0;
}