#include <stdio.h>

int main() {
    int a = 5, b = 2;
    float r;

    // int/int = int; int/float = float; 
    // Result will always be in the format of higher precedence
    // char < int < long < float < double < long double
    r = a / b;
    // To get around it, we can do this
    r = (float) a / b;  // coverted to float before performing division
    // or 'r = a / (float) b'

    printf("r = %f\n", r); //return 2.00000...

    
    return 0;
}