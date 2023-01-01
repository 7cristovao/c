// Dado um conjunto de N números, faça um programa
// C que calcule e mostre a média aritmética dos
// elementos desse conjunto.
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n; // Declaração de variável para receber a quantidade de números
    int cont; // Declaração de variável para manipular o (for)
    float num; // Declaração de variável para receber cada número
    float soma = 0, media;
    // Declaração de variável para acumular soma e realizar a média
    // Mensagem ao usuário para que insira os dados via teclado
    printf("De quantos números você deseja calcular a média: ");
    scanf("%d",&n);
    if(n < 0) // Validação simples de dados
    {
        printf("Dados incorretos! O número deve ser positivo\n");
        scanf("%d",&n);
    }
    for(cont = 1; cont <= n; cont++){
        printf("Digite um dos números: ");
        scanf("%f",&num);
        soma = soma + num; // Acumular a soma
    }
    media = soma / n; // Calculo da média e apresentação dos resultados
    printf("A média dos valores digitados é de %.1f\n",media);
    return 0;
    exit(0);
}