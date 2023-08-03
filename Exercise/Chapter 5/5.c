#include<stdio.h>

int main(){
    int a;
    printf("Enter number : ");
    scanf("%d", &a);
    if(a <= 0){
        printf("</3");
    }else if(a > 10){
        printf("Too much :(");
    }else {
        for(int i = 0; i <= a - 1; i++){
            printf("I Love You\n");
        }
    }
}