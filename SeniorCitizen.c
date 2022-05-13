#include<stdio.h>

void main(){
    int n;
    printf("Enter the age\n");
    scanf("%d", &n);
    if(n>=60)
    printf("The person is a senior citizen.");
    else
    printf("The person is not a senior citizen");
}