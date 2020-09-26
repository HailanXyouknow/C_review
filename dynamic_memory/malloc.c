#include <stdio.h>
#include <stdlib.h>
// malloc, calloc, realloc

// malloc doesn't do implicit initialization to the allocated space
int main(){
    //dynamic memory is always in the heap section

    int *p;
    int n;
    printf("Enter how many integers: ");
    scanf("%d", &n);

    //p = (int *)malloc(100); // malloc allocates 100 bytes and returns address
    p = (int *)malloc(n * sizeof(int));
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

    printf("Content of the array: ");
    for(i=0;i<n;i++){
        printf("%4d", *(p+i));
    }
    free(p);    // IMPORTANT!!!

    return 0;
}