#include <stdio.h>
#include <math.h>

int main(){
int a, b, c;
printf("Enter three num A, B, C: ");
scanf("%d%d%d", &a, &b, &c);

if ((a % b == 0 || b % a == 0) && (b % c == 0 || c % b == 0) && (a % c == 0 || c % a == 0)){
    printf("Divisible number!\n");
}
else
    printf("Not Divisible number");

        return 0;
}