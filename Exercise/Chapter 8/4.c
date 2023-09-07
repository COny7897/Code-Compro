#include <stdio.h>

int main()
{
    struct student{
        char ID[9];
        char NAME[40];
        int SCORE;
    }st[10];

    int a = 0, i, max = 0, min = 0;
    float avg;
    printf(" *** Structure Array ***\n");
    printf("Enter data : ");
    for(i = 0; i < 10; i++){
        scanf("%s %s %d", st[i].ID, st[i].NAME, &st[i].SCORE);
    }
    printf("\n\n");
    for(i = 0; i < 10; i++){
        if(st[i].SCORE > max){max = st[i].SCORE;}
        else if(st[i].SCORE < st[i-1].SCORE){min = st[i].SCORE;}
        a += st[i].SCORE;
    }
    avg = a/10.0;
    printf(" *** Analyzing Data ***\n");
    printf("Average marking = %.3f\n", avg);
    printf("Min -- Max      = %d --> %d", min, max);
    return 0;
}