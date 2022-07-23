#include <stdio.h>

int main(){

    int grade1, grade2, grade3;
    double average;
    printf("First Num: ");
    scanf("%d", &grade1);
    printf("Second Num: ");
    scanf("%d", &grade2);
    printf("Third Num: ");
    scanf("%d", &grade3);
    average = (double)(grade1 + grade2 + grade3) / 3;
    printf("Avrage: %lf\n", average);
    return 0;
}