#include <stdio.h>

int main(){
    
    double a, b, h; 
    printf("\nBase = ");
    scanf("%lf",&b);
    printf("\naltura = ");
    scanf("%lf",&h);
    a = (b*h)/2;
    printf("Area do Triangulo = %lf\n",a);
    return 0;
}
