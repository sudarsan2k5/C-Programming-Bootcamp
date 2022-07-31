#include <stdio.h>

int main(){
    int count;
    printf("Enter a number: ");
    scanf("%d", &count);

    int num = 2;
    while (count > 0)
    {
        printf("%d ", num);
        count--;
        num = num + 2;
    }
    


    return 0;
}