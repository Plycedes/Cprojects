#include<stdio.h>

int main(){
    float a,b,c,d,e,perc;
    printf("Enter the marks obtained in the five subjects\n");
    scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
    perc =  (a+b+c+d+e)/500*100;
    if(perc >= 80){
        printf("A+\n");
    }
    else if((perc >= 70) && (perc < 80)){
        printf("A\n");
    }
    else if((perc >= 60) && (perc < 70)){
        printf("A-\n");
    }
    else if((perc >= 50) && (perc < 60)){
        printf("B+\n");
    }
    else if((perc >= 40) && (perc < 50)){
        printf("B\n");
    }
    else{
        printf("Fail!\n");
    }
}