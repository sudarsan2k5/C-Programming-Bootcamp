#include <stdio.h>

int main(){

    int num, power;
    int i = 0;
    int ans = 1;
    printf("Enter your num: ");
    scanf("%d", &num);
    printf("Enter power: ");
    scanf("%d", &power);

    while(i < power){
        ans = ans * 2;
        i++;
    }
    printf("%d ^ %d = %d", num, power, ans);
    return 0;
}