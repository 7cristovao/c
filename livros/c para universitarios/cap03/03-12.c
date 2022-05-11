#include <stdio.h>
#include <math.h>

int main(){

    double a, b, c, teta_a, teta_b, teta_c;
    printf("\n a= " ); scanf("%lf",&a);
    printf("\n b= " ); scanf("%lf",&b);
    printf("\n c= " ); scanf("%lf",&c);
    teta_a = acos((pow(b,2)+pow(c,2)-pow(a,2))/(2*b*c))*(180/M_PI);
    teta_b = acos((pow(a,2)+pow(c,2)-pow(b,2))/(2*a*c))*(180/M_PI);
    teta_c = acos((pow(a,2)+pow(b,2)-pow(c,2))/(2*a*b))*(180/M_PI);
    printf("\nteta_a= %lf", teta_a);
    printf("\nteta_b= %lf", teta_b);
    printf("\nteta_c= %lf", teta_c);
    printf("\n");
    return 0;
}
