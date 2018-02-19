#include<stdio.h>
main()
{
int a,b,i;
printf("enter the two limits\n");
scanf("%d%d",&a,&b);
for(i=a;b>i;i++)
{
if((i+1)%2==0)
printf("%d\n",i);
}
}
 
