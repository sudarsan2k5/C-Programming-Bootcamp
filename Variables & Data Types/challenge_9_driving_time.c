#include <stdio.h>

int main(){
    double speed, distance,time;
    printf("Enter speed: ");
    scanf("%lf", &speed);
    printf("Enter distance: ");
    scanf("%lf", &distance);

    time = distance / speed;
    printf("Driving Time: %.1lf\n", time);


    return 0;
}