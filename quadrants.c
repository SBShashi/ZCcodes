//to find which quadrant the given x,y point belong
#include<stdio.h>

void main()
{
	float x;
	float y;
	printf("give the x cordinate \n");
	scanf("%f",&x);
	
	printf("give the y cordinate \n");
	scanf("%f",&y);
	
	if(x>0 && y>0)
	{
		printf(" quadrant 1");
	}
	if(x<0 && y>0)
	{
		printf(" quadrant 2");
	}
	if(x<0 && y<0)
	{
		printf(" quadrant 3");
	}
    if(x>0 && y<0)
	{
		printf(" quadrant 4");
	}
}
