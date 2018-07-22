#include<stdio.h>

int main(){
    int n = 10;
    int numbers[10] = {2, 6, 7, 1, 3, 50, 4, 8, 10, 9};
    int i, j, temp;

    printf("\n----Original array before sorted.----\n");
    for(i = 0; i < n; i++){
        if ((i + 1) != n){
            printf("%d, ", numbers[i]);
        }else{
            printf("%d\n", numbers[i]);
        }
    }

    for(i = 0; i < n; i++){
        for(j = 0; j < (n - i - 1); j++){
            if(numbers[j] > numbers[j+1]){
                temp = numbers[j];
                numbers[j] = numbers[j+1];
                numbers[j+1] = temp;
            }
        }
    }

    printf("\n----- Sorting Output ----\n");

    for(i = 0; i < n; i++){
        if((i+1) != n){
            printf("%d, ", numbers[i]);
        }else{
            printf("%d\n", numbers[i]);
        }
    }

    return 0;
}