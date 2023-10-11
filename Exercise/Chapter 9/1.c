#include<stdio.h>

void add_money_to_wallet(int *money, int income){
    *money += income;
}

int main()
{
    int wallet = 20, income;
    printf("Enter money : ");
    scanf("%d", &income);
    add_money_to_wallet(&wallet, income);
    printf("My wallet -> %d", wallet);
}