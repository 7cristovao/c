#include <stdio.h>
#include <math.h>

int main(){
            
    double pol, mm;
    printf("polegadas = ");
    scanf("%lf",&pol);
    mm = 25.4 / ( 1 / pol );
    printf("\nmm = %lf", mm);
    printf("\n");
    return 0;
}

