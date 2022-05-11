#include <stdio.h>

int main(){

    double a, b, area, perimetro;
    printf("Lado a = ");
    scanf("%lf",&a);
    printf("Lado b = ");
    scanf("%lf",&b);
    area = a*b;
    perimetro = 2*(a+b);
    printf("Area = %lf\n", area);
    printf("Perimetro = %lf\n", perimetro);
    return 0;
}
