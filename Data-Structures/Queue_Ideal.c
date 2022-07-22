/*
    Circular Queue
*/

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

typedef struct queue_struct{
    int front;
    int rear;
    int capacity;
    int* arr;
} queue_t;

queue_t* create_queue(int capacity){
    queue_t *queue = (queue_t*)malloc(sizeof(queue_t));
    if(queue == NULL){
        printf("Out of memory!\n");
        exit(0);
    }
    queue->front = -1;
    queue->rear = 0;
    queue->capacity = capacity;
    queue->arr = (int*)malloc(sizeof(int)*capacity);
    return queue;
}

int isQueueFull(queue_t* queue){
    int i = 0;
    if ((queue->front == queue->rear + 1) || (queue->front == 0 && queue->rear == queue->capacity - 1)){
            return 1;
    }else{ 
          return 0;
    } 
}

int isEmpty(queue_t* queue){
    int i = 0;
    if (queue->front == -1){
            return 1;
    }else{ 
          return 0;
    } 
}

void enQueue(queue_t* queue, int value){
    int i = 0;
    if(isQueueFull(queue)){
        printf("Queue is full!\n");
    }else{
        if(queue->front == -1){
            queue->front = 0;
        }
        queue->rear = ((queue->rear + 1) % queue->capacity);
        queue->arr[queue->rear] = value;
    }
}

int deQueue(queue_t* queue){
    if(isEmpty(queue)){
        printf("Queue is empty!\n");
        return -1;
    } 
    int element = queue->arr[queue->front];
    if(queue->front == queue->rear){
        queue->front = -1;
        queue->rear = -1;
    }else{
        queue->front = ((queue->front + 1) % queue->capacity);
    }
    return element;
}

void display(queue_t* queue) {
  int i;
  if (isEmpty(queue))
    printf(" \n Empty Queue\n");
  else {
    printf("\n Front -> %d ", queue->front);
    printf("\n Items -> ");
    for (i = queue->front; i != queue->rear; i = (i + 1) % queue->capacity) {
      printf("%d ", queue->arr[i]);
    }
    printf("%d ", queue->arr[i]);
    printf("\n Rear -> %d \n", queue->rear);
  }
}

void printQueue(queue_t* queue){
    for (int i = queue->front; i != queue->rear; i = (i + 1) % queue->capacity) {
      printf("%d ", queue->arr[i]);
    }
    printf("\n");
}

int main(){
    // Fails because front = -1
    queue_t* queue = create_queue(5);
    
    printf("dequeue as empty: %d\n", deQueue(queue));

    enQueue(queue, 1);
    printQueue(queue);
    enQueue(queue, 2);
    printQueue(queue);
    enQueue(queue, 3);
    printQueue(queue);
    enQueue(queue, 4);
    printQueue(queue);
    enQueue(queue, 5);
    printQueue(queue);

    printf("dequeue item: %d\n", deQueue(queue));
    printf("dequeue item: %d\n", deQueue(queue));
    printf("dequeue item: %d\n", deQueue(queue));
    printf("dequeue item: %d\n", deQueue(queue));
    printf("dequeue item: %d\n", deQueue(queue));
    printf("dequeue item: %d\n", deQueue(queue));


    // Fails to enqueue because front == 0 && rear == SIZE - 1
    enQueue(queue, 6);
    printf("Should have failed!\n");
    display(queue);
    deQueue(queue);

    printf("dequeue as full: %d\n", deQueue(queue));

    enQueue(queue, 7);
    display(queue);

    // Fails to enqueue because front == rear + 1
    enQueue(queue, 8);
    printf("Fails cause its filled!");

    return 0;
}