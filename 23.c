#include <stdio.h>

int main(void) 
{
	int n,i,a[n],min;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);	
	}
	min=a[0];
	for(i=0;i<n;i++)
	{
		
	if(min>a[i])
	min=a[i];
	}
	printf("\n%d",min);
	return 0;
}
