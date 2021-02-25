#include <stdio.h>

void main()
{
    float firstnum;
    float secondnum;
    float sum;

    printf("Give first number...");
    scanf("%f", &firstnum);

    printf("\nFirst Number is .. %f", firstnum);

    printf("\nGive second number...");
    scanf("%f", &secondnum);

    printf("\nSecond Number is .. %f", secondnum);

    sum = firstnum + secondnum;

    printf("\nThe Sum of %f and %f is .. %f", firstnum, secondnum, sum);

    printf("\nAddition operator");

}

