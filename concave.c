#include<stdio.h>

void main()
{
	float f;
	float u;
	float v;
	
	printf("please give the focal length \n");
	scanf("%f",&f);
	printf("enter the distance of object \n");
	scanf("%f",&u);
	v=1/((1/f)-(1/u));
	printf("The distance of image is %f \n",v);
}
