#include <stdio.h>

int main(){
    int item = 303;
    int n = 8;
    int arr[100] = {5, 9, 23, 30, 40, 45, 55, 60};
    int beg = 0, end = (n - 1), mid;
    int isFound = 0;

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