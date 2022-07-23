#include <stdio.h>

int main(){

    double celsius;
    double fahrenheit;
    printf("Enter your temp in celsius: ");
    scanf("%lf", &celsius);
    fahrenheit = celsius * 1.8 + 32;

    printf("Temperature in Fahrenheit is: %lf\n", fahrenheit);

    return 0;
}