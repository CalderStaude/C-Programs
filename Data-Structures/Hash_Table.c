  /**
 * @file HashTable.c
 * @author Calder Staude
 * @version 0.1
 * @date 2022-01-02
 * 
 * Description:
 * The hash table is used to store structs.  In this exable the struct is for a person 
 */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <stdbool.h>

#define MAX_SISE_NAME 256
#define TABLE_SIZE 10

typedef struct {
    char name[MAX_SISE_NAME];
    int age;
    int height;
} person;   

/* Hash Table*/
person *hash_table[TABLE_SIZE];     //Table of pointers

unsigned int hash(char *name){
    int length = strnlen(name, MAX_SISE_NAME);
    unsigned int hash_value = 0;
    for (int i=0; i<length; i++){           //Basic Hash Function
        hash_value += name[i];
        hash_value = hash_value * name[i];  //Mul speads results
        hash_value %= TABLE_SIZE;           //Normaize
    }

    return hash_value;
}

void init_hash_table(){
    for(int i=0; i< TABLE_SIZE; i++){
        hash_table[i] = NULL;
    }
}

void print_hash_table()
{
    for(int i = 0; i<TABLE_SIZE; i++){
        if(hash_table[i] == NULL){
            printf("\t%i ---\n", i);
        }else{
            printf("\t%i\t%s\n", i, hash_table[i]->name);
        }
    }
}

bool hash_table_insert(person *p){
    if(p == NULL) return false;
    int index = hash(p->name);
    if(hash_table[index] != NULL){
        return false;
    }
    hash_table[index] = p;
    return true;
}

/* Dealing with Collisions */
person *hash_table_lookup(char *name){
    int index = hash(name);
    for(int i=0; i<TABLE_SIZE; i++){
        int try = (index + i) % TABLE_SIZE;
        if(hash_table[try] != NULL) && (strncmp(hash_table[try]->name, name) ==0){
            person* tmp = hash_table[try];
            hash_table[try] = NULL;
            return tmp;
        }
    }
    return NULL;
}

int main() {

    init_hash_table();
    print_hash_table();

    person Jack = {.name="Jack", .age = 58, .height = 100};
    person Jill = {.name="Jill", .age = 23, .height = 234};
    person Ben = {.name="Ben", .age = 65, .height = 532};
    person Amy = {.name="Amy", .age = 23, .height = 123};
    person Alex = {.name="Alex", .age = 34, .height = 643};

    hash_table_insert(&Jack);
    hash_table_insert(&Jill);
    hash_table_insert(&Ben);
    hash_table_insert(&Amy);
    hash_table_insert(&Alex);

    printf("START\n\n");
    print_hash_table();

    printf("\nEND\n");
    return 0;
}
