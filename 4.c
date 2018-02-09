#include <stdio.h>
int main(void) {
char ch;
scanf("%c",&ch);
if(ch>='a'&& ch<='z' || ch>='A'&& ch<='Z')
{
printf("\nIT IS AN ALPHABET");


}
else
{
printf("\nIT IS NOT AN ALPHABET");
}


return 0;
}
