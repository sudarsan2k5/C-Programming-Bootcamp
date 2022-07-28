#include <stdio.h>
#include <math.h>

int main(){
    int num;
    printf("Enter interger (whether positive or nagetive): ");
    scanf("%d", &num);

    if(num < 0){
        printf("the absolute value of %d is %d", num, -1 * num);
    }
    else{
        printf("the absolute value of %d is %d", num, num);
    }



    return 0;
}