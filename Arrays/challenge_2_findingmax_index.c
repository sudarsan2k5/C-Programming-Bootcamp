#include <stdio.h>

int main(){
    int arr[8];
    int i, maxIndex;

    for(i = 0; i < 8; i++){
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    maxIndex = 0;

    for(i = 0; i < 8; i++){
        if (arr[i] > arr[maxIndex])
        maxIndex = i;
    }
    printf("Index of Max digit is: %d", maxIndex);
    return 0;
}