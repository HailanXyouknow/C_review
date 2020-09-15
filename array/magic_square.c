#include <stdio.h>
#include <math.h>

int main(){
    
    int n;
    printf("Enter dimension of Magic Square (Only ODD dimension >=1 and <=15 accepted): ");
    scanf("%d", &n);
    if (n%2==0 || n >15){
        printf("Invalid input\n Valid values are odd integers between 1 and 15\n");
        return 1;
    }

    int a[n][n];
    printf("The magic square:\n");
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            a[i][j] = 0;
        }
    }

    int old_row, old_col;
    for(int row=n-1, col=n/2, k=1; k<=pow(n, 2); k++){
        a[row][col] = k;
        old_row = row, old_col = col; 
        row++;
        col++;
        if (row==n){        // in solution: row = (row+1) % n;
            row = 0;
        }
        if (col==n){
            col = 0;
        }
        if (a[row][col]){  
           row = old_row;
           col = old_col; 
           row--;
        }
    }

    int magic_c = 0;
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            printf("%5d", a[i][j]);
        }
        printf("\n");
        magic_c += a[i][0];
    }

    printf("\nMagic square generated with dimension %d and magic constant %d\n", n, magic_c);

    return 0;
}