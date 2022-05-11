#include <stdio.h>
#include <stdlib.h>
int main(){

    double a, b, c;
    printf("\na= "); scanf("%lf",&a);
    printf("\nb= "); scanf("%lf",&b);
    printf("\nc= "); scanf("%lf",&c);
    if (a > b)
        if (a > c)
            printf("\nmaior = %lf", a);
        else
            printf("\nmaior = %lf", c);
    else if (b > c)
        printf("\nmaior = %lf", b);
    else
        printf("\nmaior = %lf", c);
    printf("\nmaior");
    return 0;
    exit(0);
}
