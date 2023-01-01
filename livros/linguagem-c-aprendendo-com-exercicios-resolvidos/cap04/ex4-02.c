// Desenvolva um programa para calcular e para
// comparar a área de dois retângulos A e B. O programa
// deverá informar qual retângulo possui a maior área
// ou se possuem tamanhos iguais. Dados de entrada:
// tamanho da base e da altura (tipo das variáveis:
// inteiro, valor em centímetros).

#include<stdio.h>
#include<curses.h>
#include<stdlib.h>

int main(){
    float base_A, altura_A, base_B, altura_B, area_A, area_B;

    printf("Digite o valor da base do retângulo A (em cm): ");
    scanf("%f", &base_A);
    printf("Digite o valor da altura do retângulo A (em cm): ");
    scanf("%f", &altura_A);    
    printf("Digite o valor da base do retângulo B (em cm): ");
    scanf("%f", &base_B);
    printf("Digite o valor da altura do retângulo B (em cm): ");
    scanf("%f", &altura_B);

    area_A = base_A * altura_A;
    area_B = base_B * altura_B;

    printf("\nA área do retângulo A é de %.2f cm", area_A);
    printf("\nA área do retângulo B é de %.2f cm", area_B);
    if(area_A > area_B){
        printf("\nA área de A é maior que de B\n");
    }
    else if(area_A == area_B){
        printf("\nAs áreas são iguais\n");
    }
    else{
        printf("\nA área de B é maior que de A\n");
    }


    return 0;
    exit(0);
}