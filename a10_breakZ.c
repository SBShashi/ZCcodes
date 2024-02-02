#include <stdio.h>

void main()
{
	char a[100];
	int i;
	
	printf("Enter the characters \n");
	for(i=0;i<100;i++)
	{
		scanf("%c",&a[i]);
		if(a[i]=='z')
		{
			//printf("U have entered letter z \n");
			break;
		}
		
	}
	
}
