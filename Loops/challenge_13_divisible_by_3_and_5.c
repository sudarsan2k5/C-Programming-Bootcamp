#include <stdio.h>

int main(){

    int num;
    int sum = 0;
    printf("Enter a Num: ");
    scanf("%d", &num);

    for(int i = 1; i <= num; i++){
        if(i % 3 == 0 && i % 5 == 0){
            sum = sum + i;
            printf("%d\n", i);
        }
    }
    printf("Sum: %d", sum);
    return 0;
}