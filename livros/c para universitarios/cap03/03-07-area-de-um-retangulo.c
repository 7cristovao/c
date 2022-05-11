#include <stdio.h>
#include <math.h>

int main(){

    double area, a, b, r1, r2;
    printf(" area = a * b");
    printf("\n");
    printf("\n a = ");
    scanf("%lf",&a);
    printf("\n b = ");
    scanf("%lf",&b);
    area = a * b;
    printf("\n area = %lf", area);
    printf("\n\n area_circunferencia = PI * r * r"); 
    r1 = 1*sqrt(area/M_PI);
    r2 = -1*sqrt(area/M_PI);
    printf("\n\n raio1 = %lf", r1);
    printf("\n\n raio2 = %lf", r2);
    printf("\n");
    return 0;
}

