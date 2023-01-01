// Desenvolva um programa para calcular e comparar
// a área de dois retângulos A e B. O programa deverá
// dizer qual retângulo possui a maior área ou se
// ambos possuem tamanhos iguais. Dados de entrada:
// tamanho da base e da altura (tipo das variáveis:
// inteiro, valor em centímetros).
#include<stdio.h>
#include<stdlib.h>
int main(){
    float area_A, base_A, altura_A, base_B, area_B, altura_B;
    printf("Digite a base do retângulo A: ");
    scanf("%f",&base_A);
    printf("Digite a altura do retângulo A: ");
    scanf("%f",&altura_A);
    printf("Digite a base do retângulo B: ");
    scanf("%f",&base_B);
    printf("Digite a altura do retângulo B: ");
    scanf("%f",&altura_B);
    area_A = base_A * altura_A;
    area_B = base_B * altura_B;
    printf("area_A = %.2f ; area_B = %.2f\n",area_A,area_B);
    if(area_A > area_B)
        printf("Retângulo A é maior que B\n");
    else if(area_A < area_B)
        printf("Retângulo B é maior que A\n");
    else
        printf("Ambos são iguais\n");
    return 0;
    exit(0);
}