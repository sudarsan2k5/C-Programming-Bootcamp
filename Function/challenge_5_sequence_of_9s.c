#include <stdio.h>
int sequence(int num){
    int l = 0;
    for (int i = 0; i < num; i++){
        l = l * 10 + 9;
    }
    return l;
}

int main(){
    int num;
    printf("Enter a num: ");
    scanf("%d", &num);

    int result = sequence(num);
    printf("%d", result);
    return 0;
}