#include <stdio.h>

int main(){
    int i;

    // for(i=1; i<=10; i++)
    //     printf("Hello World\n");
    
    for(i=1, printf("Hi - %d\n", i); i<=10; i++, printf("Dave - %d\n", i))
        printf("Hello World\n");
    
    // below is equivalent to:
    // for(int sum=0, i=1; i<=n; sum=sum+i, i++);
    
    int sum, n=10;
    for(sum=0, i=1; i<=n; i++)
        sum = sum + i;
    
    printf("%d! = %d\n", n, sum);
    return 0;
}