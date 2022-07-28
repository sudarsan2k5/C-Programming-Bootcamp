#include <stdio.h>

int main (){
    int num1, num2;
    printf("Enter your first Num: ");
    scanf("%d", &num1);
    printf("Enter your decond Num;");
    scanf("%d", &num2);

    if(num1 == num2){
        printf("true");
    }
    else{
        printf("False");
    }

    return 0;
}