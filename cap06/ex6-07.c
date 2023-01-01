// Desenvolva um programa, tabinter.cpp, para calcular
// a tabuada de um intervalo de números que será
// informado pelo usuário.
#include<stdio.h>
#include<stdlib.h>
int main(){
    int cont, cont2, num1, num2;
    printf("Digite o Limite Inferior do intervalo: ");
    scanf("%d",&num1);
    printf("Digite o Limite Superior do intervalo: ");
    scanf("%d",&num2);
    for(cont = num1; cont<=num2; cont++)
        for(cont2 = 1; cont2 <= 10; cont2++)
            printf("%d X %d = %d\n", cont, cont2, cont*cont2);
    printf("\n");
        
}