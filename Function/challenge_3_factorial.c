#include <stdio.h>
int factorial(int num){
    int result = 1;
    for (int i = 1; i <= num; i++){
        result = result * i;
    }
    return result;
}

int main(){
    int num;
    printf("Enter a Num: ");
    scanf("%d", &num);

    int fact = factorial(num);
    printf("Factorial of %d is %d", num, fact);
    
    return 0;

}