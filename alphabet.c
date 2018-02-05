#include<stdio.h>
main()
{
char a;
printf("enter any letter");
scanf("%c",&a);
if((a>='a' && a<='z')||(a>='A' && a<='Z'))
printf("alphabet");
else
prinf("no");
return 0;
}
