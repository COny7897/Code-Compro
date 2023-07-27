#include<stdio.h>

int main(){
    char a;
    printf("Enter Character : ");
    scanf("%s", &a);
    if(a >= 65 && a <= 90){
        printf("%c is Capital Letters.\n", a);
        printf("Small Letters of %c is %c", a, a+32);
    } else if(a >= 97 && a <= 122){
        printf("%c is Small Letters.\n", a);
        printf("Capital Letters of %c is %c", a, a-32);
    } else if(a >= 48 && a <= 57){
        printf("%c is Number.", a);
    } else {
        printf("%c is Special character.", a);
    }
    return 0;
}