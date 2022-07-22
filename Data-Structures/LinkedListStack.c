//Stacks
//Either push on top or pop off top
//for linked list

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

#define STACK_LENGTH 5
#define EMPTY (-1)
#define STACK_EMPTY INT_MIN

typedef struct node
{
    int value;
    struct node *next;
} node;

typedef node * stack;

node* head = NULL;

bool push(stack *mystack, int value)
{
    node *newNode = malloc(sizeof(node));
    if(newNode == NULL) return false;   //can't get space

    newNode->value = value;
    newNode->next = *mystack;
    *mystack = newNode;
    return true;
}

int pop(stack *mystack)
{
    if(*mystack == NULL) return STACK_EMPTY;

    int result = (*mystack)->value;
    node *tmp = *mystack;
    *mystack = (*mystack)->next;
    free(tmp);
    return result;
}


int main()
{
    stack s1=NULL, s2=NULL, s3=NULL; 
    push(&s1, 78);
    push(&s2, 100);
    push(&s2, 101);
    push(&s2, 102);
    push(&s3, 21);

    int t;
    while((t = pop(&s2)) != STACK_EMPTY)
    {
            printf("Item poped: %d\n", t);
    }

    return 0;
}
