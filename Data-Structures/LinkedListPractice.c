#include <stdlib.h>
#include <stdio.h>

typedef struct node
{
    int value;          //this one stores numbers
    struct node* next;  //pointer to next
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

void InsertNode(node_t *head, int val)
{
    //not working see create new node function!
    node_t *tempPtr = head;

    node_t n_new;
    n_new.value = val;

    while(tempPtr != NULL)
    {
        tempPtr = tempPtr->next;
    }
}

node_t *create_new_node(int value)
{
    node_t *result = malloc(sizeof(node_t));
    result -> value = value;
    result -> next = NULL;
    
    return result;
}

node_t *insert_at_head(node_t **head, node_t *node_to_insert)
{
    node_to_insert->next = *head;
    *head = node_to_insert;
    return node_to_insert;
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
    node_to_insert_after->next = newnode;
}


int main()
{
    /* Things to know about for Linked lists!!! */
    //insert
    //remove
    //reverse**
    //doubley linked list
    //access element

    printf("Hello World!");

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

    /*
    node_t *head;
    node_t *tmp;


    for(int i=0; i<25; i++)
    {
        tmp = create_new_node(i);
        tmp -> next = head;
        head = tmp;
    }
    */
    /*
    tmp = create_new_node(32);      //create new node with added val of 32
    head = tmp;
    tmp = create_new_node(8);       //create new node with added val of 8
    tmp->next = head;
    head = tmp;
    tmp = create_new_node(34);
    tmp->next = head;
    head = tmp;
    */
    /*
    node_t n1, n2, n3;
    node_t *head;

    n1.value = 45;
    n2.value = 8;
    n3.value = 32;

    head = &n3;
    n3.next = &n2;
    n2.next = &n1;
    n1.next = NULL;

    //new node
    node_t n_new;
    n_new.value = 47;

    n1.next = &n_new;
    n_new.next = NULL;a
    */

    PrintList(head);

    return 0;
}


