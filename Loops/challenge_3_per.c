#include <stdio.h>

int main(){
int grade;
int totalSum = 0, gradeCount = 0;
printf("Enter your grade or -1 to stope");
scanf("%d", &grade);

while(grade != -1){
    totalSum = totalSum + grade;
    gradeCount++;
    printf("Enter your grade or -1 to stope");
    scanf("%d", &grade);
}
printf("you've entered %d grades!\n",gradeCount);
printf("Your avg grade is %f\n", (float)totalSum/gradeCount);

    return 0;
}