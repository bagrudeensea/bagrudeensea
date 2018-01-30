#include<stdio.h>
#include<conio.h>
void main()
{
long int sum=0,i,n;
printf(" Please Give The Value of N:  ");
scanf("%ld",&n);
for(i=1;i<=n;i++)
{
printf("5 * %ld = %ld",i,5*i);
getch();
}
