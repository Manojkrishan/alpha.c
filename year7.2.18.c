#include<stdio.h>
main()
int y;
	printf("Enter the year :");
	scanf("%d",&y);
	if(y%4==0)
  {
	printf("%d is a leap year",y);
  }
	else
  {
	printf("%d is not a leap year",y);
  }
	return 0;
  }
