#include<stdio.h>

int main()
{
    int n;

    printf("Enter size of matrix: ");
    scanf("%d", &n);

    int matrixA[n][n];

    int matrixB[n][n];

    int matrixC[n][n];

    int row, column, c, temp;
    printf("----- Enter value of Matrix A -----\n");
    for(row = 0; row < n; row++){
        for(column = 0; column < n; column++){
            printf("Row %d and Column %d: ", row + 1, column + 1);
            scanf("%d", &matrixA[row][column]);
        }
    }

    printf("----- Enter value of Matrix B -----\n");

    for (row = 0; row < n; row++)
    {
        for (column = 0; column < n; column++)
        {
            printf("Row %d and Column %d: ", row + 1, column + 1);
            scanf("%d", &matrixB[row][column]);
        }
    }

    for(row = 0; row < n; row++){
        for(column = 0; column < n; column++){
            temp = 0;
            for(c = 0; c < n; c++){
                temp += (matrixA[row][c] * matrixB[c][column]);
            }
            matrixC[row][column] = temp;
        }
    }
    printf("\n----- Value of Matrix C are -----\n");
    for(row = 0; row < n; row++){
        for(column = 0; column < n; column++){
            printf("%d\t", matrixC[row][column]);
        }
        printf("\n");
    }

    return 0;
}
