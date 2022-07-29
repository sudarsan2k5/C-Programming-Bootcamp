#include <stdio.h>

int main(){
    int grade;
    printf("Enter a Num and -1 to stop: ");
    scanf("%d", &grade);

    int totalGrade = 0;
    int count = 0;
    
    while (grade  != -1){
        totalGrade += grade;
        count ++;
        
        printf("Enter a Num and -1 to stop: ");
        scanf("%d", &grade);
    }
    float avg = totalGrade / count;
    printf("The avg is: %lf",  avg);
}