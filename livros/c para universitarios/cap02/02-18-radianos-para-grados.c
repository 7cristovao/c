#include <stdio.h>
#include <math.h>

int main(){
            
    double g, r, grados;
    printf("angulo em radianos = ");
    scanf("%lf",&r);
    g = r * 180 / M_PI;
    grados = (2 * M_PI * r)/400;
    printf("angulo em graus = %lf", g);
    printf("\nangulo em grados = %lf", grados);
    printf("\n");
    return 0;
}

