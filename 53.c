# include<stdio.h>
int getSum(int n)
{ 
   int sum = 0;
   while (n != 0)
   {
       sum = sum + n % 10;
       n = n/100;
   }
   return sum;
}
 
int main()
{
  int n;
  scanf("%d",&n);
  printf("\n %d ", getSum(n));
  return 0;
}
