#include <stdio.h>
// add elements of two arrays
void main()

{
	int a[5];
	int b[5];
	int c;
	int i;
	printf("enter 5 characters \n");
	for(i=0;i<5;i++)
	{
		scanf("%d \n",&a[i]);
	}
	printf("enter 5 characters \n");
	for(i=0;i<5;i++)
	{
		scanf("%d \n",&b[i]);
	}
	for(i=0;i<5;i++)
	{
		c=a[i]+b[i];
		printf("sum %d \n",c);
	}
	
}