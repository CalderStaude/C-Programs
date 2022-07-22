#include <stdio.h>
#include <stdlib.h>

//singlly linked list
//almost everything!


typedef struct node
{
    int val;    //linked list if for ints
    struct node* next;
}node;

typedef struct node node_t;

node_t *create_new_node(int val)
{
    node_t *result = malloc(sizeof(node_t));
    result->val = val;
    result->next = NULL;

    return result;
}

node_t *insert_new_node(node_t **head, node_t *node_to_insert)
{
    node_to_insert->next = *head;
    *head = node_to_insert;

    return node_to_insert;
}


void print_list(node_t *head)
{
    node_t *tmp = head;
    while(tmp != NULL)
    {
        printf("%d ", tmp->val);
        tmp = tmp->next;
    }
}

node_t *reverse_list(node_t **head)
{
    node_t *prev = NULL;
    node_t *curr = *head;
    node_t *next = NULL;

    while(curr != NULL)
    {
        next = curr->next;   //store value
        curr->next = prev;

        prev = curr;
        curr = next;            
    }
    *head = prev;
}

int find_value_in_list(node_t *head, int val_to_find)
{
    node_t *tmp = head;
    int cnt = 0;
    while (tmp != NULL)
    {
        if(tmp->val == val_to_find)
        {
            printf("\nFound the value %d, in postion %d\n", tmp->val, cnt);
            return tmp;
        }
        cnt++;
        tmp = tmp->next;
    }
    printf("\nCound not find the value %d in the list\n", val_to_find);
    return NULL;
}

void insert_after_node(node_t *node_to_insert_after, node_t *new_node)
{
    new_node->next = node_to_insert_after->next;
    node_to_insert_after->next = new_node;
}

void insert_in_place(int place, node_t *head, node_t *new_node)
{
    int cnt = 0;
    while(head != NULL)
    {
        if(cnt == place)
        {
            insert_after_node(head, new_node);
        }

        head = head->next;
        cnt++;
    }
}

int main()
{
    node_t *head = NULL;
    node_t *MyList;  

    MyList = create_new_node(10);
    head = insert_new_node(&head, MyList);
    MyList = create_new_node(20);
    head = insert_new_node(&head, MyList);
    MyList = create_new_node(30);
    head = insert_new_node(&head, MyList);

    print_list(head);
    printf("\n");
    reverse_list(&head);
    print_list(head);

    find_value_in_list(head, 30);


    //node_t *tmp = create_new_node(75);

    insert_after_node(head, create_new_node(80));

    print_list(head);
    printf("\n");
    insert_in_place(3, head, create_new_node(75));
    print_list(head);

    return 0;
}