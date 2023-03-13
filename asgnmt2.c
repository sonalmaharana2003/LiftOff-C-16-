#include<stdio.h>
#define pi 3.142
void main()
{
	int r,d,c,a;
	printf("enter radius of circle:");
	scanf("%d",&r);
	d=2*r;
	printf("diameter of circle:%d",d);
	c=2*pi*r;
	printf("circumference of circle:%d",c);
	a=pi*r*r;
	printf("area of circle:%d",a);
}
	
	