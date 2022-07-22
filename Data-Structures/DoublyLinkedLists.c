#include <stdlib.h>
#include <stdio.h>

struct node
{
    int value;   //this one stores numbers
    struct node* next;
    struct node* prev;    
};

typedef struct node node_t;
 
void PrintList(node_t *head)
{
    node_t *tempPtr = head;

    while(tempPtr != NULL)
    {
        printf("%d - ", tempPtr->value);
        tempPtr = tempPtr->next;
    }
    printf("\n");
}


node_t *create_new_node(int value)
{
    node_t *result = malloc(sizeof(node_t));
    result -> value = value;
    result -> next = NULL;
    result -> prev = NULL;
    
    return result;
}

node_t *insert_at_head(node_t **head, node_t *node_to_insert)
{
    node_to_insert->next = *head;
    if (*head != NULL)
    {
        (*head)->prev = node_to_insert;
    }
    
    *head = node_to_insert;
    node_to_insert->prev = NULL;
    return node_to_insert;
} 

void remove_node(node_t **head, node_t *node_to_remove)
{
    if(*head == node_to_remove)
    {
        *head = node_to_remove->next;
        if(*head != NULL)
        {
            (*head)->prev = NULL;
        }
        (*head)->prev = NULL;
    }else{
        node_to_remove->prev->next = node_to_remove->next;
        if(node_to_remove->next != NULL)
        {
            node_to_remove->next->prev = node_to_remove->prev;
        }
        node_to_remove->next = NULL;
        node_to_remove->prev = NULL;
    }
    return;
}



node_t *find_node(node_t *head, int value)
{
    node_t *tmp = head;
    while (tmp != NULL)
    {
        if(tmp->value == value)return tmp;
        tmp = tmp->next;
    }
    return NULL;
}

void insert_after_node(node_t *node_to_insert_after, node_t* newnode)
{
    newnode->next = node_to_insert_after->next; 
    if(newnode->next != NULL)
    {
        newnode->next->prev = node_to_insert_after;
    }
    newnode->prev = node_to_insert_after;
    node_to_insert_after->next = newnode;
}


int main()
{
    node_t *head = NULL;
    node_t *tmp;

    for(int i=0; i<25; i++)
    {
        tmp = create_new_node(i);
        head = insert_at_head(&head, tmp);
    }

    tmp = find_node(head, 13);
    printf("Found node %d\n", tmp->value);

    insert_after_node(tmp, create_new_node(75));


    PrintList(head);

    remove_node(&head, tmp);    //remove 13
    remove_node(&head, head);   //Also removes the first element in the linked list
    PrintList(head);

    //remove_node(&head, tmp);
   // remove_node(&head, head);


    return 0;
}


