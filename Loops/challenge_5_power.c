#include <stdio.h>

int main(){
    int num, pow, result = 1;
    printf("Enter a Num: ");
    scanf("%d", &num);
    printf("Enter a pow: ");
    scanf("%d", &pow);
    
    for(int i = 0; i < pow; i++){
        result = result * num;
    }

    printf("%d ^ %d = %d", num, pow, result);
    return 0;
}