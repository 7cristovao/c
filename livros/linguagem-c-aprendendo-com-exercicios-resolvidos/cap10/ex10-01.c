// Escreva um programa para informar o maior
// elemento de um vetor de 5 posições do tipo inteiro.
// Esse programa deve possuir uma função para
// verificar o maior número desse vetor.
#include<stdio.h>
#include<stdlib.h>
float verMaior(float maior_num[5]){
    float maior = 0;
    int cont;
    for (cont = 0; cont < 5; cont++){
        // Teste de verificação do maior número
        if(maior_num[cont]>maior)
            maior = maior_num[cont];
    }
    return maior;
}
int main(){
    float num[5], maior_num;
    int cont;
    // Armazenando elementos do vetor
    for(cont = 0; cont < 5; cont++)
    {
        printf("Digite o %d elemento para o vetor: ", cont+1);
        scanf("%f",&num[cont]);
    }
    // Recebendo o retorno da função
    maior_num = verMaior(num);
    // Resultados
    printf("O maior número é %.2f\n",maior_num);
    return 0;
    exit(0);
}