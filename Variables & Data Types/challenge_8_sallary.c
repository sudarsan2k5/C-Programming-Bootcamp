#include <stdio.h>

int main(){
    double sallaryPerHour, totalHour,sallary;
    printf("Enter Sallary Per Hour: ");
    scanf("%lf", &sallaryPerHour);
    printf("Enter Total Hour: ");
    scanf("%lf", &totalHour);

    sallary = sallaryPerHour * totalHour;
    printf("Sallary: %.2lf\n", sallary);


    return 0;
}