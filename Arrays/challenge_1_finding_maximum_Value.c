#include <stdio.h>

int main(){
    int arr[] = {7, 2, 0, 5, 2, 8, 1, 8, 2, 5,};
    int i, max;
    max = arr[0];
    for(i = 1; i < 9; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    printf("The max digit in your phone num is: %d\n", max);
    return 0;
}