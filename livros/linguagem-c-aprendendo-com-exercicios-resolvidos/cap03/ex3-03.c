// Desenvolva um programa para calcular e escrever 
// a área e o perímetro de um retângulo. Dados de
// entrada: tamanho da base e da altura (tipo das 
// variáveis: inteiro, valor em centímetros).

#include<stdio.h>
#include<curses.h>
#include<stdlib.h>

int main(){
    int area, perimetro, base, altura;
    printf("Digite o tamanho da base do retângulo: ");
    scanf("%d", &base);
    printf("\nDigite o tamanho da altura do retângulo: ");
    scanf("%d", &altura);

    area = (base * altura);
    perimetro = (base * 2) + (altura * 2);

    printf("\n\nA área do retângulo é igual a: %d", area);
    printf("\nO perímetro do retângulo é igual a: %d\n", perimetro);

    return 0;
    exit(0);
}