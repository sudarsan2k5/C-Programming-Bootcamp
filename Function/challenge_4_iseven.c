#include <stdio.h>
int isEven(int num){
    if(num % 2 == 0){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    int num;
    printf("Enter a Num: ");
    scanf("%d", &num);

    int result = isEven(num);
    if(result == 1){
        printf("%d is a Even Num", num);
    }
    else{
        printf("%d is odd Num", num);
    }
    return 0;
}