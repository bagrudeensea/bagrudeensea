#include <stdio.h>
void main()
{
	int n=6,temp=0;
	int a[]={'2','6','9'};
	for(i=0;i<=6;i++)
	{
		for(j=1;j<=2;j++)
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
		printf("\n%d",a[0]);
		
	}
	printf("\n%d",a[2]);
}
