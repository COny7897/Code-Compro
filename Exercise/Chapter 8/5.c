#include <stdio.h>

int main()
{
    struct student{
        char ID[9];
        char NAME[40];
        int SCORE;
    }st[10];

    int a = 0, b = 0,  i, max = 0, min = 0;
    printf(" *** Structure Array 2 ***\n");
    printf("Enter data : ");
    for(i = 0; i < 10; i++){
        scanf("%s %s %d", st[i].ID, st[i].NAME, &st[i].SCORE);
    }
    printf("\n\n");
    for(i = 0; i < 10; i++){
        if(st[i].SCORE > max){
            max = st[i].SCORE;
        }
    }
    for(i = 0; i < 10; i++){
        if(st[i].SCORE == max){
            ++b;
        }
    }  
    printf(" *** Analyzing Data ***\n");
    printf("Max marking   = %d points, %d students.\n", max, b);
    b = 0;
    for(i = 0; i < 10; i++){
        if(st[i].SCORE == max){
            printf("%d. %s %s %d\n", ++b, st[i].ID, st[i].NAME, st[i].SCORE);
        }
    }
    return 0;
}