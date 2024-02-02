#include <stdio.h>
#include <conio.h>
//error:its asking for one number extra
//phythogorean triplet
void main()
{
	int s1;
	int s2;
	int s3;
	printf("enter the 3 sides \n");
	scanf("%d \n",&s1);
	scanf("%d \n",&s2);
	scanf("%d \n",&s3);
	printf("the sides you entered are %d %d %d \n", s1, s2, s3);
	if(s1>s2 && s1>s3)
	{	
		if((s1*s1)==(s2*s2 + s3*s3))
		{
			printf("These 3 combinations are phythogorean triplets %d %d %d",s1,s2,s3);
		}
		else
		{
			printf("These are not phythogorean triplets ");
		}
	}
	if(s2>s1 && s2>s3)
	{
		if((s1*s2)==(s1*s1+s3*s3))
		{
			printf("These 3 combinations are phythogorean triplets %d %d %d",s1,s2,s3);
		}
		else
		{
			printf("They are not phythogorean triplets");
		}
	}
	else
	{
		if((s3*s3)==(s2*s2+s1*s1))
		{
			printf("These 3 combinations are phythogorean triplets %d %d %d",s1,s2,s3);
		}
		else
		{
	      printf("They are not phythogorean triplets");
	    }
	}
}
