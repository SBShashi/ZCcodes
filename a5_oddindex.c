#include <stdio.h>

int main()
{
	int a[10];
	int i;
	
	printf("Give all the array numbers \n");
	for(i=0;i<10;i++)
	{
		scanf("%d", &a[i]);
	}
	
	printf("All consecutive odd numbers \n");
	for(i=0;i<10;i++)
	{
		if(a[i]%2!=0)
		{
			printf(" %d \n",a[i]);
		}

	}
	
	return 0;
	
}
