#include <stdio.h>

void printArray(int a[3][3], int n);
int main()
{
    int m = 3;
    int p[3][3];
    int g[3][3] = {
        {1, 0, 1},
        {0, 1, 1},
        {1, 0, 1}
    };
    int i, j, k;
    printf("------ Input Graph -----\n");
    printArray(g, m);
    for(i = 0; i < m; i++){
        for(j = 0; j < m; j++){
            if(g[i][j] == 0){
                p[i][j] = 0;
            }else{
                p[i][j] = 1;
            }
        }
    }

    for(k = 0; k < m; k++){
        for(i = 0; i < m; i++){
            for(j = 0; j < m; j++){
                p[i][j] = (p[i][j] || (p[i][k] && p[k][j]));
            }
        }
    }

    printf("\n----- Output Graph-----\n");
    printArray(p, m);
    return 0;
}

void printArray(int a[3][3], int n)
{
    int i, j;
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
}