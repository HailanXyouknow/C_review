#include <stdio.h>

int main(){
    int var = 5;
    // if you need to store the address of an int, then you need an int pointer
    int* p;     
    float *k;
    // double *y;

    printf("%p\n", &var);
    printf("%d\n", var);
    p = &var;   // p => address of var
    *p = 10;    // value at address in p => 10
    printf("%d\n", var);
    //printf("%lu\n", &var);
    return 0;
}