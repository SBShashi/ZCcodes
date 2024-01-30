#include<stdio.h>

int main()
{
    int arr[5];
    int ar2d[2][2];
    int c = 0;

    // scanf("%d", &c);

    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    arr[3] = 4;
    arr[4] = 5;

    //00  01
    //10  11

    ar2d[0][0] = 1;
    ar2d[0][1] = 2;
    ar2d[1][0] = 3;
    ar2d[1][1] = 4;


    printf("ar2d[1][0] = %d", ar2d[1][0]);

    // printf("arr[3] is ..%d", arr[3]);

    // scanf(" %d", &arr[3]);
    // printf("arr[3].. %d",arr[3]);
}