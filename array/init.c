#include <stdio.h>

int main(){
    // initialize each element in the arry to 0
    int x[3] = {0}, i;

    for(i=0; i<3; i++){
        printf("%d\n", x[i]);
    }

    // explicitly initialize first two elements, but 0 for third
    int y[3] = {1,2};

    for(i=0; i<3; i++){
        printf("%d\n", y[i]);
    }

    return 0;
}