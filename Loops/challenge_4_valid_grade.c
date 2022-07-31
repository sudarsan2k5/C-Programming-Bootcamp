#include <stdio.h>

int main(){
    int grade;
    do{
        printf("Enter a grade: ");
        scanf("%d", &grade);
    }while(grade < 0 || grade > 100);

    printf("You entered a valid grade: %d\n", grade);
    
    return 0;
}