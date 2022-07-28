#include <stdio.h>

int main(){
    int a, b, c;
    int max, min;
    printf("Enter three num: ");
    scanf("%d %d %d",&a, &b, &c);

    max = a;
    min = b;
    if(a<b){
        max = b;
        min = a;
    }
    if(max < c){
        max = c;
    }
    if(c<min){
        min = c;
    }
    printf("Maximum between three num: %d\n", max);
    printf("Minimum between three num: %d\n", min);

    return 0;
}