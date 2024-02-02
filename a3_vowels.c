#include <stdio.h>

int main()
{
	char a[10];
	int i;
	int c;
	
	c=0;
	printf("Give the array as characters \n");
	for(i=0;i<10;++i)
	{
		scanf(" %c", &a[i]); 
		//printf("%d\n",i);
	}
	
	printf("Given the characters are: \n");
	
	for(i=0;i<10;i++)
	{
	  printf(" %c \n",a[i]);
    }
    
    printf("The vowels are: \n");
    for(i=0;i<10;i++)
    {
    	
    	if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
    	{
    		c=c+1;
    		printf(" %c \n", a[i]);
		}
		
	}
    printf(" Total vowels are %d \n", c);
    return 0;
		
}
