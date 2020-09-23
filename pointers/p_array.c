#include <stdio.h>

int main(){
    // name of the arrame is always the pointer to the first element by default
    int x[] = {10, 20, 30, 40, 50};

    // x+i = address of the ith element
    // *(x+i) = value of ith element
    // x[i] <=> *(x+i)
    // &x[i] <=> (x+i)

    printf("%p, %p\n", x, &x[0]);

    int i=0;
    for(i=0; i<5; i++){
        printf("%4d ", *(x+i));
        printf("%4d ", i[x]); // is the same, because *(i+x)<=>*(x+i)
        printf("\n");
    }
    printf("\n");
    return 0;
}