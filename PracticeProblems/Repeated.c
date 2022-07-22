#include <stdio.h>

void dumplicates(){

    char MyString[] = {"hello world"};
    int StringSize = 11; //sizeof(MyString)/sizeof(char);

    char checkchars[11] = {0};

    //char firstChar = *MyString;
    int counter = 0;
    for(int i=0; i<StringSize; i++){
        char charcheck = MyString[i];

        for(int j=i; j<StringSize; j++){
            if(charcheck == MyString[j]){
                for(int k=0; k<StringSize; k++){
                    if(charcheck == checkchars[k]){
                        break;
                    }  
                }
                counter++;
            }

        }
        checkchars[i] = charcheck;
        printf("The charicter [%c] was found %d times\n", charcheck, counter);
        counter = 0;
    }


}

int main(){
    //char* myString = "Wello World";
    dumplicates();
}