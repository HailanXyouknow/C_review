#include <stdio.h>

// global variables -implicitly initialize to zero
// accessable from all functions
int gVar; 

void test(){
    extern int gVar2;   // extern indicates this global variable is declared later
    printf("%d", gVar2);
}

int gVar2;

int main(){
    // static variables - implicitly initialized to zero
    //  the vairable is allocated as soon as the program starts
    //  will remain allocated to the program
    //  will be deallocated when the program ends
    static int var; 
}

// Variables with storage class ___ will have life equals with program
//    but scope limited to the function where they are declared