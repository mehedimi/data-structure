#include <stdio.h>

void printArray(int a[], int n);

int main()
{
    int item;
    int n = 5;
    int i = n;
    int loc;
    int a[100] = {5, 2, 6, 7, 9};
    printf("Print before item insert\n");
    printArray(a, n);
    printf("\n");

    printf("Enter a number :");
    scanf("%d", &item);

    printf("Enter location: ");
    scanf("%d", &loc);

    while(i >= loc){
        a[i+1] = a[i];
        i = i - 1;
    }
    a[loc] = item;
    n = n + 1;

    printf("Print after item inserted.\n");
    printArray(a, n);
    printf("\n");
    return 0;
}

void printArray(int a[], int n){
    int i;
    for(i = 0; i < n; i++){
        if((i+1) != n){
            printf("%d, ", a[i]);
        }else{
            printf("%d", a[i]);
        }
    }
}