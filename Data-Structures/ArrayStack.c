//Stacks
//Either push on top or pop off top
//for array!

#include <stdio.h>
#include <limits.h>
#include <stdbool.h>

#define STACK_LENGTH 5
#define EMPTY (-1)
#define STACK_EMPTY INT_MIN

typedef struct
{
    int values[STACK_LENGTH];
    int top;
} stack;


int values[STACK_LENGTH];
int top = EMPTY;

bool push(stack *mystack, int val)
{
    if(*values->top >= STACK_LENGTH-1)
    {
        return false;
    }
    top++;
    *mystack->mystack[top] = val;
    return true;
}

int pop(stack *mystack)
{
    if(top == EMPTY) return STACK_EMPTY;

    int result = myStack[top];
    top--;
    return result;
}


int main()
{
    push(78);
    push(100);
    push(21);

    int t;
    while((t = pop()) != STACK_EMPTY)
    {
            printf("Item poped: %d\n", t);
    }

    return 0;
}
