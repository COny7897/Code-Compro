#include<stdio.h>

int a;

int main(){
    printf(" *** Show a number in variety formats. *** \n");
    printf("Enter integer : ");
    scanf("%d", &a);
    printf("Char    -> %c\n", a);
    printf("Float   -> %.2f\n", a*1.0);
    printf("Int*2.5 -> %.4f", a*2.5);
    return 0;
}