#include <stdio.h>

int main(){

    double a, b, c;
    printf("\na= "); scanf("%lf",&a);
    printf("\nb= "); scanf("%lf",&b);
    printf("\nc= "); scanf("%lf",&c);
    if (a < b)
        if (a < c) 
            printf("\nmenor = %lf", a);
        else
            printf("\nmenor = %lf", c);
    else
        if (b < c)
            printf("\nmenor = %lf", b);
        else
            printf("\nmenor = %lf", c);
    printf("\nmenor\n");
}
