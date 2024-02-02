#include <stdio.h>

int main()
{
	int a[5];
	int i;
	
	
	printf("Give the array numbers \n");
	for(i=0;i<5;i++)
	{
		scanf("%d", &a[i]);
	}
	
	printf("The plus 1 numbers are \n");
	for(i=0;i<5;i++)
	{
		printf("%d \n", a[i]+1);
	}
	
	return 0;
}

