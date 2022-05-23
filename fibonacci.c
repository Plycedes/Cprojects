#include<stdio.h>

int main(){
    int i,c,n,a = 0,b = 1;
    printf("Enter the no. of terms for the sequence\n");
    scanf("%d",&n);
    if(n < 1)
        printf("Enter a correct number");
    else if(n == 1)
        printf("%d",a);
    else if(n == 2)
        printf("%d+%d+...",a,b);
    else{
        printf("%d+%d+",a,b);
        for(i = 3; i <= n; i++){
            c = a + b;
            printf("%d+",c);
            a = b;
            b = c;
        }
        printf("...");
    }
    return 0;
}