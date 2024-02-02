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
       c=a[i]*a[i];
	   printf("The square of %d is %d \n",a[i],c); 	
     }    
		
}
