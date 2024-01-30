#include<stdio.h>

int main()
{
    int a = 6;
    int b = 8;
    int *ptr;
    int c;

    printf("Variable a = %d address of a is ..%d",a, &a);
    ptr = &a;
    printf("\nPointer *ptr = %d, address of ptr is %d ",*ptr, ptr);

    ptr = &b; // pointer modification
    printf("\nPointer *ptr = %d, address of ptr is %d ",*ptr, ptr);

    *ptr = 9; // value modification
    printf("\nPointer *ptr = %d, address of ptr is %d ",*ptr, ptr);

    c = *ptr;
    printf("\nPointer c = %d, address of c is %d ",c, &c);
}