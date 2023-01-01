// A conversão de graus Fahrenheit para Celsius é obtida
// por T_c ={(T_f-32)x(5/9)}, em que T_c
// é a temperatura em Celsius e Tf
// em Fahrenheit. Faça um programa
// C que calcule e que imprima uma tabela de graus
// Fahrenheit e graus Celsius, cujos graus variem de
// 50 a 65, de 1 em 1.
#include<stdio.h>
#include<stdlib.h>
int main(){
    float T_c, T_f;
    for(T_c = 50; T_c <= 65; T_c++)
    {
        printf("  %0.f %c°C = %1.f %c°F \n",T_c,248, (((T_c*9.0)/5.0)+32.0), 248);
    }
    return 0;
    exit(0);
}
