#include<stdio.h>

int main(){
    int a,b,z,y = 123;
    printf("Enter a number : ");
    scanf("%d", &a);
    for(b = 0; b <= a - 1; b++){
        for (z = y - 1; z >= y - a; z--)
        {
            printf("%c", z);
        }
        y--;  
        printf("\n");
    }
}