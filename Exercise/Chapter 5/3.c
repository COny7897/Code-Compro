#include<stdio.h>

int main(){
    char a[200];
    printf(" *** To Lower Case ***\n");
    printf("Enter a string : ");
    scanf("%[^\n]",a);
    printf("Output : ");
    for(int i = 0; a[i] != '\0'; i++){
        if(a[i] >= 65 && a[i] <= 90){
            printf("%c", a[i] + 32);
        } else {
            printf("%c", a[i]);
        }
    }
}