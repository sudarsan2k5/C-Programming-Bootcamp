#include <stdio.h>

int main(){
    int grade;
    printf("Enter your grade: ");
    scanf("%d", &grade);
    if(grade >= 90){
        printf("Excellent Job!");
    }else if(grade >= 60){
        printf("Not bad...");
    }else{
        printf("Oh..you didn't pass..\n");
    }

    return 0;
}
