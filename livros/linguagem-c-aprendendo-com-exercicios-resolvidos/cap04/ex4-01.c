// Desenvolva um programa para comparar a idade de
// Pedro e a de Joana e informar quem é o mais velho.
// Dados de entrada: idade de Pedro e de Joana (tipo
// das variáveis: inteiro, e valor em anos). Observação:
// essas pessoas possuem idades diferentes. 

#include<stdio.h>
#include<curses.h>
#include<stdlib.h>

int main(){
    int idade_Pedro, idade_Joana, nome1, nome2;

    printf("Qual a idade de Pedro?: ");
    scanf("%d", &idade_Pedro);

    printf("Qual a idade de Joana?: ");
    scanf("%d", &idade_Joana);

    printf("Pedro tem %d anos e Joana tem %d anos. \n", idade_Pedro, idade_Joana); 

    if(idade_Pedro > idade_Joana){
        printf("Pedro é mais velho que Joana\n");
    }   
    else if(idade_Pedro == idade_Joana){
        printf("Os dois tem a mesma idade\n");
    }
    else{
        printf("Joana é mais velha que Pedro\n");
    }
    

    return 0;
    exit(0);
}