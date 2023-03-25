//Exercise 4
#include <stdio.h>

void main(void){
    int x, y;

    printf("Program Menemukan Transpose Matrix ===\n\n");
    printf("Enter row and colums of matrix: \n");
    printf("Rows: ");
    scanf("%d", &x);
    printf("Colums: ");
    scanf("%d", &y);

    int A[x][y];

    printf("\nEnter element of matrix:\n");
    for(int i=1; i<=x; i++){
        for(int j=1; j<=y; j++){
            printf("Enter element a%d%d: ", i, j);
            scanf("%d", &A[i-1][j-1]);
        }
    }
    printf("\nEntered matrix: \n");
    for(int i=1;i<=x;i++){
        for(int j=1;j<=y;j++){
            printf("%d    ", A[i-1][j-1]);
        }
        printf("\n");
    }

    printf("\nTranspose of matrix: \n");
    for(int i=1;i<=y;i++){
        for(int j=1;j<=x;j++){
            printf("%d    ", A[j-1][i-1]);
        }
        printf("\n");
    }
}
