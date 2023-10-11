#include<stdio.h>

void number2word(int a, char *pSTR){
    int i;
    char numword[10][10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    if(a <= 9){
        for(i = 0; i <= 15; i++){
            *(pSTR + i) = numword[a][i];
        }
    }
}

int main() {
    char phone_number[15],str[15]="nothing";
    int i;
    printf("*** Number to words ***\n");
    printf("Enter phone number : ");
    scanf("%s",phone_number);
    printf("%s ==> ",phone_number);
    for(i=0;phone_number[i] != '\0';i++) {
        number2word(phone_number[i]-0x30,str);
        printf("%s ",str);
    }
    printf("\n");
    return 0;
}