#include <stdio.h>
main()
{
int i,n,p;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
p=n*i;
printf("%d*%d=%d\n",i,n,p);
}
	return 0;
}

