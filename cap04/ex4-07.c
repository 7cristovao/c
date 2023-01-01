// Faça um programa que receba um número inteiro
// e que verifique se esse número é par ou ímpar.
// O programa deve informar:
// a)	 se o número é par, caso afirmativo informar também
// se ele é maior que 15;
// b)	 se o número é ímpar, caso afirmativo se ele é menor
// que 50.
#include<stdio.h>
#include<curses.h>
#include<stdlib.h>
int main(){
    int num;
    printf("Digite um número inteiro: ");
    scanf("%i",&num);
    if(num % 2 == 0){
        printf("O número %i é par\n",num);
        if(num > 15){
            printf("O número %i é maior que 15\n");
        }
        else{
            printf("O número %i não é maior que 15\n");
        }
    }
    else if(num % 2 == 1){
        printf("O número %i é impar\n",num);
        if(num < 50){
            printf("O número %i é menor que 50\n");
        }
        else{
            printf("O número %i não é menor que 50\n");
        }
    }
    return 0;
    exit(0);
}