#include <stdio.h>
#include <stdlib.h>
// malloc, calloc, realloc

//  On success reallocation, realloc returns the base address
// otherwise it returns NULL

int main(){
    //dynamic memory is always in the heap section

    int *p;
    int n;
    printf("Enter how many integers: ");
    scanf("%d", &n);

    //p = (int *)malloc(100); // malloc allocates 100 bytes and returns address
    p = (int *)calloc(n, sizeof(int));
    if (p == NULL){
        printf("Unable to allocate memory\n Exiting the program\n");
        exit(1);
    }

    // use the allocated space pointed by p for keeping values
    int i;
    for(i=0; i<n; i++){
        printf("Next Number: ");
        scanf("%d", p+i);
    }

    printf("Content of the array: \n");
    for(i=0;i<n;i++){
        printf("%4d", *(p+i));
    }
    printf("\n");

    int new_no = n+3;
    p = (int *)realloc(p, new_no * sizeof(int));
    if (p == NULL){
        printf("Memory allocation failed.\n");
        exit(1);
    }

    *(p+n) = 10;
    *(p+n+1) = 20;
    *(p+n+2) = 30;

    printf("New Content of the array: \n");
    for(i=0;i<new_no;i++){
        printf("%4d", *(p+i));
    }

    free(p);    // IMPORTANT!!!

    return 0;
}