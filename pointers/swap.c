#include <stdio.h>

// Would not work because when function is called
// a and b are only swapped within the local context
/*
void swap(int a, int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}
*/

void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int x=100, y=200;

    printf("x = %d, y = %d\n", x, y);
    swap(&x, &y);
    printf("x = %d, y = %d\n", x, y);
   
    return 0;
}