#include<stdio.h>

int main(){
    char name[20];
    int c = 0;
    printf("Enter your name : ");
    scanf("%s",name);
    for(int i = 0; name[i] != '\0';i++){
        printf("%c\n", name[i] - 32);
        c++;
    }
    printf("Name length : %d",c);
}