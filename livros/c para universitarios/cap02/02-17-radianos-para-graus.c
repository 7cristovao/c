#include <stdio.h>
#include <math.h>

int main(){
            
    double g, r;
    printf("angulo em radianos = ");
    scanf("%lf",&r);
    g = r * 180 / M_PI;
    printf("angulo em graus = %lf", g);
    printf("\n");
    return 0;
}

