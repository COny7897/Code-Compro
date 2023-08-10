#include<stdio.h>

int main() {
    int num, a, b, c, d, e = 0;
    printf("Enter a number (100-995) : ");
    scanf("%d", &num);
    if(num < 100 || num > 995){
        printf("Out of range : %d", num);
    }else {
        for(a = 0; a <= 4; a++){
            b = num + a;
            c = (b%10)*100+((b%100)/10)*10+(b/100);
            if(b >= c){d = b - c;}
            else {d = c - b;}
            printf("| %-3d - %-3d | = %3d\n", b, c, d);
            e += d;
        }
        printf("summation : %d", e);
    }
    return 0;
}