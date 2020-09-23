#include <stdio.h>

int main(){
    const double PI = 3.14;
    int x[] = {1, 2, 3};

    // What we cannot do: x++
    // What we can do:
    int *p;     // what we cannot do here: int * const p; 
    p = x;      // however you can do something like this: int * const p = x;
    p++;

    int * const p2 = x;
    //p2++; // illegal - we cannot move the pointer
    (*p2)++; // legal - we can change the value

    const int * p3 = x;
    p3++; // legal - we can move the pointer
    //(*p)++; // illegal - we cannot change the value pointed by pointer


    return 0;
}