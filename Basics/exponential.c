#include<stdio.h>

int main(){
    int y,i;
    float x;
    printf("Enter the base and power of the exponent to be calculated\n");
    scanf("%f%d",&x,&y);
    for(i = 1; i < y; i++){
        x = x * x;
    }
    printf("The value of the exponent is %f",x);
    return 0;
}