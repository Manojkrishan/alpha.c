#include<stdio.h>
main()
{
	int a,b,i,sum=0;
	printf("enter a number");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		sum=sum+i;
	}
	b=(sum>0)?printf("%d",sum):printf("wrong");
return 0;
}
