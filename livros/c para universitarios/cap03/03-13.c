#include <stdio.h>
#include <math.h>

int main(){

    double Mn, C, n, i;
    printf("\nC ="); scanf("%lf",&C);
    printf("\ni = "); scanf("%lf",&i); 
    printf("\nn ="); scanf("%lf",&n);
    Mn = C * pow((1+i),n);
    printf("\nMn = %lf", Mn);
    return 0;
}

