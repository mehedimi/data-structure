#include <stdio.h>

void printArray(int a[], int n);

int main()
{
    int n = 5;
    int i = n;
    int loc;
    int a[100] = {5, 2, 6, 7, 9};
    printf("Print before item delete.\n");
    printArray(a, n);
    printf("\n");

    printf("Enter location: ");
    scanf("%d", &loc);

    for (i = loc; i < n; i++)
    {
        a[i] = a[i+1];
    }
    n = n - 1;

    printf("Print after item deleted.\n");
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