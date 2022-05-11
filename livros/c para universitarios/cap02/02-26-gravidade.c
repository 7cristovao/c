#include <stdio.h>
#include <math.h>

int main(){
            
    double a, g, t;
    printf("altura (a)= ");
    scanf("%lf",&a);
    printf("tempo (t)= ");
    scanf("%lf",&t);
    g = (2 * a) / (t * t);
    printf("\naceleracao da gravidade = %lf", g);
    printf("\n");
    return 0;
}

