#include <stdio.h>

typedef struct stack
{
    int top;
    unsigned capacity;
    int* array;
} stack_t;

//typedef struct stack stack_t;

stack_t *create_stack(unsigned capacity)
{
    stack_t *Stack = (stack_t*)malloc(sizeof(stack_t));
    Stack->top = -1;
    Stack->capacity = capacity;
    Stack->array = (int*)malloc(Stack->capacity * sizeof(int));
    
    return Stack;
}

int isFull(stack_t *Stack)
{
    return(Stack->top == Stack->capacity-1);
}

int isEmpty(stack_t *Stack)
{
    return (Stack->top == -1);
}

void Push(stack_t *Stack, int val)
{
    if(isFull(Stack) == 1) return;

    Stack->array[++Stack->top] = val;
    printf("The value %d was added\n", val);
}

int Pop(stack_t *Stack)
{
    if(isEmpty) return;

    return Stack->array[Stack->top--];
}

int peek(stack_t *Stack)
{
    return Stack->array[Stack->top];
}

int main()
{
    stack_t *MyStack = create_stack(4);

    Push(MyStack, 10);
    Push(MyStack, 20);
    Push(MyStack, 30);
    Push(MyStack, 40);
    Push(MyStack, 50);
    Push(MyStack, 60);

    printf("\n==========\nTop Val %d\n", peek(MyStack));

    Pop(MyStack);
    Pop(MyStack);
    Pop(MyStack);
    Pop(MyStack);
    Pop(MyStack);
    Pop(MyStack);
    Pop(MyStack);

    printf("\n==========\nTop Val %d\n", peek(MyStack));

    return 0;
}