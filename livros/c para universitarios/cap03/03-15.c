#include <stdio.h>
#include <math.h>

int main(){

    double x, y, z;
    printf("\nx ="); scanf("%lf",&x);
    printf("\ny ="); scanf("%lf",&y);
    z = pow(M_E,y*log(x)/log(M_E));
    printf("\nz = %lf", z); 
    printf("\n");

    double a, b, c;
    printf("\na ="); scanf("%lf",&a);
    printf("\nb ="); scanf("%lf",&b);
    c = pow(a,b);
    printf("\nc = %lf", c); 
    printf("\n");
    return 0;
}
