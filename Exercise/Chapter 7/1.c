#include<stdio.h>
#include<stdbool.h>

bool has_TA_in(char string[]);

int main() {
    char name[20];
    printf("Enter your name : ");
    scanf("%s", name);
    if(has_TA_in(name)){
        printf("Your are cute >///<");
    }else {
        printf("Not cute ._.");
    }
}

bool has_TA_in(char string[]){
    bool check_T = false,check_t = false, check_A = false;
    for(int i = 0; string[i] != '\0'; i++){
        if((string[i] == 'T')){
            check_T = true;
        }else if((string[i] == 't')){
            check_t = true;
        }
        if((check_T == true) || (check_t == true)){
            if((string[i] == 'A')){
                check_A = true;
            }else if((string[i] == 'a') && (check_T == false)){
                check_A = true;
            }
        }
    }
    return (check_T == true || check_t == true) && check_A == true;
}
