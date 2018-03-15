#include<stdio.h>
void main()
{
	int a,b,t;
	printf("\nEnter the Two Numbers :");
	scanf("%d%d",&a,&b);
	t=a;
	a=b;
	b=t;
	printf("\nThe Swap of Two Numbers :%d\t%d",a,b);
}
