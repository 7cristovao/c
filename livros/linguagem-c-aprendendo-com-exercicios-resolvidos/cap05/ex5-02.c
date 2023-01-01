// Desenvolva um programa para comparar a idade de
// Pedro e de Joana e informar quem é o mais velho.
// Dados de entrada: idade de Pedro e de Joana (tipo
// das variáveis: inteiro, e valor em anos). Observação:
// essas pessoas possuem idades diferentes.
#include<stdio.h>
#include<stdlib.h>
int main(){
    int idade_Pedro, idade_Joana;
    printf("Digite a idade de Pedro: ");
    scanf("%d",&idade_Pedro);
    printf("Digite a idade de Joana: ");
    scanf("%d",&idade_Joana);
    if (idade_Pedro > idade_Joana)
    {
        printf("Pedro é o mais velho.\n");
    }
    else if (idade_Joana > idade_Pedro)
    {
        printf("Joana é a mais velha.\n");
    }
    else
    {
        printf("Os dois tem a mesma idade.\n");
    }
    
    
}