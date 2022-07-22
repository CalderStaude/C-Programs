#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define MAX_NAME_SIZE 12
#define TABLE_SIZE 10


typedef struct
{
    char name[MAX_NAME_SIZE];
    int age;
} person;

unsigned int hash(char *name){
    int len = strnlen(name, MAX_NAME_SIZE);
    unsigned int hash_val =0;
    for(int i=0; i<len; i++){
        hash_val += name[i];
        hash_val = (hash_val * name[i]) % TABLE_SIZE;
    }
    return hash_val;
}

person* hash_table[TABLE_SIZE];

bool init_hash_table(){
    for(int i=0; i<TABLE_SIZE; i++){
        hash_table[i] = NULL;   
    }
}

void print_table(){
    for(int i=0; i<TABLE_SIZE; i++){
        if(hash_table[i] == NULL){
            printf("\t%i\t---");
        } else{
            printf("\t%i\t%s\n", hash_table[i]->name);
        }
    }
}

bool validEntry(char* name)
{
    if((sizeof(name)/sizeof(char)) > MAX_NAME_SIZE){
        printf("Name is too long!");
        return false;
    } else
        return true;
}

void insert_into_hashtale(char* name)
{
    if(validEntry(name))
        printf("%s => %u\n", name, hash(name));
}

int main(){

    insert_into_hashtale("jim");
    insert_into_hashtale("jerry");
    insert_into_hashtale("tom");
    insert_into_hashtale("jill");
    insert_into_hashtale("henry");



    //printf("%s => %u\n", hash("hello"));

    return 0;
}