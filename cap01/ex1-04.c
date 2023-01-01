#include<stdio.h>
#include<curses.h>
#include<stdlib.h>

int main(){
    int suspeitos, confirmados, mortes;
    printf("Digite a quantidade de casos suspeitos: ");
    scanf("%d", &suspeitos);
    printf("\nDigite a quantidade de casos confirmados: ");
    scanf("%d", &confirmados);
    printf("\nDigite a quantidade de mortes: ");
    scanf("%d", &mortes);

    printf("\n\nA quantidade de casos suspeitos são: %d", suspeitos);
    printf("\nA quantidade de casos confirmados são: %d", confirmados);
    printf("\nA quantidade de mortes são: %d", mortes);

    printf("\nTotal de dados: %i\n", suspeitos+confirmados+mortes);

    return 0;
    exit(0);
}