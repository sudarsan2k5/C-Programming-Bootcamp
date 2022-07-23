#include <stdio.h>

int main(){

    double fahrenheit;
    double celsius;
    printf("Enter your temp in fahrenheit: ");
    scanf("%lf", &fahrenheit);
    celsius = (fahrenheit - 32) / 32;

    printf("Temperature in celsius is: %lf\n", celsius);

    return 0;
}