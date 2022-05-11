#include <stdio.h>
#include <math.h>

int main(){
            
    double c, f;
    printf("farenheit = ");
    scanf("%lf",&f);
    c = ( ( 5 * f ) - 160 ) / 9;
    printf("\ncelsius = %lf", c);
    printf("\n");
    return 0;
}

