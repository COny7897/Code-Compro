#include<stdio.h>

int main() {
    int a[10], b, i, j, k;
    printf(" *** Ascending sort ***\n");
    printf("Enter 10 whole numbers : ");
    for(i = 0; i < 10; i++){
        scanf("%d", &a[i]);
    }
    printf("Output : ");
    for(j = 0; j < 10; j++){
        for(k = 0; k < 9; k++){
            if(a[k]>a[k+1]){
                b = a[k];
                a[k] = a[k+1];
                a[k+1] = b;
            }
        }
    }
    for(i = 0; i < 10; i++){
        printf("%d ", a[i]);
    }
    return 0;
}