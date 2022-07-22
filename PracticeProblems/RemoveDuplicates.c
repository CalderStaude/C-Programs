#include <stdio.h>

struct repeated_char_tuple{
    char c;
    int occurances;
};

char* removeDuplicates(char* str3, int str_size){

    char str[] = "hello world this is a sentence that happends ofter lol!";
    int i = 9;


    struct repeated_char_tuple repeatArr[str_size];

    //char str2[str_size];

 
    int counter = 0;
    int repeatArr_indexCntr = 0;
    for(int i=0; i < str_size; i++){
        for(int j=i+1; j < str_size; j++){
            char str1char = str[i];
            char str2char = str[j];
            if(str[i] == str[j]){
                for(int k=0; k < repeatArr_indexCntr; k++){
                    char repetcahr =  repeatArr[k].c;
                    if(str[i] == repeatArr[k].c){
                        repeatArr[k].occurances++;
                        printf("<<<Match Found>>>\tChar: [%c] Occurances: %d\n", repeatArr[k].c, repeatArr[k].occurances);
                    }
                }
            } else {
                if(j == (i+1)){
                    repeatArr[repeatArr_indexCntr].c = str[i];
                    repeatArr[repeatArr_indexCntr].occurances = 1;
                    repeatArr_indexCntr++;
                }
            }
        }
        counter++;
        //counter = 0;
    }

    //print unique values
    printf("\n===Now printing unique values===\n\n");
    for(int i=0; i<repeatArr_indexCntr; i++){
        printf("Char [%c], Occurances: [%d]\n", repeatArr[i].c, repeatArr[i].occurances);
    }

}

int main(){

    char* str = "hello world this is a sentence that happends ofter lol!";

    int str_size = sizeof(str)/sizeof(char);

    removeDuplicates(str, 50);

}