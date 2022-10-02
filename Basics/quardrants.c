#include<stdio.h>

int main(){
    int x,y;
    printf("Enter the two coordinates\n");
    scanf("%d%d",&x,&y);
    if((x > 0) && (y > 0)){
        printf("The point is in the first quadrant.");
    }
    else if((x < 0) && (x > 0)){
        printf("The point is in the second quadrant.");
    }
    else if((x < 0) && (y < 0)){
        printf("The point is in the thrid quadrant.");
    }
    else{
        printf("The point is in the fourth quadrant.");
    }
}