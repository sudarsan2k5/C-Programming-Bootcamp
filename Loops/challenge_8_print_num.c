#include <stdio.h>

int main(){
    int num;
    printf("Enter a Num: ");
    scanf("%d", &num);

    for(int i = 1; i <= num; i++){
        printf("%d ", i);
    }
    printf("\n");
    for (int i = num; i > 0 ; i--)
    {
        printf("%d ", i);
    }

    return 0;
}