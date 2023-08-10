#include<stdio.h>

int main() {
    int num, a, b, c = 9;
    printf("input (1-20)  : ");
    scanf("%d", &num);
    if(num < 1 || num > 20){
        printf("\nNo Answer");
    }else{
        printf("\n ");
        for(a = 1; a <= num; a++){
            for(b = 1; b <= num; b++){
                if(c == 0){
                    c = 9;
                }
                printf(" %d ", c);
                c--;
            }
            printf("\n ");
        }
    }
    return 0;
}