#include <stdio.h>

int main(){
    void *vp; // address of any type (char, int, float etc.)
    int x=100;  // no address arithmetic capabilities
    vp = &x; 
    //printf("%d\n", *vp); //not ok
    printf("%d\n", *(int *)vp); //ok
    return 0;
}