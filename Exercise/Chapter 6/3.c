#include<stdio.h>

int main() {
    int num, a, b, c;
    printf("Enter a number (1-16) : ");
    scanf("%d", &num);
    if(num < 1 || num > 16){
        printf("Out of range ! ! !");
    }else{
        for(a = 1; a <= num; a++){
            for(b = num; b >= 1; b--){
                if(a == 1 || a == num || b == 1 || b == num){
                    if(b > 9){
                        printf("%c", b + 55);
                    }else{
                        printf("%d", b);
                    }
                }else{
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
    return 0;
}