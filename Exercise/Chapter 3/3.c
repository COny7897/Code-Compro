#include<stdio.h>

int a;

int main(){
    printf("Enter temperature in degree Romer : ");
    scanf("%d", &a);
    printf("Temparature in degree Celcius : %.2f\n", a*1.25);
    return 0;
}