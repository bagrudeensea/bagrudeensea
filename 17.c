#include<stdio.h>
#include<conio.h>
void main()
{
int n,l,j,count=0,sum=0;
scanf("%d",&n);
l=n;
while(l!=0){
    l=l/10;
    count++;
}
l=n;
while(n!=0){
    j=n%10;

    printf("\n%d",j);
    sum=sum+pow(j,count);
    printf("\n%d",sum);
    n=n/10;
}
if(l==sum)
    printf("yes");
else
    printf("no");
getch();
}
