#include <stdio.h>
#include <math.h>

int main(){

    double i_x, u, b, b1, h, h1;
    printf("\nb = "); scanf("%lf",&b);
    printf("\nb' = "); scanf("%lf",&b1);
    printf("\nh = "); scanf("%lf",&h);
    printf("\nh' = "); scanf("%lf",&h1);
    u = sqrt(12*(1-(1-(b1/b))*(1-(h1/h)))/(1-(1-(b1/b))*pow((1-(h1/h)),3)));
    i_x = h / u;
    printf("i_x = %lf", i_x);
    printf("\n");
    return 0;
}
