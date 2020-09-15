#include <stdio.h>
#include <stdlib.h> // for rand()
#include <time.h> // time

int main(){
    int i, k;
   
    long t;
    t = time(NULL); //epoch time (which starts from 1970)

    srand(t); // change seed to 100
    for(i=0; i<10; i++){
        k = rand() % 100; // will ensure random number is between 0-99
        printf("%d\n", k);
    }
    
    return 0;
}