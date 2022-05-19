#include<stdio.h>

int main(){
    char l;

    printf("Enter a letter of english alphabet.\n");
    scanf("%c",&l);

    switch(l){
        case 'a':
        printf("%c is a vowel.",l);
        break;
        case 'e':
        printf("%c is a vowel.",l);
        break;
        case 'i':
        printf("%c is a vowel.",l);
        break;
        case 'o':
        printf("%c is a vowel.",l);
        break;
        case 'u':
        printf("%c is a vowel.",l);
        break;
        case 'A':
        printf("%c is a vowel.",l);
        break;
        case 'E':
        printf("%c is a vowel.",l);
        break;
        case 'I':
        printf("%c is a vowel.",l);
        break;
        case 'O':
        printf("%c is a vowel.",l);
        break;
        case 'U':
        printf("%c is a vowel.",l);
        break;
        default:
        printf("%c is a consonant",l);
    }
}