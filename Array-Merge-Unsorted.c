#include <stdio.h>

void printArray(int a[], int n);

int main()
{
    int m = 5;
    int a[5] = {2, 6, 3, 7, 10};
    int n = 5;
    int b[5] = {3, 5, 9, 6, 4};
    int i, j;
    int c[10];
    int o = 10;

    printf("Print items of array A\n");
    printArray(a, m);
    printf("\n");
    
    printf("Print items of array B\n");
    printArray(b, n);
    printf("\n");

    for(i = 0; i < m; i++){
        c[i] = a[i];
    }
    j = 0;
    for(i = m; i < (m + n); i++){
        c[i] = b[j];
        j++;
    }
    printf("Print items of array C\n");
    printArray(c, o);
    printf("\n");

    return 0;
}

void printArray(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if ((i + 1) != n)
        {
            printf("%d, ", a[i]);
        }
        else
        {
            printf("%d", a[i]);
        }
    }
}