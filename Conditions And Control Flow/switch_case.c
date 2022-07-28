#include <stdio.h>
#include <stdlib.h>

int main(){
    char grade; //not an int 
    printf("Enter your grade(A-F): ");
    scanf("%c", &grade);
    switch (grade){
        case 'A':
            printf("Grade between 90-100\n");
            break;
        case 'B':
            printf("Grade between 80-89\n");
            break;
        case 'C':
            printf("Grade between 70-80\n");
            break;
        case 'D':
            printf("Grade between 60-60\n");
            break;
        default:
            printf("Error.. Try Again\n");
    }

    return 0;
}