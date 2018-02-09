#include <stdio.h>

int main() {
	
	int a,b,c;
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
int max;
if(a>b && a>c)
{
printf("\n%d is greater",a);
}
else if(b>a && b>c)
{
printf("\n%d is greater",b);
}
else
{
printf("\n%d is greater",c);
}
	return 0;

}
