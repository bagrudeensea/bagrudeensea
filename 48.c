#include <stdio.h>

int main(void) {
	int n,sum=0,i;
	scanf("%d",&m);
	int a[m];
	for(i=0;i<m;i++)
	{
		scanf("%d",&a[i]);	
	}
	for(i=0;i<m;i++)
	{
		sum=sum+a[i];
	}
	int avg=sum/m;
	printf("\n%d",avg);
	
	return 0;
}
