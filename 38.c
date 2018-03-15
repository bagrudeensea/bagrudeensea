#include <stdio.h>
int main(void) {
int a,b;
scanf("\n%d %d",&a,&b);
a=a^b;
b=a^b;
a=a^b;
printf("\n%d %d",a,b);
return 0;
}
