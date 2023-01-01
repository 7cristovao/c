// Faça um programa que receba dois números inteiros
// e que informe o maior deles. O programa deve
// verificar também se o maior número é par ou ímpar.
#include<stdio.h>
#include<stdlib.h>
int main(){
    int num1,num2;
    printf("Digite um nº inteiro: ");
    scanf("%d",&num1);
    printf("Digite outro nº inteiro: ");
    scanf("%d",&num2);
    if(num1>num2){
        printf("%d é maior que %d\n",num1,num2);
        if(num1 % 2 == 0)
            printf("%d é par\n",num1);
        else
            printf("%d é ímpar\n",num1);
    }
    else if (num2>num1){
        printf("%d é maior que %d\n",num2,num1);
        if(num2 % 2 == 0)
            printf("%d é par\n",num2);
        else
            printf("%d é ímpar\n",num2);
    }
    else
        printf("Ambos são iguais.\n");
    return 0;
    exit(0);
}