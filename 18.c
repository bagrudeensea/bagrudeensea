#include<stdio.h>
#inculde<conio.h>
void main()
{
  int n1, n2, a, temp, num, rem;
  printf("Enter two numbers(intervals): ");
  scanf("%d %d", &n1, &n2);
  printf("Armstrong numbers between %d an %d are: ", n1, n2);
  for(a=n1+1; a<n2; ++a)
  {
      temp=a;
      num=0;
      while(temp!=0)
      {
          rem=(temp%10);
          num+=rem*rem*rem;
          temp/=10;
      }
      if(a==num)
      {
          printf("%d ",a);   
      }
  }
getch();
}
