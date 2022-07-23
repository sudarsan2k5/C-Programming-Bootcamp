#include <stdio.h>

int main(){
    int totalSecond;
    int hours, minutes, remainingSecond;
    printf("Enter total second (that you want to convert): ");
    scanf("%d", &remainingSecond);
    hours = totalSecond / 3600;
    minutes = (totalSecond - hours * 3600) / 60;


    printf("Total Hours: %d\n", hours);
    printf("Total Hours: %d\n", minutes);
    printf("Total Hours: %d\n",remainingSecond);
    remainingSecond = (totalSecond - hours * 3600) % 60;
    return 0;
}