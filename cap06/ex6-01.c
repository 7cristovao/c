// Dado um número, crie um programa C que escreva
// todos os números ímpares menores e/ou iguais a
// esse número e maiores ou igual a um. Assuma que o
// número informado é positivo. 
#include<stdio.h>
#include<stdlib.h>
int main(){
    // Declaração de variáveis
    int num, cont;
    // Início do programa
    printf("Digite um número inteiro positivo: ");
    scanf("%d",&num);
    // Apresentação de resultados
    printf("Os números ímpares menores de %d são: \n",num);
    // (for) para passar todos os números entre 'num' e 1
    if(num % 2 == 0){
        num = num - 1;
    }
    for (cont = num;cont >= 1;cont = cont - 2){
        printf("%d ¬ ",cont);
    }
    printf("\n");
    return 0;
    exit(0);
}