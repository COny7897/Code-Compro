#include<stdio.h>

void swap_wallet(int *pMW, int *pOW){
    int a;
    a = *pMW;
    *pMW = *pOW;
    *pOW = a;
}

int main()
{
    int my_wallet, other_wallet;
    printf("Enter my money, other money : ");
    scanf("%d %d", &my_wallet, &other_wallet);
    printf("Me : %4d | Other : %4d", my_wallet, other_wallet);
    swap_wallet(&my_wallet, &other_wallet);
    printf("\n\n====== Whooop! ======\n\n");
    printf("Me : %4d | Other : %4d", my_wallet, other_wallet);
}