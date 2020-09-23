#include <stdio.h>

int main(){
    int x = 300;
    char *k;
    int *p;

    // USB                            LSB
    // 00000000 00000000 00000001 00101100
    k = (char *)&x;
    p = &x;

    printf("%d   %d\n", *p, *k); //300   44 (because 00101100 = 44)
    k=k+1;  
    printf("%d   %d\n", *p, *k); //300   1 (because pointer *k moved to the next byte)
    return 0;
}