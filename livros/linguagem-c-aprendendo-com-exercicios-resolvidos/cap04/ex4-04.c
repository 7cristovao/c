// Faça um programa que receba um número inteiro e
// que verifique se esse número é par ou ímpar.
#include<stdio.h>
#include<curses.h>
#include<stdlib.h>
int main(){
    int num;
    printf("Digite um número inteiro: ");
    scanf("%i", &num);
    if(num == 0){
        printf("O número %i é neutro\n", num);
    }
    else if(num % 2 == 0){
        printf("O número %i é par\n", num);
    }

    else{
        printf("O número %i é ímpar\n", num);;
    }
    return 0;
    exit(0);
}