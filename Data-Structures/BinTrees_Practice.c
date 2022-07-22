#include <stdio.h>
#include <stdlib.h>

typedef struct node_t{
    int data;
    struct node_t* left;
    struct node_t* right;
} node_t;

node_t* create_node(int data){
    node_t* root = malloc(sizeof(node_t));
    root->data = data;
    root->left = NULL;
    root->right = NULL;
    return root;
}

void print_tree(node_t* root){
    printf("%d ", root->data);

}

int main(){
    
    node_t* n1 = create_node(1);
    node_t* n2 = create_node(2);
    node_t* n3 = create_node(3);
    node_t* n4 = create_node(4); 
    node_t* n5 = create_node(5);
    node_t* n6 = create_node(6);
    node_t* n7 = create_node(7);

    n1->left = n2;
    n3->left = n4;
    n3->right = n5;
    

    free(n1);
    free(n2);
    free(n3);
    free(n4);
    free(n5);
    free(n6);
    free(n7);
}