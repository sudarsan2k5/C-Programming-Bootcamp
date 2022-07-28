#include <stdio.h>

int main(){

    int num1, num2;
    printf("Enter two num: ");
    scanf("%d", &num1);
    scanf("%d", &num2);

    if(num1 > num2){
        printf("%d is grater than %d\n", num1, num2);
    } 
    else {
        printf("%d is grater than %d\n", num2, num1);
    }

    return 0;

}