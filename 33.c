#include<stdio.h>
#include<string.h>
int main(void)
{
	char a[100];
	int n,i,count=0;
	scanf("%[^\t\n]s",b);
	n=strlen(b);
	for(i=0;i<n;i++)
	{
		if(b[i]==' ')
		count++;
	}
	if(count>0)
	printf("%d",count);
}
