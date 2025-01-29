#include <stdio.h>
#include <stdbool.h>

void isIdentifier(char token[], int size){        
    char sym[] = " _";    
    int  i, ascii;
    bool isIdentifier = true;
    
    ascii = token[0];    

    if((ascii >= 65 && ascii <= 90) || 
        (ascii >= 97 && ascii <= 122) || 
        (token[0] == sym[1])){
        isIdentifier = true;
    }else{
        isIdentifier = false;
        printf("\nThe given token is not an identifier");
        return;
    }    

    for(i = 1; i < size - 1; i++){
        if(token[i] == sym[0]){
            isIdentifier = false;
            break;
        }
        ascii = token[i];        
        if((ascii >= 65 && ascii <= 90) ||
            (ascii >= 97 && ascii <= 122) || 
            (ascii >= 48 && ascii <= 57) || 
            (token[i] == sym[1])){
            isIdentifier = true;
        }else{
            isIdentifier = false;
            break;
        } 
    }
    if(isIdentifier){
        printf("\nThe given token is an identifier");
    }else{
        printf("\nThe given token is not an identifier");
    }
}

int main(){    
    char token1[] = "api9Key";
    char token2[] = "0apiKey";
    char token3[] = "api Key";
    int size;

    size = sizeof(token1)/sizeof(token1[0]);
    isIdentifier(token1, size);

    size = sizeof(token2)/sizeof(token2[0]);
    isIdentifier(token2, size);

    size = sizeof(token3)/sizeof(token3[0]);
    isIdentifier(token3, size);
    
    return 0;
}