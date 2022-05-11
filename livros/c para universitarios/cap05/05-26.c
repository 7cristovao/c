#include <stdio.h>

int main()
{

    double a, b, c;
    printf("\na= "); scanf("%lf",&a);
    printf("\nb= "); scanf("%lf",&b);
    printf("\nc= "); scanf("%lf",&c);
    if (a > b)
    {
        printf("\nV");
        if (a > c)
        {
            printf("\nV");
            printf("\nmaior = %lf", a);
        }
        else
        {
            printf("\nF");
            printf("\nmaior = %lf", c);
        }
    }
    else
    {
        printf("\nF");
        if (b > c)
        {
            printf("\nV");
            printf("\nmaior = %lf", b);
        }
        else
        {
            printf("\nF");
            printf("\nmaior = %lf", c);
        }
    }
    printf("\nmaior");
}
