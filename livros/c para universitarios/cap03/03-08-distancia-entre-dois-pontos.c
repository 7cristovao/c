#include <stdio.h>
#include <math.h>

int main(){

    double d, x2, x1, y2, y1;
    printf("d = sqrt((x2-x1)²+(y2-y1)²)");
    printf("\n\nx1 = ");
    scanf("%lf",&x1);
    printf("\nx2 = ");
    scanf("%lf",&x2);
    printf("\ny1 = ");
    scanf("%lf",&y1);
    printf("\ny2 = ");
    scanf("%lf",&y2);
    d = sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    printf("\n\n%lf", d);
    printf("\n");
    return 0;
}

