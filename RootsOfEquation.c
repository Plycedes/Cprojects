#include<stdio.h>

int main(){
    int a,b,c,d;
    printf("Enter the coefficents of a,b and c\n");
    scanf("%d%d%d",&a,&b,&c);
    d = b * b - 4 * a * c;
    if(d > 0){
        printf("Roots are real and unequal");
    }
    else if(d == 0){
        printf("Roots are real and equal");
    }
    else{
        printf("Roots are imaginary");
    }
}