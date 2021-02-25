#include <stdio.h>

void main()
{
    int num;
    int mod;

    printf("Enter the number...");
    scanf("%d", &num);

    mod = num % 2;

//    printf("\nModulus of number is ... %d", mod);

    if( mod == 0 )
    {
        printf("Even\n");
    }
    else
    {
        printf("Odd");
    }

}
