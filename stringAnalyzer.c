#include <stdio.h>

int main(){
    char str[] = "India is my country. All Indians are my brothers and sister? I love my country!";
    int size, i, count;
    char c[] = " ";
    char sym[] = ".?!";

    size = sizeof(str)/sizeof(str[0]);
    count = 0;
    
    for(i = 0; i < size; i++){        
        if(str[i] != c[0]){
            count++;
        }
    }
    printf("The number of characters are: %d", count - 1);

    count  = 0;    

    for(i = 0; i < size; i++){
        if(str[i] == c[0]){
            count++;
        }
    }
    printf("\nThe number of words are: %d", count + 1);

    count  = 0;    

    for(i = 0; i < size; i++){
        if(str[i] == sym[0] || str[i] == sym[1] || str[i] == sym[2]){
            count++;
        }
    }
    printf("\nThe number of sentences are: %d", count);

    return 0;
}