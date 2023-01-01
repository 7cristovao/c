// Escreva um programa que leia o número de alunos
// e o de alunas de uma sala. Como saída, o programa
// deve apresentar primeiro quem estiver em maior
// quantidade. Por exemplo, se na sala tiver mais
// alunos, apresente primeiro o número de alunos, caso
// contrário apresente o número de alunas e depois o de
// alunos. Considere o caso em que o número de alunos
// é igual ao número de alunas.
#include<stdio.h>
#include<stdlib.h>
int main(){
    int num_alunos, num_alunas;
    printf("Qual a quantidade de alunos da sala? ");
    scanf("%d",&num_alunos);
    printf("Qual a quantidade de alunas da sala? ");
    scanf("%d",&num_alunas);
    if (num_alunas > num_alunos){
        printf("Há %d alunas\n",num_alunas);
    }
    else if(num_alunos > num_alunas){
        printf("Há %d alunos\n",num_alunos);
    }
    else{
        printf("O número de alunas e alunos são iguais\n");
    }
    return 0;
    exit(0);
}