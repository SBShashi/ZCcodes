//divisible by 17
# include <stdio.h>


void main()
{
	int num;
	
	printf("\n Give 1 number \n");
	scanf("%d", &num);
	
	    if(num%17==0)
	    {
	    	printf("\n %d is divisible by 17 \n",num);
		}
		else
		{
	    	printf("\n %d is not divisible by 17 \n",num);
		}
		
}
