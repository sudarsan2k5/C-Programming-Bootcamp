#include <stdio.h>

int main(){
    int size;
    printf("Enter size: ");
    scanf("%d", &size);

    int a = -1;
    int b, res = 1;
    
    for(int i = 0; i < size; i++){
        printf("Enter a Number: ");
        scanf("%d", &b);
        printf("%d ", b);

        if(a > b){
            res = 0;
        }

        a = b;
    }
    printf("\n");

    if(res == 1){
        printf("Very Ascending");
    } else {
        printf("Not Very Ascending");
    }

}