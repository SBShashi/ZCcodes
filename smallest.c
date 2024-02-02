//to find the smallest number


#include<stdio.h>

void main()
{
	float a;
	float b;
	float c;
	
	printf ("Enter the first number \n");
	scanf("%f",&a);
	
	printf ("Enter the second number \n");
	scanf("%f",&b);
	
	printf("Enter the third number \n");
	scanf("%f",&c);
	
	if(a<b && a<c)
	{
	printf("The smallest number is %f",a);
    }
    else  if(b<a && b<c)
	{
	printf("The smallest number is %f",b);
    }
    else
	{
	printf("the smallest number is %f",c);
    }
    
}
