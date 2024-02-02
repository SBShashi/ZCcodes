// departmental stoe purchase
void main()
{
	float iteam1;
	float iteam2;
	float iteam3;
	float sum;
	float add1;
	float add2;
	int card;
	
	printf ("Enter the price of iteam1 \n");
	scanf("%f",&iteam1);
	
	printf ("Enter the price of iteam2 \n");
	scanf("%f",&iteam2);
	
	printf("Enter the iteam3 \n");
	scanf("%f",&iteam3);
	sum= iteam1+iteam2+iteam3;

	//printf("the op is %d \n",card);
	if(sum<=1000)
	    {
	       printf("The total bill is %f \n",sum);
        }
    
    else
	{
	
	    printf("press 1-if you are a gold card holder \n 2- if you are not a gold card holder \n");
	    scanf("%d",&card); 
	
	    if(sum>1000 && sum<=2500)
	    {
		    if(card==1)
		     {
			   printf("The total bill is %f \n",sum);	
	           printf(" Your getting a discount of 10 percent for shoping more than 1000 Rs and \n additional 2 percent as you are a gold card holder\n");
	           add1=sum-(sum*10/100)-(sum*2/100);
	           printf("The total  amount is %f \n",add1);	
	         }
	        if(card==2)
		     { 
			   printf("The total bill is %f \n",sum);	
	           printf(" Your getting additional discount of 10 percent for shoping more than 1000 Rs \n");
	           add1=sum-(sum*10/100);
	           printf("The total  amount is %f \n",add1);	
	         }
	    
	    }
	    if(sum>2500)
	      {
		     if(card==1)
		      {
		      	printf("The total bill is %f \n",sum);
		        printf(" Your getting a discount of 10 percent for shoping more than 2500 Rs and \n additional 2 percent as you are a gold card holder \n");
	            add2=sum-(sum*15/100)-(sum*2/100);
	            printf("The total  amount is %f \n",add2);
	          }
	        else if(card==2)
		      {	
		         printf("The total bill is %f \n",sum);
	             printf(" Your getting additional discount of 10 percent for shoping more than 2500 Rs \n");
	             add2=sum-(sum*15/100);
	             printf("The total  amount is %f \n",add2);	
	          }
	    
	      }
    }
}

