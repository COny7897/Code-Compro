#include<stdio.h>

int main() {
    int num, a, b;
    printf(" *** Show isosceles triangle ***\n");
    printf("Enter a counting number : ");
    scanf("%d", &num);
    if(num < 3){
        printf(" --- Incorrect number. ---");
    }else {
        printf("Output : \n");
        for(a = 1; a <= num; a++){
            for(b = 1; b <= num*2 - 1; b++){
                if(a + b > num && b - a < num){
                    printf("*");
                }else {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
    return 0;
}
