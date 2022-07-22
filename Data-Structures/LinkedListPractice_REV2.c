#include <stdio.h>
#include <stdlib.h>

typedef struct struct_node{
    int data;
    struct struct_node *next;
    struct struct_node *prev;
} t_node;

t_node *create_new_node(int data){
    t_node *newNode = malloc(sizeof(t_node));
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;
    return newNode;
}

t_node *insert_at_head(t_node **head, t_node *node_to_insert){
    node_to_insert->next = *head;
    if(*head != NULL)   //not an empty list
    {
        (*head)->prev = node_to_insert; //for backwards
    }

    *head = node_to_insert;
    node_to_insert->prev = NULL;
    return node_to_insert;
}

typedef struct node_pos_struct{
    int valFound;
    int position;
} NodePosition;

NodePosition find_node(t_node *head, int value)
{
    int position = 0;
    int valFoundFlag = 0;
    t_node *current = head;
    while (current != NULL)
    {
        if(current->data == value){
            valFoundFlag = 1;
            break;
        }
        current = current->next;
        position++;
    }
    NodePosition returnPosition = {valFoundFlag, position};
    return returnPosition;
}


void printList(t_node *head){
    t_node *current = head;
    while (current != NULL)
    {
        printf("%d, ", current->data);
        current = current->next;
    }
    return;
}


void remove_node(t_node **head, t_node *node_to_remove){
    if(*head == node_to_remove){
        *head = node_to_remove->next;
        if(*head != NULL){
            (*head)->prev = NULL;
        }
        (*head)->prev = NULL;
    }else{
        node_to_remove->prev->next = node_to_remove->next;
        if(node_to_remove->next != NULL){
            node_to_remove->next->prev = node_to_remove->prev;
        }
        node_to_remove->next = NULL;
        node_to_remove->prev = NULL;
    }
    return;
}


int main(){
    printf("Creating List\n");
    t_node *head = NULL;
    t_node *tmp = create_new_node(6);
    t_node *tmp2 = create_new_node(8);
    insert_at_head(&head, tmp);
    insert_at_head(&head, tmp2);

    printList(head);

     NodePosition returnPosition = find_node(head, 38);
     if(returnPosition.valFound == 0){
        printf("Failed to find value");
     }
     else{
        printf("The value was found at location %d", returnPosition.position);
     }

    printf("\nDone!");
}