#include <stdio.h>

int main(){
    int num;
    printf("Enter a num: ");
    scanf("%d", &num);

    int a = 1;
    int n = 1;
    for(int i = 1; i <= num; i++){
        for (int k = 1; k <= num - i; k++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++){
        
            printf("%d ", j);
            n++;
        }
        printf("\n");
 
    }
    return 0;
}