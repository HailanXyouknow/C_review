#include <stdio.h>

int main(){
    int row=0, col=0;

    printf("Enter number of rows for the matrix (>=3 and <=10): ");
    scanf("%d", &row);
    if (row<3 || row >10){
        printf("Invalid number of rows, acceptable is >=3 and <=10 \n");
        return 1;
    }

    printf("Enter number of columns for the matrix (>=3 and <=10): ");
    scanf(" %d", &col);
    if (col<3 || col>10){
        printf("Invalid number of columns, acceptable is >=3 and <=10 \n");
        return 1;
    }

    int a[row][col];

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            printf("Matrix[%d][%d]: ", i, j);
            scanf(" %d",  &a[i][j]);
        }
    }

    printf("Matrix as given by you:\n");
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            printf("%5d", a[i][j]);
        }
        printf("\n");
    }

    printf("Transpose of the given matrix:\n");
    for(int i=0; i<col; i++){
        for(int j=0; j<row; j++){
            printf("%5d", a[j][i]);
        }
        printf("\n");
    }


    return 0;
}
