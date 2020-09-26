#include <stdio.h>
#include <stdlib.h>

int ** allocate(int nRows, int nCols){
    int **p;
    p = (int **)malloc(nRows * sizeof(int *));
    if (p==NULL) //allocation failed
        exit(0);

    int i;
    for(i=0; i<nRows; i++){
        *(p+i) = (int *)malloc(nCols * sizeof(int));
    }
    return p;
}

void inputValues(int **p, int nRows, int nCols){
    int i,j;
    for(i=0;i<nRows;i++){
        for(j=0; j<nCols; j++){
            printf("Enter value for %d row %d col: ", i, j);
            scanf("%d", (*(p+i)+j)); // or &p[i][j]
        }
    }
}

void printValues(int **p, int nRows, int nCols){
    int i,j;
    for(i=0;i<nRows;i++){
        for(j=0; j<nCols; j++){
            printf("%6d", *(*(p+i)+j));
        }
        printf("\n");
    }
}

void deallocate(int **p, int nRows, int nCols){
    int i;
    for(i=0;i<nRows;i++){
        free(p[i]); // or *(p+i)
    }
    free(p);
}

int main(){
    // p is array of pointer
    // each element of p is integer pointer

    int **p;
    int nRows, nCols;
    printf("Enter Number of Rows: ");
    scanf("%d", &nRows);
    printf("Enter Number of Cols: ");
    scanf("%d", &nCols);

    p = allocate(nRows, nCols);
    inputValues(p, nRows, nCols);
    printValues(p, nRows, nCols);
    deallocate(p, nRows, nCols);

    return 0;
}