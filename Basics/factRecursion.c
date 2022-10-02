#include<stdio.h>
int fact(int x);
int main()
{
    int i,r;
    printf("Enter the number to calculate the factorial of");
    scanf("%d",&r);
    i = fact(r);
    printf("The factorial of %d id %d",r,i);
}
int fact(int r){
    if(r == 0)
        return (0);
    else
        return (r * fact (r-1));
}
