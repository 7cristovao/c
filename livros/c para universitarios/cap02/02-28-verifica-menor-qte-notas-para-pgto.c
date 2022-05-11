#include <stdio.h>
#include <math.h>

int main(){
            
    int x, y, w, z; 
    int x1, x2, x3, x4, x5, x6;
    int w1, w2, w3, w4, w5, w6, w7;
    int z1, z2, z3, z4, z5, z6;
    printf("Valor inteiro do produto (y)= ");
    scanf("%i",&y);
    w = 100;
    w2 = 50;
    w3 = 20;
    w4 = 10;
    w5 = 5;
    w6 = 2;
    w7 = 1;
    x=y/w;
//    y   / w   = x;
//    987 / 100 = 9 
    z=y%w;
//    y   % w   = z;
//    987 % 100 = 87
    x1=z/w2;
//    z  / w2 = x1;
//    87 / 50 = 1
    z1=z%w2;
//    z  % w2 = z1;
//    87 % 50 = 37
    x2=z1/w3;
//    z1 / w3 = x2;
//    37 / 20 = 1
    z2=z1%w3;
//    z1 % w3 = z2;
//    37 % 20 = 17
    x3=z2/w4;
//    z2 / w4 = x3;
//    17 / 10 = 1
    z3=z2%w4;
//    z2 % w4 = z3;
//    17 % 10 = 7
    x4=z3/w5;
//    z3 / w5 = x4;
//    7  /  5 = 1
    z4=z3%w5;
//    z3 % w5 = z4;
//    7  %  5 = 2
    x5=z4/w6;
//    z4 / w6 = x5;
//    2  /  2 = 1
    z5=z4%w6;
//    z4 % w6 = z5;
//    2  %  2 = 0
    x6=z5/w7;
    z6=z5%w7;
//    z5 / w7 = x6;
//    z5 % w7 = z6;

    printf("\n%i", x);
    printf("= x(notas de 100)\n");
//    printf("%i ", z);
//    printf("= sobra z: \n");
    printf("%i ", x1);
    printf("= x1(notas de 50)\n");
//    printf("%i ", z1);
//    printf("= sobra z1: \n");
    printf("%i ", x2);
    printf("= x2(notas de 20)\n");
//    printf("%i ", z2);
//    printf("= sobra z2: \n");
    printf("%i ", x3);
    printf("= x3(notas de 10)\n");
//    printf("%i ", z3);
//    printf("= sobra z3: \n");
    printf("%i ", x4);
    printf("= x4(notas de 5)\n");
//    printf("%i ", z4);
//    printf("= sobra z4: \n");
    printf("%i ", x5);
    printf("= x5(notas de 2)\n");
//    printf("%i ", z5);
//    printf("= sobra z5: \n");
    printf("%i ", x6);
    printf("= x6(notas de 1)\n");
//    printf("%i ", z6);
//    printf("= sobra z6: \n");
    return 0;
}
