#include <stdio.h>

int main(){
    int item;
    int n = 8, i;
    int arr[100] = {5, 9, 23, 30, 40, 45, 55, 60};
    int beg = 0, end = (n - 1), mid;
    int isFound = 0;
    printf("Value of array\n");
    for(i = 0; i < n; i++){
        printf("%d, ", arr[i]);
    }
    printf("\n");

    printf("Enter a number: ");
    scanf("%d", &item);

    while(beg <= end){
        mid = (beg + end) / 2;
        if (arr[mid] == item){
            isFound = 1;
            break;
        }else if (arr[mid] > item){
            end = mid - 1;
        }else{
            beg = mid + 1;
        }
    }
    
    if(isFound){
        printf("Match found, Index: %d \n", mid);
    }else{
        printf("Not found! \n");
    }

    return 0;
}