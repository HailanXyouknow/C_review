#include <stdio.h>

int main(){
    int x = 10;
    int *p;
    p = &x;

    printf("Content of p: %lu\n", p);
    p = p+1; // +1 will add 4 bytes, because each int takes 4 bytes
    printf("Content of p: %lu\n", p);
    
    double *j = (double *)10000;
    double *k = (double *)2000;
    printf("%ld\n", j-k); // (10000-2000)/8 = 1000 doubles between address 10000 and 2000
    return 0;
}