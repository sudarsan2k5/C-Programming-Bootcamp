#include <stdio.h>

int main(){

    int x, y;
    printf("Enter your x and y: ");
    scanf("%d%d", &x, &y);

    if(x > 0 && y > 0){
        printf("Q-1");
    } else if(x < 0 && y > 0){
        printf("Q-2");
    } else if(x < 0 && y < 0){
        printf("Q-3");
    } else if(x > 0 && y < 0){
        printf("Q-4");
    } else {
        printf("(%d, %d) is origin", x, y);
    }

    return 0;
}