#include<stdio.h>

int main(){
    int num,i;
    long fac = 1;
    printf("Enter the number to calculate the factorial of\n");
    scanf("%d",&num);
    for(i = 1; i <= num; i++){
        fac = fac * i;
    }
    printf("The factoriua of the given number is %ld",fac);
    return 0;
}