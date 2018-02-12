#include<stdio.h>
main()
{
int a,b,c=0;
int result;
printf("enter the number \n");
scanf("%d",&a);
result=a;
while(a!=0)
{
b=a%10;
c=c*10+b;
a=a/10;
}
if(result==b)
printf("\n it is a palindrome %d",b);
else
printf("\n it is not a palindrome");
return 0;
}
 
