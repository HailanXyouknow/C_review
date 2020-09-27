#include <stdio.h>
#include <stdarg.h>

int sum(int count, ... ){
    int sum=0;
    va_list ap;
    va_start(ap, count);

    int i;
    for(i=0; i<count; i++){ 
        sum += va_arg(ap, int);
    }
    va_end(ap);  // IMPORTANT! DO NOT FORGET!
    return sum;
}

int main(){
    int k = sum(4, 20, 10, 4, 2);
    printf("Sum = %d\n", k);

    int m = sum(5, 20, 10, 4, 2, 10);
    printf("Sum = %d\n", m);

    return 0;
}