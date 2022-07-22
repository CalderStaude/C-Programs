// Iterative C program to reverse a linked list
#include <stdio.h>
#include <stdlib.h>
 
/* Link list node */
struct Node {
    int data;
    struct Node* next;
}node; 
 
typedef struct Node node_t;
 
/* Function to reverse the linked list */
void reverse(node_t** head_ref)
{
    node_t* prev = NULL;
    node_t* current = *head_ref;
    node_t* next = NULL;
    while (current != NULL) {
        // Store next
        next = current->next;
 
        // Reverse current node's pointer
        current->next = prev;
 
        // Move pointers one position ahead.
        prev = current;
        current = next;
    }
    *head_ref = prev;
}
 
/* Function to push a node */
void push(node_t** head_ref, int new_data)
{
    node_t* new_node
        = (node_t*)malloc(sizeof(node_t));
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}
 
/* Function to print linked list */
void printList(node_t* head)
{
    node_t* temp = head;
    while (temp != NULL) {
        printf("%d  ", temp->data);
        temp = temp->next;
    }
}
 
/* Driver code*/
int main()
{
    /* Start with the empty list */
    node_t* head = NULL;
 
    push(&head, 20);
    push(&head, 4);
    push(&head, 15);
    push(&head, 85);
 
    printf("Given linked list\n");
    printList(head);
    reverse(&head);
    printf("\nReversed Linked list \n");
    printList(head);
}