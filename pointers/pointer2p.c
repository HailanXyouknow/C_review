#include <stdio.h>

int main(){
    int *p;
    int **k;
    int x = 100;
    p = &x;
    k = &p;

    // *k is value of p (which is address of x)
    // **k is the value of x
    printf("*p is x: %d\n", *p);
    printf("*k is *p: %p\n", *k);
    printf("**k is x: %d\n", **k);

    **k = **k + 1;
    printf("x (or **k) is now: %d\n", x);
    return 0;
}