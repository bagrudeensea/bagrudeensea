#include <stdio.h>

int main() 
{
	char s[100];
	int i,count=0;

	scanf("%[^\n]s",s);
	for(i=0;s[i]!='\0';i++)
	{
		if(!((s[i]>='0' && s[i]<='9')||(s[i]>='a' && s[i]<='z')))
		{
			count=count+1;
		}
	}
	printf("%d",count);
	return 0;
}
