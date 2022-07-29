#include <stdio.h>

int main(){
    int num;
    int i = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    while(i < num){

        printf("*");
        i++;

    }

    return 0;
}