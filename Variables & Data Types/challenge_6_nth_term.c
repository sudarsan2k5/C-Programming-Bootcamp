#include <stdio.h>

int main(){
    int a, n, d;
    int ans;
    printf("Enter Valu of a: ");
    scanf("%d", &a);
    printf("Enter Valu of n: ");
    scanf("%d", &n);
    printf("Enter Valu of d: ");
    scanf("%d", &d);

    ans = a + (n - 1)*d;
    printf("Nth term: %d\n", ans);

    return 0;
}