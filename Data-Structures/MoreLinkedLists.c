#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int value;
    struct node* next;
} node;

typedef struct node node_t;

node_t *create_new_node(int value)
{
    node_t *result = malloc(sizeof(node_t));
    result->value = value; 
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

void insert_after_node(node_t *node_to_insert_after, node_t* newnode)
{
    newnode->next = node_to_insert_after->next;
    node_to_insert_after->next = newnode;
}


int FindValue(node_t *head, int ItemToFind)
{
    node_t *ListItem = head;

    int cnt = 0;
    while(ListItem != NULL)
    {
        if(ListItem->value == ItemToFind)
        {
            printf("\nFound %d at position %d in the list\n", ItemToFind, cnt);
            return ListItem;
        }
        ListItem = ListItem -> next;
        cnt++;
    }

    return NULL;
}

int main()
{
    int Firstval = 10;
    int Secondval = 20;
    int Thirdval = 30;

    node_t *head = NULL;
    node_t *tmp;

    
    tmp = create_new_node(Firstval);
    head = insert_at_head(&head, tmp);
    tmp = create_new_node(Secondval);
    head = insert_at_head(&head, tmp);
    tmp = create_new_node(Thirdval);
    head = insert_at_head(&head, tmp);

    for(int i=0; i<10; i++)
    {
        tmp = create_new_node(i);
        head = insert_at_head(&head, tmp);
    }

    tmp = FindValue(&head, 5);


    insert_after_node(tmp, create_new_node(74));

    print_list(head);


    return 0;
}