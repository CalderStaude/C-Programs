#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int value;
    struct node* next;
} node;

typedef struct node node_t;

node_t *create_new_node(int val)
{
    node_t *result = malloc(sizeof(node_t));
    result->value = val;
    result->next = NULL;

    return result;
}

node_t *insert_node(node_t **head, node_t *node_to_insert)
{
    node_to_insert->next = *head;
    *head = node_to_insert;
    return node_to_insert;
}

void print_list(node_t *head)
{
    node_t *ListItem = head;

    while(ListItem != NULL)
    {
        printf("%d ", ListItem->value);
        ListItem = ListItem->next;
    }
}

node_t *reverse_list(node_t **head, node_t *ListItem)
{
    node_t *tmp = *head;

    while(tmp != NULL)
    {
    
    }


}

/* Function to reverse the linked list */
void reverse(node_t** head_ref)
{
    node_t* prev = NULL;
    node_t* current = *head_ref;
    node_t* next = NULL;

    while(current != NULL)
    {
        next = current->next;   //store pointer
        current->next = prev;   //reverse pointer

        prev = current;
        current = next;
    }
    *head_ref = prev;
}





int main()
{
    node_t *head = NULL;
    node_t *ML;

    ML = create_new_node(10);
    head = insert_node(&head, ML);
    ML = create_new_node(11);
    head = insert_node(&head, ML);
    ML = create_new_node(12);
    head = insert_node(&head, ML);

    print_list(head);
    printf("\n=========\n");
    reverse(&head);
    print_list(head);
    return 0;
}


























/*
typedef struct node
{
    int value;
    struct node *next;
};

typedef struct node node_t;

node_t *create_new_node(int val)
{
    node_t *result = malloc(sizeof(node_t));
    result->value = val;
    result->next = NULL;  
    return result;
}

node_t *insert_at_head(node_t **head, node_t *node_to_insert)
{
    node_to_insert->next = *head;
    *head = node_to_insert;
    return node_to_insert;
}

void print_list(node_t *head)
{
    node_t *ListItem = head;

    while(ListItem != NULL)
    {
        printf(" %d", ListItem->value);
        ListItem = ListItem->next;
    }
    printf("\n");
}

*/