// Desenvolva um programa que calcule a média das
// notas de alunos para uma turma de no máximo
// 100 alunos. O programa deve solicitar no início o
// tamanho da turma.
#include<stdio.h>
#include<stdlib.h>
int main(){
    int qnt, cont;
    float notas[100], soma = 0, media;
    // Início do programa
    // Entrada com validação mensagem de ERRO
    printf("Quantos alunos a turma possui? (máx: 100)");
    scanf("%d",&qnt);
    while((qnt>100) || (qnt<0))
    {
        printf("Digite quantos alunos a turma possui (máx: 100)");
        scanf("%d",&qnt);
    }
    for(cont=0;cont<qnt;cont++) // Recebimento de quantidade de notas
    {
        printf("Digite a nota do aluno %d: ", cont+1);
        scanf("%f",&notas[cont]);
        while((notas[cont]<0) || (notas[cont]>10))
        {
            printf("ERRO! Digite a nota do aluno %d: ",cont+1);
            scanf("%f",&notas[cont]);
        }
        soma += notas[cont];
    }
    // Resultados
    media = soma / qnt;
    printf("\nA média da turma é: %.2f\n",media);
    return 0;
    exit(0);
}