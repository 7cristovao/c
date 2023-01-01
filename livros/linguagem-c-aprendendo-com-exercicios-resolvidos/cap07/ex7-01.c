// Dado um número, crie um programa C que escreva
// todos os números ímpares menores que o número
// informado e maiores do que um. Assuma que o
// número informado é positivo.
#include<stdio.h>
#include<stdlib.h>
int main(){
    int num, cont;
    printf("Digite um número positivo: ");
    scanf("%d",&num);
    while (num < 0)
    {
        printf("Numero negativo. Digite um número positivo: ");
        scanf("%d",&num);
    }
    cont = 1;
    while (cont < num)
    {
        printf("%d ¬ ", cont);
        cont = cont + 2;
    }
    printf("\n");
    return 0;
    exit(0);
}
