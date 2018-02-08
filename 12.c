#include<stdio.h>
void main()
{
    int i,n,b,m,sum=0;
    //scanf("%d",&n); m=n;
    for(i=100;i<155;i++)
    {
        n=i;
    while(n!=0)
    {
       b=n%10;
       sum=sum*10+b;
       n=n/10;
       
    }
    if(i==sum)
    {
         printf("%d\n",sum); sum=0;
    }
        else
    sum=0;
}
}
