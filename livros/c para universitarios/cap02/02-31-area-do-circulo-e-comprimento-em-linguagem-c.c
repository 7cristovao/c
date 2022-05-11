#include <stdio.h>
#include <math.h>

int main(){
    
    double r, a, c;
    printf("Raio? ");
    scanf("%lf",&r);
    a = M_PI * r * r;
    c = 2 * M_PI * r;
    printf("Area = %lf e Comprimento = %lf", a, c);
    printf("\n");
    return 0;
}
