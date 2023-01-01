// Escreva um programa que solicite ao usuário dois
// números inteiros diferentes de zero. Com esses
// números imprima na tela: a soma, a subtração, o
// produto, a divisão e a média.

#include<stdio.h>
#include<curses.h>
#include<stdlib.h>

int main(){
    int num1, num2, soma, subtracao, produto, divisao;

    printf("Digite o primeiro valor diferente de zero: ");
    scanf("%d", &num1);
    printf("Digite o segundo valor diferente de zero: ");
    scanf("%d", &num2);

    soma = num1 + num2;
    subtracao = num1 - num2;
    produto = num1 * num2;
    divisao = num1 / num2;

    printf("\nA soma de %d + %d é igual a %d", num1, num2, soma);
    printf("\nA subtração de %d - %d é igual a %d",num1,num2,subtracao);
    printf("\nO produto de %d x %d é igual a %d", num1, num2, produto);
    printf("\nA divisão de %d ÷ %d é igual a %d", num1, num2, divisao);
    printf("\nA média entre %d e %d é igual a %.2f\n",num1,num2,(float)(num1 + num2) / 2);

    return 0;
    exit(0);
}