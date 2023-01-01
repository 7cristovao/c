// Desenvolva um programa para calcular e escrever
// a área e o perímetro de um quadrado. Dados de 
// entrada: tamanho do lado (tipo da variável: numérico
// inteiro, valor em centímetros). Essa conversão deve
// ser feita por meio da função printf().
#include<stdio.h>
#include<curses.h>
#include<stdlib.h>

int main(){
    int area, lado, perimetro;

    printf("Digite o tamanho de um dos lados do quadrado: ");
    scanf("%d", &lado);

    area = lado * lado;
    perimetro = lado * 4;

    printf("\nA area do quadrado é igual a: %d", area);
    printf("\nO perímetro do quadrado é igual a: %d\n", perimetro);

    return 0;
    exit(0);
}