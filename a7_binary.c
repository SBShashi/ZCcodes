#include <stdio.h>

void main()
{
	int a[10];
	int c;
	int i;
	i=0;
	printf("The give binary number upto 4 digits");
	for(i=0;i<4;i++)
	{
		scanf("%d", &a[i]);
	}
	printf("The given binary numbers are \n", a[i]);
	
	for(i=0;i<4;i++)
	{
		printf(" %d \n", a[i]);
	}
	
	for(i=0;i<4;i++)
	{
		if(a[i]==1)
		{
			if(i==0)
			{
				c=c+8;
			}
			if(i==1)
			{
				c=c+4;
			}
			if(i==2)
			{
				c=c+2;
			}
			if(i==3)
			{
				c=c+1;
			}
		}
		
	}
	printf("The decimal number %d \n",c);
}
