#include <stdio.h>

int main()
{
	int h,m,hr,min,hr1,min1;
	printf("\nenter time");
	scanf("%d\t%d",&hr,&min);
	printf("\nenter 2 time");
	scanf("%d\t%d",&hr1,&min1);
	h=hr-hr1;
	m=min-min1;
	printf("\nsub time%d\t%d",h,m);
	return 0;
}
