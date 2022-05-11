#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, d;
    printf("a = "); scanf("%lf",&a);
    printf("b = "); scanf("%lf",&b);
    printf("c = "); scanf("%lf",&c);
    printf("d = "); scanf("%lf",&d);
    if (a < b && a < c && a < d)
        printf("menor = %lf", a);
    else if (b < a && b < c && b < d)
        printf("menor = %lf", b);
    else if (c < a && c < b && c < d)
        printf("menor = %lf", c);
    else // (d < a && d < b && d < c)
        printf("menor = %lf", d);
    printf("\n");
    int getchar();
    return 0;
}
