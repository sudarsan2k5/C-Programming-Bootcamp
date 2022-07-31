#include <stdio.h>

int main(){
    int num, sum = 0;
    do{
        printf("Enter a num and 0 to stop: ");
        scanf("%d", &num);
        sum = sum + num;
    } while (num != 0);

    printf("The total Sum: %d", sum);

    return 0;
}