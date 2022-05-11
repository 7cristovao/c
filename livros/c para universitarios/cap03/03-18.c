#include <stdio.h>
#include <math.h>

int main(){

    double d_ab, xb, xa, yb, ya, zb, za;
    printf("\nxb = "); scanf("%lf",&xb);
    printf("\nxa = "); scanf("%lf",&xa);
    printf("\nyb = "); scanf("%lf",&yb);
    printf("\nya = "); scanf("%lf",&ya);
    printf("\nzb = "); scanf("%lf",&zb);
    printf("\nza = "); scanf("%lf",&za);
    d_ab = sqrt(pow((xb-xa),2)+pow((yb-ya),2)+pow((zb-za),2));
    printf("d_ab = %lf", d_ab);
    printf("\n");
    return 0;
}
