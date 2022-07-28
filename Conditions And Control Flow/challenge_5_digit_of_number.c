#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int num;

    printf("Enter your Num: ");
    scanf("%d", &num);

    if(num <= 10 || num <= 99){
        printf("%d number is double digit ", num);
    }
    else if(num >= 100 || num <= 999){
        printf("%d number is thiple digit ", num);
    }
    else{
        printf("%d number is a neither double digit nor thiple digit");
    }

            return 0;
}