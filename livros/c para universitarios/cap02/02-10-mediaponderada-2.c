#include <stdio.h>

int main()
{
    double a, b, c, ap, bp, cp, m;
    printf("\nDigite a primeira nota: ");
    scanf("%lf",&a);
    printf("\nDigite o peso a primeira nota: ");
    scanf("%lf",&ap);
    printf("\nDigite a segunda nota: ");
    scanf("%lf",&b);
    printf("\nDigite o peso da segunda nota: ");
    scanf("%lf",&bp);
    printf("\nDigite a terceira nota: ");
    scanf("%lf",&c);
    printf("\nDigite o peso da terceira nota: ");
    scanf("%lf",&cp);
    m = (a*ap+b*bp+c*cp)/ap+bp+cp;
    printf("\nMedia: %lf\n", m);
    return 0;
    int e = getchar();
}
