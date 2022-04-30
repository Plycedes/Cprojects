//swapping variable values without using the third variable

#include<stdio.h>

int main(){
    int var1, var2;
    printf("Enter the two variables \n");
    scanf("%d%d",&var1,&var2);
    printf("Before swap, variable 1 = %d & variable 2 = %d \n", var1, var2);
    var1 = var1 + var2;
    var2 = var1 - var2;
    var1 = var1 - var2;
    printf("After swap, variable 1 = %d & variable 2 = %d \n", var1, var2);
    return 0;    
}