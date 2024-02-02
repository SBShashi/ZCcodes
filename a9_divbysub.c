#include <stdio.h>
void main()
{
	float d;
	float e;
	float i;
	float z;
	
	printf("Please enter the dividend number \n");
		scanf("%d",&d);
	printf("Please enter the divisor number \n");
	    scanf("%d",&e);
        z=d;
         //printf(" the z is  %f \n",z);
	   for(i=0;i<d;i++)
	   {
	    z=z-e;
	    //printf(" the everytime of z %f \n",z);
	    if(z==0)
	    {
	        printf(" the answer is %d \n",i+1);
			exit(0);
		}
	   }
    
} 
