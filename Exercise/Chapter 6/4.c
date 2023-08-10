#include<stdio.h>

int main() {
    int num, a, b, c;
    printf("Enter : ");
    scanf("%d", &num);
    for(a = 1; a <= num; a++){
        c = 64 + a;
        for(b = 1; b <= num; b++){
            if(c == num + 65){
                c = 65;
            }
            printf("%c", c);
            c++;
        }
        printf("\n");
    }
    return 0;
}