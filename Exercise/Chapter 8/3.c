#include <stdio.h>

int main()
{
    int a[10], b, max = 0, i;
    printf(" *** Maximum diference of adjacent number ***\n");
    printf("Enter 10 integers : ");
    for (i = 0; i < 10; i++){
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 9; i++){
        b = a[i] - a[i+1];
        if(b < 0){b = (-1)*b;}
        if(max < b){max = b;}
    }
    printf("Maximum differnce is %d", max);
    return 0;
}