#include <stdio.h>

int main()
{
    double p1, p2, t1, t2, p1p, p2p, t1p, t2p, m, ft, fa, f;
    printf("\nDigite a primeira nota P1: ");
    scanf("%lf",&p1);
    printf("\nDigite o peso a primeira nota: ");
    scanf("%lf",&p1p);
    printf("\nDigite a segunda nota P2: ");
    scanf("%lf",&p2);
    printf("\nDigite o peso da segunda nota: ");
    scanf("%lf",&p2p);
    printf("\nDigite a terceira nota T1: ");
    scanf("%lf",&t1);
    printf("\nDigite o peso da terceira nota: ");
    scanf("%lf",&t1p);
    printf("\nDigite a quarta nota T2: ");
    scanf("%lf",&t2);
    printf("\nDigite o peso da quarta nota: ");
    scanf("%lf",&t2p);
    printf("\nDigite a quantidade TOTAL de aulas: ");
    scanf("%lf",&ft);
    printf("\nDigite a quantidade de aulas que o aluno FREQUENTOU: ");
    scanf("%lf",&fa);
    m = ((p1*p1p)+(p2*p2p)+(t1*t1p)+(t2*t2p))/(p1p+p2p+t1p+t2p);
    f = fa/ft;
    printf("\nMedia: %lf\n", m);
    printf("\nFrequencia de: %lf\n", f);
    return 0;
    int e = getchar();
}
