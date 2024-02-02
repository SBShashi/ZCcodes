//divisibility for 13 and 3

#include <stdio.h>
void main()
{
	int num;
	
	printf("\n !!Give one number which u desire to check divisiblity for 3 and 13!! \n");
	scanf("%d", &num);
	
	    if(num%3==0)
	    {
	    	if(num%13==0)
	    	{
	    	  printf("\n The Given number %d is divisible by both 3 and 13 \n",num);
		    }
			else 
            {
           	 printf("\n The Given number %d is divisible by 3 but not divisible by 13 \n",num);
	        }
	
        }
        else if(num%13==0) 
           {
           	 printf("\n The Given number %d is divisible by 13 \n",num);
		   }
		   
		else
		   {
		   	printf("\n The Given number %d is not divisible by both 13 and 3 \n",num);
		   }
		   
}
