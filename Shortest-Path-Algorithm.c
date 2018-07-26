#include <stdio.h>

void printArray(int a[4][4], int n);
int min(int a, int b);

int main()
{
    int m = 4;
    int q[4][4];
    int g[4][4] = {
        {7, 5, 0, 0},
        {7, 0, 0, 2},
        {0, 3, 0, 0},
        {4, 0, 1, 0}
    };
    int i, j, k;
    printf("------ Input Graph -----\n");
    printArray(g, m);
    for (i = 0; i < m; i++){
        for (j = 0; j < m; j++){
            if (g[i][j] == 0){
                q[i][j] = 99999;
            }else{
                q[i][j] = 1;
            }
        }
    }

    for (k = 0; k < m; k++){
        for (i = 0; i < m; i++){
            for (j = 0; j < m; j++){
                q[i][j] = min(q[i][j], (q[i][k] + q[k, i]));
            }
        }
    }

    printf("\n----- Output Graph-----\n");
    printArray(q, m);
    return 0;
}

void printArray(int a[4][4], int n)
{
    int i, j;
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
}

int min(int firstNumber, int secondNumber){
    if(firstNumber > secondNumber){
        return secondNumber;
    }
    return firstNumber;
}