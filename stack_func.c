
#include<stdio.h>
#define SIZE 5

struct stack
{
    int arr[SIZE];
    int top;
};

void push(struct stack *st, int ele);
int pop(struct stack *st);
void stack_trace(struct stack st);

int main()
{
    struct stack st2;
    int element;

    st2.top = -1;

    element = pop(&st2);

    push(&st2, 10);
    push(&st2, 20);
    push(&st2, 30);
    push(&st2, 40);
    push(&st2, 50);
    push(&st2, 60);

    element = pop(&st2);
    stack_trace(st2);

}

void push(struct stack *st2, int item)
{
    if(st2->top == SIZE - 1)
    {
        printf("\nStack is full");
        return;
    }
    st2->top = st2->top + 1;
    st2->arr[st2->top] = item;
}

int pop(struct stack *st)
{
    int ele; 
    if(st->top == -1)
    {
        printf("Stack is empty");
        return 0;
    }
    ele = st->arr[st->top];
    st->top = st->top - 1;
    return ele;
}

void stack_trace(struct stack st)
{
    int i = 0;
    // printf("Im here.. %d", st.top);

    for(i = st.top; i >= 0 ; i--)
    {
        printf("\n %d", st.arr[i]);
    }
}