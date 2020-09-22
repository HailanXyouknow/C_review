#include <stdio.h>
int count_me()
{
    static int count;
    int sum = 0;
    sum += count++;
    printf("c: %d    s: %d\n", count, sum);
    return sum;
}
int main()
{
    int k, r;
    for(k = 1; k <= 5; ++k){
        count_me();
    }        
    printf("hi\n");
    r = count_me();
    printf("%d", r);
}