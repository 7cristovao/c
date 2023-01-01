// Escreva um programa que solicite ao usuário um 
// número inteiro e imprima a tabuada de multiplicação
// desse número até 10, sendo que o comando da operação
// de multiplicação deve ser usado dentro do printf.

#include<stdio.h>
#include<curses.h>
#include<stdlib.h>

int main(){
    int auxnum;
    printf("Digite um número inteiro: ");
    scanf("%d", &auxnum);
    printf("\n\nTabuada do %d: ", auxnum);
    printf("\n%d x 1 = %d", auxnum, auxnum*1);
    printf("\n%d x 2 = %d", auxnum, auxnum*2);
    printf("\n%d x 3 = %d", auxnum, auxnum*3);
    printf("\n%d x 4 = %d", auxnum, auxnum*4);
    printf("\n%d x 5 = %d", auxnum, auxnum*5);
    printf("\n%d x 6 = %d", auxnum, auxnum*6);
    printf("\n%d x 7 = %d", auxnum, auxnum*7);
    printf("\n%d x 8 = %d", auxnum, auxnum*8);
    printf("\n%d x 9 = %d", auxnum, auxnum*9);
    printf("\n%d x 10 = %d\n", auxnum, auxnum*10);

    return 0;
    exit(0);
}