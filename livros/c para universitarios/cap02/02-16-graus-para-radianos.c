#include <stdio.h>
#include <math.h>

int main(){
        
    double g, r;
    printf("angulo em graus = ");
    scanf("%lf",&g);
    r = (g * M_PI) / 180;
    printf("\nradianos = %lf\n", r);
    return 0;
}

