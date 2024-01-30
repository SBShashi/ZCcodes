
#include<stdio.h>

struct stack
{
    int arr[5]; // 10 20 30 40 
    int top;    // index of my last element 
};

main()
{
    struct stack st1;
    int element;
    int i = 0;

    //initialisation of stack
    st1.top = -1;

    st1.top = st1.top + 1;
    st1.arr[st1.top] = 10; // push operation

    st1.top = st1.top + 1;
    st1.arr[st1.top] = 20; // push operation

    st1.top = st1.top + 1;
    st1.arr[st1.top] = 30; // push operation

    element = st1.arr[st1.top]; // pop operation
    st1.top = st1.top - 1;

    printf("stack trace ..\n");
    for( i = st1.top; i >=0; i--)
    {
        printf("\n %d",st1.arr[i]);
    }

}