#include<stdio.h>
int fibonacci(int x){
    if(x == 0)
        return (0);
    else if(x == 1)
        return (1);
    else
        return (fibonacci(x - 1) + fibonacci(x - 2));
}
void main(){
    int num, i;
    printf("Enter the number of terms required for the fibonacci series \n");
    scanf("%d", &num);
    for(i = 0; i < num; i++)
        printf("%d", fibonacci(i));
}