#include<stdio.h>
void main()
{
	int n,sum;
	printf("enter a value whose sum of digits are to be calculate:");
	scanf("%d",&n);
	do
	{
		sum=sum+(n%10);
		n=n/10;
	}
	while(n>0);
	printf("sum of digit is %d",sum);
}