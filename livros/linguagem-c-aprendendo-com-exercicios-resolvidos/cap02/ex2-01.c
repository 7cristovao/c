// Escreva um programa que leia o número de chuteiras de uma loja
// de esporte. Os valores deverão ser inseridos por meio do teclado.
// Como saída, o programa deve apresentar o número de chuteiras e suas
// marcas (marca A, marca B, marca C).

#include<stdio.h>
#include<curses.h>
#include<stdlib.h>

int main(){

    int marca_A, marca_B, marca_C;

    printf("Insira a quantidade de chuteiras da marca(A): ");
    scanf("%i", &marca_A);
    printf("Insira a quantidade de chuteiras da marca(B): ");
    scanf("%i", &marca_B);
    printf("Insira a quantidade de chuteiras da marca(C): ");
    scanf("%i", &marca_C);
    
    printf("\t    Quantidade de chuteiras em estoque\n\n");
    printf("\tMarca(A) \t Marca(B) \t Marca(C)\n\n");
    printf("\t   %i    \t    %i    \t    %i\n", marca_A, marca_B, marca_C);

    return 0;
    exit(0);
}