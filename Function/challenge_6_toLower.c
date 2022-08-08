#include <stdio.h>

 char toLower(char letter){
     if(letter >= 'A' && letter <= 'Z'){
        char valu = letter - 'A' + 'a';
        printf("%c", valu);
     }else{
        printf("-1");
     }
 }
int main(){
    char ch;
    printf("Enter a latter: ");
    scanf("%c", &ch);

    toLower(ch);
     return 0;
}