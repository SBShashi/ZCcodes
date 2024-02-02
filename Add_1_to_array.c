#include <stdio.h>
// add 1 to given array
void main()

{
	int a[5];
	int i;
	printf("enter 5 characters \n");
	for(i=0;i<5;i++)
	{
		scanf("%d \n",&a[i]);
	}
	for(i=0;i<5;i++)
	{
printf("The number by adding one %d \n",a[i]+1);
	}
	
}