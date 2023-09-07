#include<stdio.h>
#include<ctype.h>

int main() {
    char letter[200], Capital_letter[200] = "", Small_letter[200] = "", Title_letter[200] = "";
    printf("Enter a string : ");
    scanf("%[^\n]", letter);
    for(int i = 0; letter[i] != '\0'; i++){
        Capital_letter[i] = toupper(letter[i]);
        Small_letter[i] = tolower(letter[i]);
        if((i == 0)||(letter[i - 1] == ' ')){
            Title_letter[i] = toupper(letter[i]);
        }else {
            Title_letter[i] = tolower(letter[i]);
        }
    }
    printf("Capital : %s\n", Capital_letter);
    printf("Small : %s\n", Small_letter);
    printf("Title : %s\n", Title_letter);
    return 0;
}