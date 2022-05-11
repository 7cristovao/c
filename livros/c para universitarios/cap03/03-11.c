#include <stdio.h>
#include <math.h>

int main(){

    double x1, y1, x2, y2, x3, y3, a, b, c, sp, area;
    printf("\nx1= " ); scanf("%lf",&x1);
    printf("\ny1= " ); scanf("%lf",&y1);
    printf("\nx2= " ); scanf("%lf",&x2);
    printf("\ny2= " ); scanf("%lf",&y2);
    printf("\nx3= " ); scanf("%lf",&x3);
    printf("\ny3= " ); scanf("%lf",&y3);
    a = sqrt(pow(x2-x1,2.0)+pow(y2-y1,2.0));
    b = sqrt(pow(x3-x2,2.0)+pow(y3-y2,2.0));
    c = sqrt(pow(x1-x3,2.0)+pow(y1-y3,2.0));
    sp = (a+b+c)/2.0;
    area = sqrt(sp*(sp-a)*(sp-b)*(sp-c));
    printf("\na= %lf", a);
    printf("\nb= %lf", b);
    printf("\nc= %lf", c);
    printf("\narea= %lf", area);
    printf("\nperimetro= %lf", a+b+c);
    printf("\n");
    return 0;
}

