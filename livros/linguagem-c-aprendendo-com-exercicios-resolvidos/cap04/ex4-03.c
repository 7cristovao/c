// Escreva um programa que leia a quantidade de alunas
// e de alunos. Depois esse programa deve informar se
// essa turma possui mais alunos ou mais alunas. Se
// essa turma possuir a quantidade de alunas maior que
// a de alunos, informe o total de alunos dessa turma.
// O programa deve verificar se a quantidade de alunos
// é igual a de alunas.
#include<stdio.h>
#include<curses.h>
#include<stdlib.h>
int main(){
    int num_alunos, num_alunas;
    printf("Digite o número de alunos: ");
    scanf("%d", &num_alunos);
    printf("Digite o número de alunas: ");
    scanf("%d", &num_alunas);
    printf("São %d alunos e %d alunas.", num_alunos, num_alunas);
    if(num_alunos > num_alunas){
        printf("\nTem mais alunos\n");
    }
    else if(num_alunos == num_alunas){
        printf("\nA quantidade de alunos e alunas é a mesma\n");
    }
    else{
        printf("\nTem mais alunas");
        printf("\nComo tem mais alunas,\n a quantidade total é de %d\n", num_alunos+num_alunas);
    }

    return 0;
    exit(0);
}