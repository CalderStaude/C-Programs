
#include <stdio.h>
#include <stdlib.h>

typedef enum EXIT_CODE{
    SUCCESS,
    OUT_OF_MEMORY,
    INVALD_VALUE,
    UNDEFINED_BEHAVIOR
}EXIT_CODE;


typedef struct node_t{
    int data;
    struct node_t* leftNode;
    struct node_t* rightNode;
} node_t; 

int FlipTreeBranch = 1;

node_t* new_node(int data){
    node_t* node = (node_t*)malloc(sizeof(node_t));
    if(node == NULL){
        exit(OUT_OF_MEMORY);
    }
    node->data = data;
    node->rightNode = NULL;
    node->leftNode = NULL;
    return node;
}

node_t* insert_node(node_t* root, int data){
    if(root == NULL){
        root = new_node(data);
        return root;
    }

    if(root->leftNode != NULL){
        insert_node(root->leftNode, data);
    } else {
        root->leftNode = new_node(data);
        return root;
    }

    if(root)

}

void printTree(node_t* root){
    printf("%d\n", root->data);
    node_t* tmp = root;
    while(1){
        if(tmp->leftNode != NULL){
            printf(" |\n");
            printf("%d\n", &(tmp->leftNode));
            tmp = tmp->leftNode;
        }
        else{
            break;
        }
    }
}

void DeleteLeftNodes(node_t* root, int startFreeing){
    if(root->leftNode != NULL){
        DeleteLeftNodes(root->leftNode, 0);
    }
}

void DeleteTree(node_t* root){


    



}

int main(){

    node_t* root = new_node(1);
    root->leftNode = new_node(2);
    root->rightNode = new_node(3);
    root->leftNode->leftNode = new_node(4);

    printTree(root);
    return 0;
}