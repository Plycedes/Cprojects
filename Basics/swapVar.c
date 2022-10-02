#include<stdio.h>

void main(){
    int num1, num2, num3;

    printf("Enter two numbers to swap\n");
    scanf("%d%d", &num1, &num2);
    
    num3 = num1;
    num1 = num2;
    num2 = num3;

    printf("Result = %d %d", num1, num2);    
}