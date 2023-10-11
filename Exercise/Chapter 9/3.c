#include<stdio.h>

void sort(int *pR){
    int i, j, a;
    for(i = 0; i < 4; i++){
        for(j = i + 1; j < 5; j++){
            if(*(pR+j) < *(pR+i)){
                a = *(pR+j);
                *(pR+j) = *(pR+i);
                *(pR+i) = a;
            }
        }
    }
}

int main()
{
    int ratings[5];
    printf("Enter 5 rating : ");
    for (int i = 0; i < 5; i++)
        scanf("%d", &ratings[i]);
    sort(ratings);
    printf("Sorted : ");
    for (int i = 0; i < 5; i++)
        printf("%d ", ratings[i]);
}