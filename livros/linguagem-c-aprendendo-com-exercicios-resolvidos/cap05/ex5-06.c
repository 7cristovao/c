// Desenvolva um programa para comparar a idade de
// Pedro, de Joana e de Ismael e informar quem é o mais
// velho. Dados de entrada: idade de Pedro, de Joana
// e de Ismael (tipo das variáveis: inteiro, e valor em
// anos). Considere que essas pessoas possuem idades
// diferentes. 
#include<stdio.h>
#include<stdlib.h>
int main(){
    int idade_Pedro, idade_Joana, idade_Ismael;
    printf("Digite a idade de Pedro: ");
    scanf("%d",&idade_Pedro);
    printf("Digite a idade de Joana: ");
    scanf("%d",&idade_Joana);
    printf("Digite a idade de Ismael: ");
    scanf("%d",&idade_Ismael);
    if(idade_Pedro > idade_Joana && idade_Pedro > idade_Ismael)
        printf("Pedro é o mais velho.\n");
    else if (idade_Joana > idade_Pedro && idade_Joana > idade_Ismael)
        printf("Joana é a mais velha.\n");
    else if (idade_Ismael > idade_Joana && idade_Ismael > idade_Pedro)
        printf("Ismael é o mais velho.\n");
    return 0;
    exit(0);
}