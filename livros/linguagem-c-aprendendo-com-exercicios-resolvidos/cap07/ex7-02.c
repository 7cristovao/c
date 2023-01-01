// Faça um programa que exiba a tabuada dos números
// de 10 a 20. Por exemplo:
// 10x0=0
// 10x1=10
// ....
// 10x10=100
// até chegar à tabuada de 20,
// 20x0=0
// 20x1=20
// ....
// 20x10=200
#include<stdio.h>
#include<stdlib.h>
int main(){
    int cont, auxcont = 10;
    cont = 0;
    // Ciclo de repetição externo para incrementar auxcont
    // "Tabuada do número auxcont"
    while (auxcont <= 20)
    {
        cont = 0; // Importante zerar cont pois será usado novamente
        // Laço interno para cálculo e impressão dos resultados
        while (cont<=10)
        {
            printf("%d X %d = %d\n",cont,auxcont,cont*auxcont);
            cont++;
        }
        printf("\n\n");
        auxcont++;
    }
}