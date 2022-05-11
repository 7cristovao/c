#include <stdio.h>
#include <math.h>

int main(){

    double v, r;
    printf("raio da esfera = ");
    scanf("%lf",&r);
    v = 4/3*M_PI*r*r*r;
    printf("\nVol da Esfera = %lf\n", v);
    return 0;
}

