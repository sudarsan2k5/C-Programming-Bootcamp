#include <stdio.h>

int main(){

    double hight, width;
    printf("Enter hight of rectangle: ");
    scanf("%lf", &hight);
    printf("Enter width of rectangle: ");
    scanf("%lf", &width);

    double area = hight * width;
    printf("Area of rectangle is: %.2lf\n", area);


    return 0;
}