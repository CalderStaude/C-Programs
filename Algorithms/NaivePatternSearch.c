#include <stdio.h>
#include <string.h>


/*
    Naieve pattern search.  
    Runs in n time with worst case (txt size)(pat size -1)
    and best case (txt size).  
*/
int PatterSearch(char* pat, char* txt){

    int txt_size = strlen(txt);
    int pat_size = strlen(pat);
    char txt_buffer[txt_size];

  for(int i=0; i<txt_size; i++){
    
        for(int j=0; j<pat_size; j++){
            if(pat[j] != txt[j+i]){
                break;
            } else if (j == pat_size-1) {
                printf("Success! Found the pattern %s starting at index %d\n", pat, i);
                return 1;
            }
        }
  } 
}

int main(){
    char txt[] = "AAACAADAAAAABAAABAA";
    char pat[] = "AABA";
    PatterSearch(pat, txt);

    return 0;
}