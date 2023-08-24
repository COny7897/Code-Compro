#include<stdio.h>

int min;
int max;

void computeMinMax(int,int,int,int);

int main() {

  	int a,b,c,d;

  	printf(" *** Find Min and Max value of 4 inputs ***\n");

   	printf("Enter 4 integers : ");

  	scanf("%d %d %d %d",&a,&b,&c,&d);

  	computeMinMax(a,b,c,d);

  	printf("The minimum number is %d\n",min);

    printf("The maximum number is %d\n",max);

	return 0;

}

void computeMinMax(int w, int x, int y, int z){
    if((w >= x) && (w >= y) && (w >= z)){max = w;}
    else if((x >= w) && (x >= y) && (x >= z)){max = x;}
    else if((y >= w) && (y >= x) && (y >= z)){max = y;}
    else if((z >= w) && (z >= y) && (z >= x)){max = z;}

    if((w <= x) && (w <= y) && (w <= z)){min = w;}
    else if((x <= w) && (x <= y) && (x <= z)){min = x;}
    else if((y <= w) && (y <= x) && (y <= z)){min = y;}
    else if((z <= w) && (z <= y) && (z <= x)){min = z;}

}