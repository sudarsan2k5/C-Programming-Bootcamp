#include <stdio.h>
void getMaxDigit(int num){
    if(num < 10 || num > 99){
        printf("Error! not 2 digit num");
        return;
    }
    int num1 = num / 10;
    int num2 = num % 10;
    if(num1 > num2){
        printf("%d is greater", num1);
    }
    else{
        printf("%d is greater ", num2);
    }
}

int main(){
    int num;
    printf("Enter a Two digit Num: ");
    scanf("%d", &num);

    getMaxDigit(num);
    return 0;
}