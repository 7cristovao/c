#include <stdio.h>

int main()
{
    double a, b, c, d, m;
    printf("\nDigite a primeira nota (PESO 3): ");
    scanf("%lf",&a);
    printf("\nDigite a segunda nota (PESO 5): ");
    scanf("%lf",&b);
    printf("\nDigite a nota do Trabalho de Teoria, (PESO 1): ");
    scanf("%lf",&c);
    printf("\nDigite a nota do Trabalho de Laboratório, (PESO 1): ");
    scanf("%lf",&d);
    m = (a*3+b*5+c+d)/10.0;
    printf("\nMedia: %lf\n", m);
    return 0;
    int e = getchar();
}
