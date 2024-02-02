
#include <stdio.h>

int main()
{
	int a[5];
	int c=0;
	//int d=0;
	int i;
	
	printf("Give the array numbers \n");
	for(i=0;i<5;i++)
	{
		scanf("%d", &a[i]);
	}
	for(i=0;i<5;i++)
	{
	    c=c+a[i];
	}
		printf(" sum of array is %d",c);	
}
	
