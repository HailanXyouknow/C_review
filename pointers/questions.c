// Output from the code snippets? 

// 1.
#include <stdio.h>
int main(){
    int x[4] = {1, 2, 3, 4};
    int *ptr = &x[2];
    *(ptr - 2) = *ptr + *(ptr+1) + *(ptr-1);
    printf("%d\n", x[0]);
    return 0;
}
// Answer: 9

// 2.
void question2(){
    char *s;
    char ch = 'A';
    s = &ch;
    ++(*s);
    printf("%c\n", ch);
}
// Answer: B

//3.
void question3(){
    if (sizeof(double*) > sizeof (char*)){
        printf("Hello! I feel good!");
    }
    else{
        printf("Hello, I feel better!");
    }
}
// Answer: "Hello, I feel better!"
// because pointers are the same size

void question4(){
    unsigned int x = 100;
    printf("%u", *&*&x);
}
// Answer: 100
// *&x => value at address of x => x => 100
// *&*&x = value at address of (x) = 100


// q5
void question5(){
    int x = 10;
    int *k = &x;
    x++;
    printf("%d", *k + 1);
}
// 12