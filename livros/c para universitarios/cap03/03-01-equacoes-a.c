#include <stdio.h>
#include <math.h>

int main(){

    printf(" y = sqrt(x) + fabs(x) + exp(x) + pow(x,3.0)");
    printf("\n\n y = sin(x) + cos(x) + tan(x) + 1/cos(x) + M_PI");
    printf("\n\n y = log10(x) + log(x) + log(x)/log(2.0)");
    printf("\n\n y = pow(x,1.0/3.0) + pow (x+2,3.0/5.0)");
    printf("\n\n y = exp(fabs(x)) + sqrt(fabs(x))" );
    printf("\n\n delta = pow(b,2.0) - 4 * a * c" );
    printf("\n\n z= (sqrt(x*x+y*y)+tan(x/y)+pow(M_PI,3.0))/(pow(x+y,3.0/5.0)+log(sqrt(fabs(x+y)))/log(3.0))");
    printf("\n");
    return 0;
}

