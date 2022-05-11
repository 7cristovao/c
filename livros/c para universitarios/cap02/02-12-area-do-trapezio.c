#include <stdio.h>

int main(){
    
    double m, b, h, a;
    printf("Base maior = ");
    scanf("%lf",&m);
    printf("\nBase menor = ");
    scanf("%lf",&b);
    printf("\naltura = ");
    scanf("%lf",&h);
    a = ((m+b)*h)/2;
    printf("Area do Trapezio = %lf\n",a);
    return 0;
}
