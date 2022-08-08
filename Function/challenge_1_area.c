#include <stdio.h>

int getArea(int height, int weidth){
    int area = height * weidth;
    return area;
}


int main (){
    int height;
    printf("Enter Height: ");
    scanf("%d", &height);
    int width;
    printf("Enter Width: ");
    scanf("%d", &width);

    int res = getArea(height, width);
    printf("Area: %d", res);
    return 0;
}