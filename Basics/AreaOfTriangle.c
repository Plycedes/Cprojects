#include<stdio.h>
#include<math.h>

int main(){
    float a, b, c, s, area;
    printf("Enter the three sides of the triangle \n");
    scanf("%f%f%f",&a,&b,&c);
    s = (a+b+c)/2;
    printf("\nThe semi-perimeter is %f", s);
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("\nThe area of the triangle is %f", area);
    return 0;
} 