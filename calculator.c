#include<stdio.h>

int main(){
    int x,y,result;
    char op;

    printf("Enter the first integer, the sign of the operation and the second integer respectively.\n");
    scanf("%d %c %d",&x,&op,&y);

    switch(op){
        case '+':        
        printf("%d", (x + y));
        break;
        case '-':        
        printf("%d", (x - y));
        break;
        case '*':        
        printf("%d", (x * y));
        break;
        case '/':        
        printf("%d", (x / y));
        break;
        case '%':        
        printf("%d", (x % y));
        break;
        default:
        printf("Enter valid values"); 
    }
    return 0;
}