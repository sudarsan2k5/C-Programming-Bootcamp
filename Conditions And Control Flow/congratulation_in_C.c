#include <stdio.h>

int main(){

    int grade;
    scanf("%d", &grade);
    if(grade >= 60)
        printf("congratulation!\n");
    else
        printf("Falied...try again.\n");

    return 0;
}