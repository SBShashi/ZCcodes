#include <stdio.h>

int main()
{
	int a[10];
	int i;
	int s;
	
	printf("Give 4  numbers  \n");
	for(i=0;i<4;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("The numbers given are: \n");
	for(i=0;i<4;i++)
	{
		printf("%d \n",a[i]);
	}
    for(i=0;i<4;i++)
	{
	   if(a[i]<a[i+1])
	   {
	   	   s=a[i];
		}
		else
		{
			s=a[i+1];
		}	
	}	
	for(i=0;i<4;i++)
	{
	   if(s<a[i])
	   {
	   	   s=a[i];
	   }
	   else if(s==a[i])
	   {
	   	  s=a[i];
	   }
	}	
	printf("The largest number is %d \n",s); 
   
    for(i=0;i<4;i++)
	{
	   if(a[i]>a[i+1])
	   {
	   	   s=a[i];
		}
		else
		{
			s=a[i+1];
		}	
	}	
	for(i=0;i<4;i++)
	{
	   if(s>a[i])
	   {
	   	   s=a[i];
	   }
	   else if(s==a[i])
	   {
	   	  s=a[i];
	   }
	}	
	printf("The smallest number is %d \n",s);
    return 0;
}
