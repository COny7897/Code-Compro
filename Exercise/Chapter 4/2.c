#include<stdio.h>

int main(){
	int a, b, c, Max, Min;
	printf(" *** Find (Minimum + Maximum) / 2 ***\n");
	printf("Enter 3 integers : ");
	scanf("%d %d %d", &a, &b, &c);
	
    if((a >= b) && (a >= c)){Max = a;}
	else if ((b >= a) && (b >= c)){Max = b;}
	else{Max = c;}
	
    if((a <= b) && (a <= c)){Min = a;}
	else if ((b <= a) && (b <= c)){Min = b;}
	else{Min = c;}
    
	printf("(Min + Max) / 2 = (%d + %d) / 2 = %.5f", Min, Max, (Min*1.0 + Max)/2);
    return 0;
}
 
