#include <stdio.h>
#include <math.h>

int main(){

    double y, x;
    printf("\n\n y = sqrt((pow(x,2)+3)/2)");
    printf("\n\n digite x: ");
    scanf("%lf",&x);
    y = sqrt((pow(x,2)+3)/2);
    printf("\n\n y = %lf ", y);
    printf("\n");
    return 0;
}

