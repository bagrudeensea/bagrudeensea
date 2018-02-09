#include<studio.h>
 void main()
{
   int a;
   printf(" Enter a numeric element:");
   scanf( "%d", &a );
   if( isdigit(a) )
        printf(" It is a Numeric number:%d\n",a);
    else
        printf(" It is not a Numeric number:%d\n",a);
    return 0;
}
