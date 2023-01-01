//Faça um programa que receba um número inteiro
//e que verifique se esse número é par ou ímpar.
//O programa deve informar se o número é par, caso
//afirmativo informar também se é ou não maior que
//15 ou se o número é ímpar, caso afirmativo informar
//se é ou não menor que 50.

#include <stdio.h>

int main(){
    int num;
    printf("Digite um número inteiro: ");
    scanf("%d",&num);
    if(num % 2 == 0){
        printf("\nO numero %d eh par", num);
        if(num > 15){
            printf("\nO numero %d eh maior que 15\n", num);
        }
        else{
            printf("\nO numero %d nao eh maior que 15\n", num);
        }
    }
    else{
        printf("\nO numero %d eh impar", num);
        if(num < 50){
            printf("\nO numero %d eh menor que 50\n", num);
        }
        else{
            printf("\nO numero %d nao eh menor que 50\n", num);
        }
    }
    return 0;
}
