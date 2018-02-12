#include<stdio.h>
int main() 
{
int num,a,result=1;
printf("\n enter the number:");
scanf("%d",&num);
printf("\n enter the a:");
scanf("%d",&a);
while(a!=0)
{
result*=num;
--a;
}
printf("\n%d",result);
return 0;
}
 
