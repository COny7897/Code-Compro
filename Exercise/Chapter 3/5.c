#include<stdio.h>

int a,b,c;
char x[6];

int main(){
    printf("Enter lottery number : ");
    scanf("%d",&a);
    b = c = a;
    printf("Jackpot : %d\n", a);
    printf("+1      : %d\n", ++b);
    printf("-1      : %d\n", --c);
    sprintf(x,"%d",a);
    printf("First 3 : %.3s\n", x);
    printf("Last 3  : %c%c%c", x[3],x[4],x[5]);
    return 0;
}
// #include<stdio.h>

// int a,b,c;

// int main(){
//     printf("Enter lottery number : ");
//     scanf("%d",&a);
//     b = c = a;
//     printf("Jackpot : %d\n", a);
//     printf("+1      : %d\n", ++b);
//     printf("-1      : %d\n", --c);
//     printf("First 3 : %d\n", x/1000);
//     printf("Last 3  : %d", x%1000);
//     return 0;
// }