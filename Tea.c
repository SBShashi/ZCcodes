//cup of sugar and sugar/sugarless tea to be prepared for guests
#include<stdio.h>

void main()
{
	int s;
	int sl;
	int t;
	int lt;
	int fs;
	int fsl;
	
	printf("!!!!!!we are into making Tea!!! \n");
	printf("First please let me know how many cups of(sugar/sugarless) tea are already present \n ");
	
	printf("please give the count of cups of SUGAR tea already present in kitchen \n");
	scanf("%d",&s);
	
	printf("please give the count of  cups of SUGARLESS tea present in kutchen \n");
	scanf("%d",&sl);
	
	printf("please enter the count of SUGAR cups needed for Guests \n");
	scanf("%d",&t);
	
	printf("please enter the count of SUGARLESS cups needed for Guests \n");
	scanf("%d",&lt);
	
	if(t<s)
	 {
		printf("Total you need to prepare 0 cup of SUGAR tea for Guests  \n ");
	 }
	if(t>s)
	  {
	  fs=t-s;
	  printf("Total you need to prepare %d cups of SUGAR tea for Guests  \n ",fs);
      }
	if(t==s)
	  {
			printf("Total you need to prepare 0 cup of SUGAR tea for Guests  \n ");
	  }
	
	if(lt<sl)
	  {	
		printf("Total you need to prepare 0 cup of SUGARLESS tea for Guests  \n ");
	  }
	if(lt>sl)
	  {
	      fsl=lt-sl;
	      printf("Total you need to prepare %d of cups for SUGARLESS Guests  \n ",fs);
      }
	if(lt==sl)
	   {
		  printf("Total you need to prepare 0 cup of SUGARLESS tea for Guests  \n ");
	   }
		
}
