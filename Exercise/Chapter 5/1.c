#include<stdio.h>

int main(){
    int a,b,i,j;
    printf("input : ");
    scanf("%d", &a);
    if(a == 0){
        printf("\n0 is out of range !!!\n");
    } else {
        for(i = a; i >= 0; i--){
            for (b = a; b >= i + 1; b--)
            {
                printf("%d", b);
            }
            printf("\n");
        }
    }
    return 0;
}