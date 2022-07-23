#include <stdio.h>

int main(){

    int currentYear;
    int age;
    printf("Current year: ");
    scanf("%d", &currentYear);
    printf("Age: ");
    scanf("%d", &age);
    printf("You were born: %d\n", currentYear - age);
    
    return 0;
}