#include <stdio.h>

int main(){
    double a, sum, d, an;
    int n;
    printf("Enter Valu of a: ");
    scanf("%lf", &a);
    printf("Enter Valu of n: ");
    scanf("%d", &n);
    printf("Enter Valu of d: ");
    scanf("%lf", &d);

    an = a + (n - 1)*d;
    sum = (a + an)*n/2;
    printf("Sum of AP: %lf\n", sum);

    return 0;
}