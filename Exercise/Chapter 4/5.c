#include<stdio.h>

int main(){
    char name[100];
    int x, a, b ,c, Min, Mid, Max;
    printf(" *** Program ***\n");
    printf("Enter a function number(1-3) : ");
    scanf("%d", &x);

    switch (x)
    {
    case 1:
        scanf("%s", name);
        printf("Name : %s", name);

        break;
    case 2:
        scanf("%d %d", &a, &b);
        if(a > b){
            printf("Max - Min : %d - %d = %d", a, b, a - b);
        } else if (b > a){
            printf("Max - Min : %d - %d = %d", b, a, b - a);
        } else{
            printf("%d is equal %d, Max - Min = 0", a, b);
        }

        break;
    case 3:
        scanf("%d %d %d", &a, &b, &c);
        if((a >= b) && (a >= c)){Max = a;}
	    else if ((b >= a) && (b >= c)){Max = b;}
	    else{Max = c;}
	
        if((a <= b) && (a <= c)){Min = a;}
	    else if ((b <= a) && (b <= c)){Min = b;}
	    else{Min = c;}

        if (((a >= b)&&(a <= c))||((a >= c)&&(a <= b))) {Mid = a;}
	    else if (((b >= a)&&(b <= c)||((b >= c)&&(b <= a)))) {Mid = b;}
	    else {Mid = c;}

        printf("(Min + Max) / Mid : (%d + %d) / %d = %.2f",Min, Max, Mid, (Min*1.0 + Max)/Mid);
        
        break;
    
    default:
        printf("Your function is ERROR");
        break;
    }

    return 0;
}