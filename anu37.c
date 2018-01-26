#include<stdio.h>
void main()
{
	int a,b,c;
	printf("enter 2 numbers to be swapped");
	scanf("%d%d",&a,&b);
	c=a;
	a=b;
	b=c;
	printf("values after swapping=%d %d",a,b);
}
