#include <stdio.h>

int main()
{
	int a[5];
	int b[5];
	int c[5];
	int i;
	
	printf("Give 5 number first array \n");
	for(i=0;i<5;i++)
	{
		scanf("%d", &a[i]);
		//printf("\n");
	}
	printf("Give 5 number second array \n");
	for(i=0;i<5;i++)
	{
		scanf("%d", &b[i]);
	}
	printf("Third array adding both the array \n");
	for(i=0;i<5;i++)
	{
		c[i]=a[i]+b[i];
		printf("%d \n", c[i]);
	}
	return 0;
}
