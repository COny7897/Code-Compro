#include<stdio.h>

int main(){
    int a, x;
    printf(" *** Show absolute value *** \n");
    printf("Enter an integer : ");
    scanf("%d", &a);
    if(a >= 0){x = a;}
    else {x = a*(-1);}
    printf("Absolute value of %d is |%d| = %d", a, a, x);
    return 0;
}