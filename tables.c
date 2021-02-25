#include <stdio.h>

void main()
{
    int num;
    int multiple = 1;
    int result;

    printf("Give the number ...");
    scanf("%d", &num);

    while ( multiple <= 10 )
    {

        result = num * multiple;

        printf("\n%d x %d = %d", num, multiple, result);

        multiple = multiple + 1;
    }

}
