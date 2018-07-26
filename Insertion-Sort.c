#include <stdio.h>
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
int main()
{
    int n = 10;
    int numbers[10] = {2, 6, 7, 1, 3, 50, 4, 8, 10, 9};
    int i, j, temp;

    printf("\n----Original array before sorted.----\n");
    printArray(numbers, n);
    printf("\n");


    for (i = 1; i < n; i++)
    {
        temp = numbers[i];
        j = (i - 1);
        while((j >= 0) && (numbers[j] > temp)){
            numbers[j+1] = numbers[j];
            j--;
        }
        numbers[j+1] = temp;
    }

    printf("\n----- Sorting Output ----\n");

    printArray(numbers, n);
    printf("\n");

    return 0;
}
