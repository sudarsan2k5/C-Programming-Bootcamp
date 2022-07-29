#include <stdio.h>

int main(){
    int num, pow;
    int tempPow;
    int result = 1;
    printf("enter a num: ");
    scanf("%d", &num);
    printf("Enter a power: ");
    scanf("%d", &pow);
    tempPow = pow;
    while(pow>0){
        result = result * num;
        pow--;
    }
    printf("%d ^ %d = %d\n", num, tempPow, result);

    return 0;
}