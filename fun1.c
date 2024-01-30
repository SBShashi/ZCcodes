#include <stdio.h>

int add(int a, int b);
void add_1(int a, int b, int *c);
void add_2(int *a, int *b);

int main()
{
    int i = 6;
    int j = 5;
    int k = 0;

    k = add(i,j);
    printf("the sum of %d and %d is %d", i,j,k);
    
    add_1(i,j,&k);
    printf("\nadd_1 result is .. %d",k);

    add_2(&i,&j);
    printf("\nPass by reference add - sum is %d", i);
}

//Pass by value
int add(int a, int b)
{
    int c;
    c = a + b;
    return c;
}

void add_1(int a, int b, int *c)
{
    *c = a + b;
}
// Pass by reference
void add_2(int *a, int *b)
{
    *a = *a + *b;
}
