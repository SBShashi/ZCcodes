//mid point 
# include <stdio.h>
void main()
{
	float x1;
	float x2;
	float y1;
	float y2;
	float s1;
	float s2;
	
	printf("\n Give the no x1 \n");
	scanf("%f", &x1);
	
	printf("\n Give the no y1 \n");
	scanf("%f", &y1);
	
	printf("\n Give the no x2 \n");
	scanf("%f", &x2);
	
	printf("\n Give the no y2 \n");
	scanf("%f", &y2);
	
	s1= x1+x2;
	s1= s1/2;
	
	s2= y1+y2;
	s2= s2/2;
	
		printf("\n midpoint=%f, %f",s1,s2);	
}
	
