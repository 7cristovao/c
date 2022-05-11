#include <stdio.h>
#include <math.h>

int main(){

    double J, Q, D, C;
    printf("Q = "); scanf("%lf",&Q);
    printf("D = "); scanf("%lf",&D);
    printf("C = "); scanf("%lf",&C);
    J = pow(Q,1.85)*10.643*pow(D,4.87)*pow(C,-1.85);
    printf("J = %lf", J);
    printf("\n");
    return 0;
}
