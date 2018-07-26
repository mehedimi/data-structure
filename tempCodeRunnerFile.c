#include <stdio.h>

void printArray(int a[], int n);

int main()
{
    int n = 5;
    int j, k, min, temp;
    int a[5] = {2, 7, 1, 3, 4};
    printf("----- Before sorted ------\n");
    printArray(a, n);
    for(j = 0; j < n; j++){
        min = j;
        for(k = (j + 1); k < n; k++){
            if(a[k] < a[min]){
                min = k;
            }
        }
        temp = a[j];
        a[j] = a[min];
        a[min] = temp;
    }
    printf("\n--- After sorted ---\n");
    printArray(a, n);
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