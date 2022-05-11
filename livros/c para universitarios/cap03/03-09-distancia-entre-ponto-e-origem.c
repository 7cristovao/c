#include <stdio.h>
#include <math.h>

int main(){

    double d, x2, x0, y2, y0;
    printf("d = sqrt((x2-x1)²+(y2-y1)²)");
    printf("\n\nx0 = ");
    scanf("%lf",&x0);
    printf("\nx2 = ");
    scanf("%lf",&x2);
    printf("\ny0 = ");
    scanf("%lf",&y0);
    printf("\ny2 = ");
    scanf("%lf",&y2);
    d = sqrt(pow((x2-x0),2)+pow((y2-y0),2));
    printf("\n\n%lf", d);
    printf("\n");
    return 0;
}

