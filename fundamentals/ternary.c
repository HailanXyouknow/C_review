#include <stdio.h>
//  m = a>b? a+b : 0;


int main(){
    int a=0, b=2, c=5, m;

    m = (a>b && a>c)? a : ((b>c)? b : c);
    printf("%d\n", m);
    /*
    if (a>b && a>c){
        m = a;
    }
    else if (b>c) {
        m = b;
    } 
    else {
        m = c;
    } */
}
