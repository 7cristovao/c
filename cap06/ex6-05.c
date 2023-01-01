// Desenvolva um programa, maioridade.cpp, que
// solicite ao usuário a idade de três pessoas e apresente
// na tela a maior e a menor idade.
#include<stdio.h>
#include<stdlib.h>
int main(){
    int idade, cont, maior = 0, menor = 150;
    for(cont = 0; cont < 3; cont++)
    {
        printf("Digite a idade de uma pessoa: ");
        scanf("%d",&idade);
        if (idade < 0)
        {
            printf("\nDado inválido! Coloque uma idade maior que 0. \n");
            printf("Digite a idade de uma pessoa: ");
            scanf("%d",&idade);
        }
        if (idade > maior)
            maior = idade;
        if (idade < menor)
            menor = idade;
    }
    printf("A maior idade é %d\n",maior);
    printf("A menor idade é %d\n",menor);
    
}
