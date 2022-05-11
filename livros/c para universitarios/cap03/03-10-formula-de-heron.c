#include <stdio.h>
#include <math.h>

int main(){

    double area, sp, a, b, c;
    printf("area = sqrt(sp*(sp-a)*(sp-b)*(sp-c))");
    printf("onde sp = (a+b+c)/2 -- semi-perimetro");
    printf("\n\na = ");
    scanf("%lf",&a);
    printf("\nb = ");
    scanf("%lf",&b);
    printf("\nc = ");
    scanf("%lf",&c);
    sp = (a+b+c)/2; 
    area = sqrt(sp*(sp-a)*(sp-b)*(sp-c));
    printf("\n\n%lf", sp);
    printf("\n\n%lf", area);
    printf("\n");
    return 0;
}

