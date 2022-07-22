#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

typedef struct stack_struct{
    int top;
    int bottom;
    unsigned capacity;
    int* arr;
} stack_t;

typedef struct queue_struct{
    struct stack_t* stack1;
}queue_t;


stack_t* create_stack(unsigned capacity){
    stack_t *stack = (stack_t*)malloc(sizeof(stack_t));
    if(stack == NULL){
        printf("Out of mem\n");
        exit(0);
    }
    stack->top = -1;
    stack->capacity = capacity;
    stack->arr = (int*)malloc(sizeof(int)*capacity);
    if(stack->arr == NULL){
        printf("Out of mem\n");
        exit(0);
    }
    return stack;
}

int isFull(stack_t* stack){
    return stack->top == stack->capacity - 1;
}

int isEmpty(stack_t* stack){
    return stack->top == -1;
}

void push(stack_t** stack, int value){
    if(isFull(stack)){
        return;
    }
    stack->arr[++stack->top] = value;
}

int pop(stack_t* stack){
    if(isEmpty(stack)){
        printf("Stack is Empty!\n");    //odd behavior to define
        return 0;
    }
    return stack->arr[stack->top--];
}

int peek(stack_t* stack){
    if(isEmpty(stack))
        return INT_MIN;                 //show min value
    return stack->arr[stack->top];
}

void enQueue(queue_t* queue, int val){
    push(&queue->stack1, val)
}

int main(){
    printf("Hello World!");
    return 0;
}