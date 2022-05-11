#include <stdio.h>
#include <math.h>

int main(){

    double x1, x2, a, b, c;
    printf("\n\n x = (-b +- sqrt(pow(b,2)-4*a*c))/(2*a)");
    printf("\n\n digite a: ");
    scanf("%lf",&a);
    printf("\n\n digite b: ");
    scanf("%lf",&b);
    printf("\n\n digite c: ");
    scanf("%lf",&c);
    x1 = (-b+1*sqrt(pow(b,2)-4*a*c))/2*a;
    x2 = (-b-1*sqrt(pow(b,2)-4*a*c))/2*a;
    printf("\n\n x1 = %lf ", x1);
    printf("\n\n x2 = %lf ", x2);
    printf("\n");
    return 0;
}
