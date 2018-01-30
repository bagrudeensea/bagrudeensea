
#include<stdio.h>
void main()
{
int i,a;
    printf("Enter a value");
    scanf("%d",&a);
   
    for(i=2;i<=a/2;i++)
    {
        if(a%i!=0)
            continue;
        else
            break;
    }
    if((a/2+1)==i)
        {
            printf("Prime");
        }
    else
    {
        printf("Not a Prime");
    }
}
