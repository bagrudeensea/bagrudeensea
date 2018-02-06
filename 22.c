#include<stdio.h>
void main()
{
int p,a[20],i,m;
printf("enter a number");
scanf("%d",&p);
printf("enter the numbers");
for(i=0;i<p;i++)
scanf("%d",&a[i]);
m=a[0];
for(i=1;i<p;i++)
{
if(a[i]>m)
m=a[i];
}
printf("%d",m);
}
