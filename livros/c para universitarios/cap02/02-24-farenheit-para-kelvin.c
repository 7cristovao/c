#include <stdio.h>
#include <math.h>

int main(){
            
    double f, k;
    printf("farenheit = ");
    scanf("%lf",&f);
    k = ( f + 459.67 ) / 1.8;
    printf("\nkelvin = %lf", k);
    printf("\n");
    return 0;
}

