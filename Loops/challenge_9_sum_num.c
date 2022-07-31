#include <stdio.h>

int main(){
    int num, ans = 0;
    printf("Enter a num: ");
    scanf("%d", &num);

    for(int i = 1; i<= num; i++){
        ans = ans + i;
    }
    printf("Sum = %d", ans);
    return 0;
}