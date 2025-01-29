#include <stdio.h>
#include <math.h>
#include <conio.h>

void main(){
    double abs_err, rel_err, p_err, t_val, a_val;
    printf("\n Input true value = ");
    scanf("%lf", &t_val);
    printf("\n Input approximate value = ");
    scanf("%lf", &a_val);
    abs_err = fabs(t_val - a_val);
    rel_err = abs_err/t_val;
    p_err = rel_err * 100;

    printf("\n Absolute error = %lf", abs_err);
    printf("\n Relative error = %lf", rel_err);
    printf("\n Percentage relative error = %lf", p_err);
    getch();
}