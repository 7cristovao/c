#include <stdio.h>
#include <math.h>

int main(){
            
    double c, f;
    printf("celsius = ");
    scanf("%lf",&c);
    f = ( ( 9 * c )/5)+ 32;
    printf("\nfarenheit = %lf", f);
    printf("\n");
    return 0;
}

