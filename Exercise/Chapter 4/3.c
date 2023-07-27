#include<stdio.h>

int main(){
    char a;
    printf("Enter Alphabet : ");
    scanf("%s", &a);
    if((a == 'A')||(a == 'a')){
        printf("YES");
    } else {
        printf("NO");
    }
    return 0;
}