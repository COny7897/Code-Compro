#include<stdio.h>

char firstname[20],lastname[20];

int main(){
    printf("Enter full name : ");
    scanf("%s %s", firstname,lastname);
    printf("[ %.2s%.1sky ]", firstname,lastname);
    return 0;
}