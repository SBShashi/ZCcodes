#include <stdio.h>

int main()
{
	int a[10];
	int c=0;
	int d=0;
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
	  		c = c + a[i];
	   		
	  	}                                                                                       
	      else                      
	  	{
	  	    d = d + a[i];	
	  	}
}   
           printf(" printing odd index sum %d \n",d);
           printf(" printing even index sum %d \n",c);
	  
	  
	return 0;
	 
}
