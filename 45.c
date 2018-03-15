#include<stdio.h>
            int main()
            {
            	int n=489799,count=0,u;
            	while(n>0)
            	{
            		u=n%10;
            		n=n/10;
            		count++;
            	}
            	return count;
            }
