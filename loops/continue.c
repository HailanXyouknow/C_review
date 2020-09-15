#include <stdio.h>

int main(){
    int count;
    
    for(count=1; count<=100; count++){
        if (count%2 ==0){
            continue;  // go to the next iteration
            // to jump outside of forloop, use break
        }
        printf("%d\n", count);
    }

    return 0;
}