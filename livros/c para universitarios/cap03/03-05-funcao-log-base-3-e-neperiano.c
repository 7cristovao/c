#include <stdio.h>
#include <math.h>

int main(){

    double y, x;
    printf("\n\n y= log(pow(x,2))/log(3) + M_E + pow(M_E,M_PI) + pow(M_PI,M_E)");
    printf("\n\n digite x: ");
    scanf("%lf",&x);
    y = log(pow(x,2))/log(3) + M_E + pow(M_E,M_PI) + pow(M_PI,M_E);
    printf("\n\n y = %lf ", y);
    printf("\n");
    return 0;
}

