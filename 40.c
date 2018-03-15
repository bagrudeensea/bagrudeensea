#include <stdio.h>

int main(void) {
int n;
scanf("%d",&m);
int next,first=0,second=1,i;

for(i=0;i<m;i++)
{
	if(m==1)
{
next=m;

}
else
{
	first=second;
second=next;
next=first+second;


}
printf("%d ",next);
}


	return 0;
}
