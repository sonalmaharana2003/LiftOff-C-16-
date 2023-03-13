#include<stdio.h>
void main()
{
	int D;
	printf("enter the number:");
	scanf("%d",&D);
	if(D>0)
	printf(" %d is +ve",D);
	else if(D<0)
	printf("%d is -ve",D);
	else if(D==0)
	printf("%d is zero",D);
}