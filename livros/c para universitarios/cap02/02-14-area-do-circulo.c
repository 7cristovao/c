#include <stdio.h>
#include <math.h>

int main(){






   double a, r, c;
   printf("raio = "); scanf("%lf",&r);
   a = M_PI * r * r;
   c = 2 * M_PI * r;
   printf("\nArea do Circulo = %lf", a);
   printf("\nComprimen da C = %lf\n", c);
   return 0;
}
