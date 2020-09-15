#include <stdio.h>
#include <math.h>

int main(){
    double x[20] = {};
    double y[20] = {};

    int i;
    printf("Enter maximum 20 numbers, terminate with 0.0\n");
    for(i=0; i<20; i++) {
        printf("Enter a real number:");
        scanf("%lf", &x[i]);
        if (x[i] == 0.0){
            break;
        }
    }

    for(int j=0; j<i; j++){
        if (j%2 == 0){
            y[j] = x[j] * 2;
        } else {
            y[j] = cbrt(x[j]);
        }
    }

    double sum1 = 0, sum2 = 0;
    printf("There are total %d numbers given as input\n", i);
    printf(" Input Array\t 2nd Array\n\n");
    for(int r=0; r<i; r++){
        printf("%12.5lf\t %9.5lf\n", x[r], y[r]);
        sum1 += x[r];
        sum2 += y[r];
    }
    
    printf("Sum of the first array:  %12.5lf\n", sum1);
    printf("Sum of the second array: %12.5lf\n", sum2);
    
    return 0;
}