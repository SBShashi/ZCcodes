//some of first n number
#include <stdio.h>

void main()
{
	int n;
	int sum=0;
	int i;
	printf("give the count of number for which you want its series sum \n");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		sum=sum+i;
	}
	printf("The sum of series numbers is %d",sum);
}
