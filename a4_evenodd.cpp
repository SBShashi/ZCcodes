#include <stdio.h>

int main()
{
	int a[10];
	int i;
	
	printf("Give the array numbers \n");
	for(i=0;i<10;i++)
	{
		scanf("%d", &a[i]);
	}
	for(i=0;i<10;i++)
	{
		if(a[i]%2==0)
		{
			printf(" %d - Even number \n",a[i]);
		}
		else
		{
			printf(" %d - Odd number \n",a[i]);
		}
	}
	
	
	return 0;
	
}

	

