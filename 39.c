#include <stdio.h>

int main(void) {
	int i,temp;
	
	int a[100];
	for(i=0;i<100;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<100;i++)
	{
		
		
			if(a[i]>a[i+1])
			{
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
			}
			
		
	
	}
	printf("%d",a[i]);
	return 0;
}
