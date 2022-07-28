#include <stdio.h>

int main(){

    float num1, num2;
    printf("Enter num1:");
    scanf("%f", &num1);
    printf("Enter num2: ");
    scanf("%f", &num2);

    if(num1 > num2){
        printf("Maximum is: %f\n",num1);
        printf("Minimum is: %f\n", num2);
    }
    else{
        printf("Maximum is: %f\n", num2);
        printf("Minimum is: %f\n", num1);
    }
    return 0;
}