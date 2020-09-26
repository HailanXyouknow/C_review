#include <stdio.h>
#include <stdlib.h>

int main(){
    // p => array of pointers, where each element is an int pointer
    int * p[3];
    // name of 1d pointer array is always a "pointer to a pointer"
    // p contains the address of a pointer to an int
    int **k;
    k = p;


    // Example:
    int x[] = {1,2,3};
    int y[] = {10, 20, 30};
    int z[] = {5,6,7};

    p[0] = x;
    p[1] = y;
    p[2] = z;
    // Visual rep of above
    // 5000[7000] --> 7000[1,2,3]
    // 5008[7012] --> 7012[10, 20, 30]
    // 5012[7024] --> 7024[5,6,7]

    printf("%d\n", **p); // 1
    printf("%d\n", *(p+1)+2); // *(p+1) + 2 = (address of y) + 2 = address of 30 in y[]
    printf("%d\n", *(*(p+1)+2)); // *(*(p+1) + 2) = *((address of y) + 2) = *(address of 30 in y[]) = 30
    printf("%d\n", p[1][2]); // equivalent to above line

    // *(p+1) = p[1]
    // *(*(p+1)+2)) = *(p[1]+2) = *(M+2) (let p[1]=M for simplicity) = M[2] = p[1][2]

    
    return 0;
}