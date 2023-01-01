// Faça um programa que receba um número inteiro
// e que verifique se esse número é par ou se é ímpar.
// O programa deve informar ao usuário o número
// apenas se for par e maior que 15 e se for ímpar apenas
// se for menor que 50. 
#include<stdio.h>
#include<curses.h>
#include<stdlib.h>
int main(){
    int num;
    printf("Digite um número: ");
    scanf("%i",&num);
    if(num % 2 == 0){
        printf("O número %i é par\n",num);
        if(num % 2 == 0 && num > 15){
            printf("...também maior que 15\n",num);
        }
    }
    else if(num % 2 == 1){
        printf("O número %i é ímpar\n",num);
        if(num % 2 == 1 && num < 50){
            printf("...também menor que 50\n",num);
        }
    }
    else{
        printf("");
    }
    return 0;
    exit(0);
}